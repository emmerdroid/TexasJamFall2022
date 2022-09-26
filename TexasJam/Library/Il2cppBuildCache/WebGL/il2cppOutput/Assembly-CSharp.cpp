#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31;
// System.Collections.Concurrent.ConcurrentDictionary`2<Melanchall.DryWetMidi.Multimedia.NotePlaybackEventMetadata,System.Byte>
struct ConcurrentDictionary_2_t6E1585DC4DED59DEEE0BF7513582CC5FEF56ABD9;
// System.Collections.Concurrent.ConcurrentDictionary`2<Melanchall.DryWetMidi.Common.SevenBitNumber,Melanchall.DryWetMidi.MusicTheory.Note>
struct ConcurrentDictionary_2_tF47B152F6136C9194559689D133E7D55C6374E7E;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t1DDD2F48B87E022F599DF2452A49BB70BE95A7F8;
// System.Collections.Generic.Dictionary`2<Melanchall.DryWetMidi.Multimedia.MidiDevice/CreationContext,System.String>
struct Dictionary_2_tB56B2F46A477099439F208864C91FF6E1C8D68C2;
// System.EventHandler`1<Melanchall.DryWetMidi.Multimedia.ErrorOccurredEventArgs>
struct EventHandler_1_t91D77E17587118EE6B5686879F96C8DE6697E156;
// System.EventHandler`1<Melanchall.DryWetMidi.Interaction.LengthChangedEventArgs>
struct EventHandler_1_t1A0527082D2EBBF21DF9361E3DED887567F0D9EF;
// System.EventHandler`1<Melanchall.DryWetMidi.Multimedia.MidiEventPlayedEventArgs>
struct EventHandler_1_t3C892FEA03250A467E3FA81836BC2E8BEEDB633B;
// System.EventHandler`1<Melanchall.DryWetMidi.Multimedia.MidiEventSentEventArgs>
struct EventHandler_1_tBB45525567384737A4C1698CCAE2497919D404B4;
// System.EventHandler`1<Melanchall.DryWetMidi.Multimedia.NotesEventArgs>
struct EventHandler_1_tD53285C13B6974AAACBA9FD9151014AF05E01516;
// System.EventHandler`1<System.Object>
struct EventHandler_1_tFA1C30E54FA1061D79E711F65F9A174BFBD8CDCB;
// System.EventHandler`1<Melanchall.DryWetMidi.Interaction.TimeChangedEventArgs>
struct EventHandler_1_tA5E331A41F52458961B747EAC5B3A39CDF3396E9;
// System.Func`2<Melanchall.DryWetMidi.Interaction.Note,System.String>
struct Func_2_tEDFF7C02ADD87D637C43084161242EA41259A2BA;
// System.Func`2<Melanchall.DryWetMidi.Interaction.NoteData,Melanchall.DryWetMidi.Interaction.Note>
struct Func_2_t2D750BAFC03CBA7C98E36CEC629BF31497C02D3C;
// System.Func`2<System.Object,System.Boolean>
struct Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8;
// System.Func`2<System.Object,System.Object>
struct Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436;
// System.Func`2<Melanchall.DryWetMidi.Multimedia.OutputDevice,System.Boolean>
struct Func_2_t9C331FABBD6817E7209986DEE757FE09F192C16F;
// System.Func`2<Melanchall.DryWetMidi.Multimedia.OutputDevice,System.String>
struct Func_2_t39D5366EA29875308A08408C95C8986F8229009D;
// System.Collections.Generic.ICollection`1<Melanchall.DryWetMidi.Interaction.Note>
struct ICollection_1_tF9459207527CC5D861D0B1742C5726D60F066545;
// System.Collections.Generic.ICollection`1<Melanchall.DryWetMidi.Multimedia.OutputDevice>
struct ICollection_1_tC1968C735E2C0AD17254BB1BC3B3C8D2C0C823E3;
// System.Collections.Generic.IEnumerable`1<Melanchall.DryWetMidi.Interaction.Note>
struct IEnumerable_1_tA9240B280C4CFA6D112D601087D3F1AD5EE28012;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t52B1AC8D9E5E1ED28DF6C46A37C9A1B00B394F9D;
// System.Collections.Generic.IEnumerable`1<Melanchall.DryWetMidi.Multimedia.OutputDevice>
struct IEnumerable_1_t913D7F5D8C1F3E0A19B915F80F39A0BD3DB04912;
// System.Collections.Generic.IEnumerable`1<Melanchall.DryWetMidi.Composing.PatternAction>
struct IEnumerable_1_t44526A1D9B8C5CB4567E028FAC52E240A873E351;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_tBD60400523D840591A17E4CBBACC79397F68FAA2;
// System.Collections.Generic.IEnumerator`1<Melanchall.DryWetMidi.Multimedia.PlaybackEvent>
struct IEnumerator_1_t5F7833CA2C072546A473B48E83A70816B30F0745;
// System.Collections.Generic.List`1<System.Double>
struct List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC;
// System.Collections.Generic.List`1<Melanchall.DryWetMidi.Interaction.ITempoMapValuesCache>
struct List_1_tC4BB8297C687FD611B666F94E9DA041E4C2AAF3D;
// System.Collections.Generic.List`1<NoteObject>
struct List_1_t30C93A65DA86A6C517E439B0040B2AE67DE85112;
// System.Collections.Generic.List`1<Melanchall.DryWetMidi.Multimedia.NotePlaybackEventMetadata>
struct List_1_tE21D4F34EB9FDA66674AC659505FD188BCEDE88D;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<Melanchall.DryWetMidi.Composing.PatternAction>
struct List_1_tF724ABED98455E69D1FBE5EFE7A4DECEA823222F;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// Melanchall.DryWetMidi.Interaction.ValueLine`1<Melanchall.DryWetMidi.Interaction.Tempo>
struct ValueLine_1_t285E4F9D4DD10F5437B65E61130B41AB14BBE226;
// Melanchall.DryWetMidi.Interaction.ValueLine`1<Melanchall.DryWetMidi.Interaction.TimeSignature>
struct ValueLine_1_t7158889A6BC00189D06403A25199F9B832F5E9FF;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Double[]
struct DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// Lane[]
struct LaneU5BU5D_t0CF8D81AFD60F36B05B27E64BBBC911D131D4F35;
// Melanchall.DryWetMidi.Interaction.Note[]
struct NoteU5BU5D_tCBBDF8452DE17E526D80118C9E6926262C9BD7E9;
// NoteObject[]
struct NoteObjectU5BU5D_t8255A595F4A09B9F99902458657EC651EBF3CDD7;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// Melanchall.DryWetMidi.Multimedia.OutputDeviceProperty[]
struct OutputDevicePropertyU5BU5D_t45655F8E0B6DE36ED82E5206FBB0FA948D82F9FE;
// Melanchall.DryWetMidi.Common.SevenBitNumber[]
struct SevenBitNumberU5BU5D_t7637700F96F6887FA1C000837321021B7902B396;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.AudioClip
struct AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE;
// UnityEngine.AudioSource
struct AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B;
// BackgroundMover
struct BackgroundMover_tCB967D07193551E3830EBA987419287E3598C848;
// BeatScroller
struct BeatScroller_t6BF3F88E6125A8C8789A3610E3EFEA29CA91F380;
// ButtonController
struct ButtonController_t0D27B81A3DC32EC27023C3CD654D850B38C7F1C7;
// Melanchall.DryWetMidi.Core.BytesToMidiEventConverter
struct BytesToMidiEventConverter_t9E23B2EE144400112FCE1163980D43C0D52FD688;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// UnityEngine.Networking.CertificateHandler
struct CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E;
// Melanchall.DryWetMidi.Core.ChunkTypesCollection
struct ChunkTypesCollection_t4F1807C820757FE9CCE016AEE6B7211177DE3C79;
// Melanchall.DryWetMidi.Core.ChunksCollection
struct ChunksCollection_tD7AF62E37A2C5E8D73F6AD83974CD6F5BD91E119;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7;
// Melanchall.DryWetMidi.Core.DecodeTextCallback
struct DecodeTextCallback_t37670B0A76F35064F306DADE96EEEBFADC385368;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// DemoScript
struct DemoScript_t035174A3DB2A2A84B0052CF0F69798314D2232D8;
// UnityEngine.Networking.DownloadHandler
struct DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB;
// EffectObject
struct EffectObject_t256C948AF9F8DB1A316D25FB9B8BAE64FD1B3C1C;
// System.Text.Encoding
struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827;
// Melanchall.DryWetMidi.Multimedia.EventCallback
struct EventCallback_tFFA0A8D8A75133F69052AB380962824DF16B7656;
// System.EventHandler
struct EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B;
// Melanchall.DryWetMidi.Core.EventTypesCollection
struct EventTypesCollection_t0E1AB1201A1795077C84816F0FD7ACB6EEFF67B2;
// UnityEngine.UI.FontData
struct FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738;
// GameManager
struct GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// Melanchall.DryWetMidi.Core.IEventWriter
struct IEventWriter_tE524C9486CCE00EA410F1E947D67338938A63BBE;
// Melanchall.DryWetMidi.Multimedia.IOutputDevice
struct IOutputDevice_tB8C3B893BFD90221C6A619BD3DF9274B8824172A;
// Melanchall.DryWetMidi.Interaction.ITimeSpan
struct ITimeSpan_t8CC9BB2924DD5AA63BA2B599D4E198864AEC21C0;
// InvertCreator
struct InvertCreator_t73F06C8608898BB962DB7AFF980F9AA9630506FA;
// Lane
struct Lane_t286B164399771EA0ED4119258145C46B5AFBD3CF;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// System.IO.MemoryStream
struct MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C;
// Menu
struct Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Melanchall.DryWetMidi.Interaction.MetricTimeSpan
struct MetricTimeSpan_t6BCD0FA647C5BC5289D584F4CF72AC69127E588D;
// Melanchall.DryWetMidi.Multimedia.MidiClock
struct MidiClock_t123E6B5ED66886CE4731DFAEFD08995DBC2C2A6F;
// Melanchall.DryWetMidi.Multimedia.MidiClockSettings
struct MidiClockSettings_t82752292796AED5C35103D97D6A694C24A919B02;
// Melanchall.DryWetMidi.Multimedia.MidiDevice
struct MidiDevice_t736FB1ED772DA5A9202017F93EB436B720EFDD83;
// Melanchall.DryWetMidi.Core.MidiEventToBytesConverter
struct MidiEventToBytesConverter_t7A952CA9589AB6E16808F8E61A3F3B37B5FD37C9;
// Melanchall.DryWetMidi.Core.MidiFile
struct MidiFile_t00456CC0D22B31D61780718A31F002EFC5082774;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// Melanchall.DryWetMidi.Interaction.Note
struct Note_t72FA32C1F792DB6998277D23822C6FBBF619808C;
// Melanchall.DryWetMidi.MusicTheory.Note
struct Note_t3D41F3AD2C3580F851A482C6559734126CAE4976;
// Melanchall.DryWetMidi.Multimedia.NoteCallback
struct NoteCallback_t53ADDA5AA061C7E49D28DBE1C181216CD7E8FFE4;
// Melanchall.DryWetMidi.Interaction.NoteDetectionSettings
struct NoteDetectionSettings_tBBDCB0CE0E95324BD3141AD2A42FFD977A1B858B;
// NoteObject
struct NoteObject_tB227B82DE6D9050A93DC7A2F5A32C79C696F0973;
// Melanchall.DryWetMidi.Multimedia.NotesEventArgs
struct NotesEventArgs_t32257D581DB8C05FAFF967215383C081CEAF9195;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// Melanchall.DryWetMidi.MusicTheory.Octave
struct Octave_t9692EB270E2F344FC094FDE6252FEA8F72558EC6;
// Melanchall.DryWetMidi.Multimedia.OutputDevice
struct OutputDevice_t7A9B57531DCA6BF309413A7FACE2F48E261EC9BB;
// Melanchall.DryWetMidi.Composing.Pattern
struct Pattern_tB42554DBD9AF31288602637AFB2B7E8F53FC703A;
// Melanchall.DryWetMidi.Composing.PatternBuilder
struct PatternBuilder_t3C2CB526323390746CEDE3AD77A06AF96217496B;
// Melanchall.DryWetMidi.Multimedia.Playback
struct Playback_t57195DC933DF811AF3EF953E136F4B9610C70D3A;
// Melanchall.DryWetMidi.Multimedia.PlaybackDataTracker
struct PlaybackDataTracker_t3E93F1003A91BC309F70EF0704F7C30FA795DF94;
// Melanchall.DryWetMidi.Multimedia.PlaybackSettings
struct PlaybackSettings_tC075B746962B5D3073B0E0BC48BC4106C53C23C0;
// Melanchall.DryWetMidi.Multimedia.PlaybackSnapping
struct PlaybackSnapping_tAFF59CBC1A17B1DEDB3438762AA107E3504F9BBC;
// Melanchall.DryWetMidi.Core.ReaderSettings
struct ReaderSettings_tEB618C0A38AFFF2ADF1176F0F5F11EEC6DEA6E1D;
// Melanchall.DryWetMidi.Core.ReadingSettings
struct ReadingSettings_tF4A87F7B3EBDAE1FC80442C1C6A71B0B017D35DB;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// UnityEngine.Renderer
struct Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// ScoreManager
struct ScoreManager_t52E31A532CA8B702090279B85180CF575D6FE113;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385;
// SongManager
struct SongManager_t0B58391B2DFB12045E717021CF4CF7EE474665A3;
// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF;
// System.IO.Stream
struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// Melanchall.DryWetMidi.Interaction.TempoMap
struct TempoMap_t2C66560BA5D33AACE8AB672141C4228C04142D5A;
// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1;
// UnityEngine.TextGenerator
struct TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// Melanchall.DryWetMidi.Core.TimeDivision
struct TimeDivision_tF58599BD137E793424B255F00872D47D287F6AB3;
// Melanchall.DryWetMidi.Interaction.TimedEvent
struct TimedEvent_t870342A119FD0AB374B27D4D53F341A22B9E6FEE;
// Melanchall.DryWetMidi.Interaction.TimedEventDetectionSettings
struct TimedEventDetectionSettings_t1FCA50DEDAC57C53B0CD1BE5164789D76D63E86A;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E;
// UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396;
// Melanchall.DryWetMidi.Core.UnknownChannelEventCallback
struct UnknownChannelEventCallback_t2EFB21A4459CE4BD9944B322EF74920B63A493CA;
// UnityEngine.Networking.UploadHandler
struct UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA;
// System.Uri
struct Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013;
// WallScript
struct WallScript_t36D3BD898C2E4F038846DC27F799DD591852A7B9;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C;
// BackgroundMover/<WallSpawn>d__6
struct U3CWallSpawnU3Ed__6_tAF3991F444558EB25A917E5E64C0654A3288B8C3;
// DemoScript/<>c
struct U3CU3Ec_tDE021ECD8EACE49080A257681D29E16DCF3F53F2;
// InvertCreator/<startCount>d__9
struct U3CstartCountU3Ed__9_tC6AEADF32799B25FD8FC3FAE295448A88287AB6D;
// Lane/<WaittoSwicth>d__15
struct U3CWaittoSwicthU3Ed__15_t615CB7E544E6313578445BF522D046CCFE0D1DC8;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;
// Melanchall.DryWetMidi.Multimedia.OutputDevice/OutputDeviceHandle
struct OutputDeviceHandle_tEB644504BD28E311DCD34A7FBDBBB65C7236A5E6;
// Melanchall.DryWetMidi.Multimedia.OutputDeviceApi/Callback_Win
struct Callback_Win_t87FA3FC87E13F7EE8F035648617EE3F8BF93D8F8;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE;
// SongManager/<ReadFromWebsite>d__14
struct U3CReadFromWebsiteU3Ed__14_tAB16D26B298F15A356098B5CCAE0BF31AFD65381;
// SongManager/<WaitLoad>d__20
struct U3CWaitLoadU3Ed__20_t055F386818B09FF1C73268153A9C10D8A79A4BE8;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974;

IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_tD53285C13B6974AAACBA9FD9151014AF05E01516_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t39D5366EA29875308A08408C95C8986F8229009D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t9C331FABBD6817E7209986DEE757FE09F192C16F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tEDFF7C02ADD87D637C43084161242EA41259A2BA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_1_tF9459207527CC5D861D0B1742C5726D60F066545_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t30C93A65DA86A6C517E439B0040B2AE67DE85112_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MusicalTimeSpan_tF775CB468731C8C8DFD70DD05C04218B8157A249_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NoteU5BU5D_tCBBDF8452DE17E526D80118C9E6926262C9BD7E9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Note_t3D41F3AD2C3580F851A482C6559734126CAE4976_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OutputDevice_t7A9B57531DCA6BF309413A7FACE2F48E261EC9BB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PatternBuilder_t3C2CB526323390746CEDE3AD77A06AF96217496B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ScoreManager_t52E31A532CA8B702090279B85180CF575D6FE113_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SevenBitNumber_t9D9AA0CA6CF9F4FD2896F25C6CBF7769F0D8B6A8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SongManager_t0B58391B2DFB12045E717021CF4CF7EE474665A3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TempoMap_t2C66560BA5D33AACE8AB672141C4228C04142D5A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CReadFromWebsiteU3Ed__14_tAB16D26B298F15A356098B5CCAE0BF31AFD65381_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tDE021ECD8EACE49080A257681D29E16DCF3F53F2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CWaitLoadU3Ed__20_t055F386818B09FF1C73268153A9C10D8A79A4BE8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CWaittoSwicthU3Ed__15_t615CB7E544E6313578445BF522D046CCFE0D1DC8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CWallSpawnU3Ed__6_tAF3991F444558EB25A917E5E64C0654A3288B8C3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CstartCountU3Ed__9_tC6AEADF32799B25FD8FC3FAE295448A88287AB6D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0C10E47675493434D04CD8025C8303AF94F7BA5A;
IL2CPP_EXTERN_C String_t* _stringLiteral141751B3E3BD5A346663DBD351A2EE01EB8AEDF9;
IL2CPP_EXTERN_C String_t* _stringLiteral16565924D9A149B4BF76B0E247A9B848E113C4A0;
IL2CPP_EXTERN_C String_t* _stringLiteral17109A988CBB1F66E3937D5245653D7CCA420351;
IL2CPP_EXTERN_C String_t* _stringLiteral1B00FE8D93C8DA57AEA59DB0FE808A827C3503B6;
IL2CPP_EXTERN_C String_t* _stringLiteral265A4651FB1F71BAF8A53859EC2D237C5C2CF448;
IL2CPP_EXTERN_C String_t* _stringLiteral2CAB7352D581563C66828F9A3DC5ED58B585BC44;
IL2CPP_EXTERN_C String_t* _stringLiteral34C62C0EA9964074E2383B62B1E943BBA2405B92;
IL2CPP_EXTERN_C String_t* _stringLiteral3AE148F4539A6130C80EF45C5441F068ADBF8C8C;
IL2CPP_EXTERN_C String_t* _stringLiteral3B9EBE27FDDD0E7D927D93ED4D83673CE74ADE5D;
IL2CPP_EXTERN_C String_t* _stringLiteral3F86111F44D66C543B732847E04E3C2A5B38BB3D;
IL2CPP_EXTERN_C String_t* _stringLiteral4D2110161D78FB7F59434B3E566205F3A31E899F;
IL2CPP_EXTERN_C String_t* _stringLiteral51B6E42767E2559991968046FCE0D8D5A1EC7385;
IL2CPP_EXTERN_C String_t* _stringLiteral562DF94FE022C3EDB334BE693F96C1F437F4CDC2;
IL2CPP_EXTERN_C String_t* _stringLiteral6955CD5C17DEEB2505D15147A8070387E35CCE73;
IL2CPP_EXTERN_C String_t* _stringLiteral6DB0AA29D452F6EBFC9F831658B901EA2F208AA6;
IL2CPP_EXTERN_C String_t* _stringLiteral7B5058A935046849B2F1B8D279BA1332E8A54599;
IL2CPP_EXTERN_C String_t* _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1;
IL2CPP_EXTERN_C String_t* _stringLiteral8A8EFDA91C6C257127F8C8D526FAD7E7552766AA;
IL2CPP_EXTERN_C String_t* _stringLiteralA493FF06F94D0907E2F1797D03C4EB68CE5751F2;
IL2CPP_EXTERN_C String_t* _stringLiteralA7984896866A736F9D12F10D6C6358521C694DED;
IL2CPP_EXTERN_C String_t* _stringLiteralAAD7E53D5D473B0C6A1EDDD7ACD1B7BB79B3BEDD;
IL2CPP_EXTERN_C String_t* _stringLiteralABAFD062C0021BA081173D4DD1A949B024535F0B;
IL2CPP_EXTERN_C String_t* _stringLiteralB28922D4CBB047742711F74389D967A03809C34C;
IL2CPP_EXTERN_C String_t* _stringLiteralB46E953D1EF50EAA2F09DB488AC9B9437CEC6395;
IL2CPP_EXTERN_C String_t* _stringLiteralDFA1EA6CBAEDACBA0940FEDA7050C10F2F0F7C1C;
IL2CPP_EXTERN_C String_t* _stringLiteralE05C614872D9A74C4883A60014465F36ECD733C5;
IL2CPP_EXTERN_C String_t* _stringLiteralF9B418922661D6D91E05EC513FA764F124B9EA46;
IL2CPP_EXTERN_C String_t* _stringLiteralFFC3884485EDAE61C8B559F7DC0AE41C6C4B4442;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m98D387B909AC36B37BF964576557C064222B3C79_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DemoScript_OnNotesPlaybackFinished_m7A2BBC7B040F0268281D7A8E7922D8FB13DF124C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DemoScript_OnNotesPlaybackStarted_mEBAE6300FDC0DF0386E2627FD2565739EFA2E319_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Any_TisOutputDevice_t7A9B57531DCA6BF309413A7FACE2F48E261EC9BB_m3674EE89D4345AB5E8518E585D07F10E134C4FFE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Select_TisNote_t72FA32C1F792DB6998277D23822C6FBBF619808C_TisString_t_mED9DB9A2BB6F6A474CC52215DC7925690A279DC8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Select_TisOutputDevice_t7A9B57531DCA6BF309413A7FACE2F48E261EC9BB_TisString_t_mE37921EB1BB2B54AD8B2EB7B2ED5499B05A42EF6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandler_1__ctor_m0DFCF20BA5A90DC393BC8D21FA5D77CEE8E99AE8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_m39B9D9ED874CA16084F241EC2E1D968DC38DB331_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_m3F8FCF6FB04E43DC4FD8A36D1D69AECF686C9F64_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_mE52FABCA369749DDF8A8FD5C61B7561CECF43DE4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisNoteObject_tB227B82DE6D9050A93DC7A2F5A32C79C696F0973_m8B9AB498238C48116AD36E6695809EC83C985244_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m56E93B74F5254C198272F09C8E4B09483184B929_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mFFF48FBBEC231046FE2B8DB9D222FABF7CFDA6AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m096216F17BF757CF4C7F937E038E1F8D5DD330E1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mA0CE4C11D163EF853E9E6A0FD3C75486EF3A0F31_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mC1A91036A8488F4B39DA566C71D9631B796DCBE2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m31A9E37299AA6C7637D3CB1E55556B22883D2A06_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mA97FC7588319092C5157A79FA19233846EAC0820_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TimeConverter_ConvertTo_TisMetricTimeSpan_t6BCD0FA647C5BC5289D584F4CF72AC69127E588D_m94362943FAEE201DEBF356CA08FC89AF1EAF8EBA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CReadFromWebsiteU3Ed__14_System_Collections_IEnumerator_Reset_m42B5C509AFFC21AD25832880EDD2D6AAA794BD53_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CInitializeOutputDeviceU3Eb__5_0_m5D283EA583758841FC457054573656CC139FB89D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CInitializeOutputDeviceU3Eb__5_1_m862ED9491FD0F5DFDB10D2F3FD9FABD9000294EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CLogNotesU3Eb__11_0_m10BE402BA8F7E139F2D13E03C5DF314C7AA6B7EB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CWaitLoadU3Ed__20_System_Collections_IEnumerator_Reset_m9DCB03235C065C1B53CAB44084FA0EE8401ECD2A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CWaittoSwicthU3Ed__15_System_Collections_IEnumerator_Reset_m603B14382F8630B2D356C1885C2A7A652FD4AF27_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CWallSpawnU3Ed__6_System_Collections_IEnumerator_Reset_mAB4175A0E1E33E80F08ED3E58BF1EF5B378B3E5C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CstartCountU3Ed__9_System_Collections_IEnumerator_Reset_m60AB1316E62AEF3E7602BAE64A5886A0DEC2393F_RuntimeMethod_var;
struct CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_com;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_com;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_com;
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_pinvoke;
struct UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_com;

struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
struct DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB;
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
struct LaneU5BU5D_t0CF8D81AFD60F36B05B27E64BBBC911D131D4F35;
struct NoteU5BU5D_tCBBDF8452DE17E526D80118C9E6926262C9BD7E9;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct SevenBitNumberU5BU5D_t7637700F96F6887FA1C000837321021B7902B396;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_tFDCAFCBB4B3431CFF2DC4D3E03FBFDF54EFF7E9A 
{
public:

public:
};


// System.Object


// System.Collections.Generic.List`1<System.Double>
struct  List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC, ____items_1)); }
	inline DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* get__items_1() const { return ____items_1; }
	inline DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC_StaticFields, ____emptyArray_5)); }
	inline DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* get__emptyArray_5() const { return ____emptyArray_5; }
	inline DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<NoteObject>
struct  List_1_t30C93A65DA86A6C517E439B0040B2AE67DE85112  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	NoteObjectU5BU5D_t8255A595F4A09B9F99902458657EC651EBF3CDD7* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t30C93A65DA86A6C517E439B0040B2AE67DE85112, ____items_1)); }
	inline NoteObjectU5BU5D_t8255A595F4A09B9F99902458657EC651EBF3CDD7* get__items_1() const { return ____items_1; }
	inline NoteObjectU5BU5D_t8255A595F4A09B9F99902458657EC651EBF3CDD7** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(NoteObjectU5BU5D_t8255A595F4A09B9F99902458657EC651EBF3CDD7* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t30C93A65DA86A6C517E439B0040B2AE67DE85112, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t30C93A65DA86A6C517E439B0040B2AE67DE85112, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t30C93A65DA86A6C517E439B0040B2AE67DE85112, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t30C93A65DA86A6C517E439B0040B2AE67DE85112_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	NoteObjectU5BU5D_t8255A595F4A09B9F99902458657EC651EBF3CDD7* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t30C93A65DA86A6C517E439B0040B2AE67DE85112_StaticFields, ____emptyArray_5)); }
	inline NoteObjectU5BU5D_t8255A595F4A09B9F99902458657EC651EBF3CDD7* get__emptyArray_5() const { return ____emptyArray_5; }
	inline NoteObjectU5BU5D_t8255A595F4A09B9F99902458657EC651EBF3CDD7** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(NoteObjectU5BU5D_t8255A595F4A09B9F99902458657EC651EBF3CDD7* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct  List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5  : public RuntimeObject
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


// System.EventArgs
struct  EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA  : public RuntimeObject
{
public:

public:
};

struct EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_StaticFields
{
public:
	// System.EventArgs System.EventArgs::Empty
	EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * ___Empty_0;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_StaticFields, ___Empty_0)); }
	inline EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * get_Empty_0() const { return ___Empty_0; }
	inline EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA ** get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * value)
	{
		___Empty_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_0), (void*)value);
	}
};


// System.MarshalByRefObject
struct  MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8  : public RuntimeObject
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

// Melanchall.DryWetMidi.Interaction.MusicalTimeSpan
struct  MusicalTimeSpan_tF775CB468731C8C8DFD70DD05C04218B8157A249  : public RuntimeObject
{
public:
	// System.Int64 Melanchall.DryWetMidi.Interaction.MusicalTimeSpan::<Numerator>k__BackingField
	int64_t ___U3CNumeratorU3Ek__BackingField_8;
	// System.Int64 Melanchall.DryWetMidi.Interaction.MusicalTimeSpan::<Denominator>k__BackingField
	int64_t ___U3CDenominatorU3Ek__BackingField_9;

public:
	inline static int32_t get_offset_of_U3CNumeratorU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(MusicalTimeSpan_tF775CB468731C8C8DFD70DD05C04218B8157A249, ___U3CNumeratorU3Ek__BackingField_8)); }
	inline int64_t get_U3CNumeratorU3Ek__BackingField_8() const { return ___U3CNumeratorU3Ek__BackingField_8; }
	inline int64_t* get_address_of_U3CNumeratorU3Ek__BackingField_8() { return &___U3CNumeratorU3Ek__BackingField_8; }
	inline void set_U3CNumeratorU3Ek__BackingField_8(int64_t value)
	{
		___U3CNumeratorU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_U3CDenominatorU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(MusicalTimeSpan_tF775CB468731C8C8DFD70DD05C04218B8157A249, ___U3CDenominatorU3Ek__BackingField_9)); }
	inline int64_t get_U3CDenominatorU3Ek__BackingField_9() const { return ___U3CDenominatorU3Ek__BackingField_9; }
	inline int64_t* get_address_of_U3CDenominatorU3Ek__BackingField_9() { return &___U3CDenominatorU3Ek__BackingField_9; }
	inline void set_U3CDenominatorU3Ek__BackingField_9(int64_t value)
	{
		___U3CDenominatorU3Ek__BackingField_9 = value;
	}
};

struct MusicalTimeSpan_tF775CB468731C8C8DFD70DD05C04218B8157A249_StaticFields
{
public:
	// Melanchall.DryWetMidi.Interaction.MusicalTimeSpan Melanchall.DryWetMidi.Interaction.MusicalTimeSpan::Whole
	MusicalTimeSpan_tF775CB468731C8C8DFD70DD05C04218B8157A249 * ___Whole_0;
	// Melanchall.DryWetMidi.Interaction.MusicalTimeSpan Melanchall.DryWetMidi.Interaction.MusicalTimeSpan::Half
	MusicalTimeSpan_tF775CB468731C8C8DFD70DD05C04218B8157A249 * ___Half_1;
	// Melanchall.DryWetMidi.Interaction.MusicalTimeSpan Melanchall.DryWetMidi.Interaction.MusicalTimeSpan::Quarter
	MusicalTimeSpan_tF775CB468731C8C8DFD70DD05C04218B8157A249 * ___Quarter_2;
	// Melanchall.DryWetMidi.Interaction.MusicalTimeSpan Melanchall.DryWetMidi.Interaction.MusicalTimeSpan::Eighth
	MusicalTimeSpan_tF775CB468731C8C8DFD70DD05C04218B8157A249 * ___Eighth_3;
	// Melanchall.DryWetMidi.Interaction.MusicalTimeSpan Melanchall.DryWetMidi.Interaction.MusicalTimeSpan::Sixteenth
	MusicalTimeSpan_tF775CB468731C8C8DFD70DD05C04218B8157A249 * ___Sixteenth_4;
	// Melanchall.DryWetMidi.Interaction.MusicalTimeSpan Melanchall.DryWetMidi.Interaction.MusicalTimeSpan::ThirtySecond
	MusicalTimeSpan_tF775CB468731C8C8DFD70DD05C04218B8157A249 * ___ThirtySecond_5;
	// Melanchall.DryWetMidi.Interaction.MusicalTimeSpan Melanchall.DryWetMidi.Interaction.MusicalTimeSpan::SixtyFourth
	MusicalTimeSpan_tF775CB468731C8C8DFD70DD05C04218B8157A249 * ___SixtyFourth_6;
	// System.Int32 Melanchall.DryWetMidi.Interaction.MusicalTimeSpan::FractionPartMultiplier
	int32_t ___FractionPartMultiplier_7;

public:
	inline static int32_t get_offset_of_Whole_0() { return static_cast<int32_t>(offsetof(MusicalTimeSpan_tF775CB468731C8C8DFD70DD05C04218B8157A249_StaticFields, ___Whole_0)); }
	inline MusicalTimeSpan_tF775CB468731C8C8DFD70DD05C04218B8157A249 * get_Whole_0() const { return ___Whole_0; }
	inline MusicalTimeSpan_tF775CB468731C8C8DFD70DD05C04218B8157A249 ** get_address_of_Whole_0() { return &___Whole_0; }
	inline void set_Whole_0(MusicalTimeSpan_tF775CB468731C8C8DFD70DD05C04218B8157A249 * value)
	{
		___Whole_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Whole_0), (void*)value);
	}

	inline static int32_t get_offset_of_Half_1() { return static_cast<int32_t>(offsetof(MusicalTimeSpan_tF775CB468731C8C8DFD70DD05C04218B8157A249_StaticFields, ___Half_1)); }
	inline MusicalTimeSpan_tF775CB468731C8C8DFD70DD05C04218B8157A249 * get_Half_1() const { return ___Half_1; }
	inline MusicalTimeSpan_tF775CB468731C8C8DFD70DD05C04218B8157A249 ** get_address_of_Half_1() { return &___Half_1; }
	inline void set_Half_1(MusicalTimeSpan_tF775CB468731C8C8DFD70DD05C04218B8157A249 * value)
	{
		___Half_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Half_1), (void*)value);
	}

	inline static int32_t get_offset_of_Quarter_2() { return static_cast<int32_t>(offsetof(MusicalTimeSpan_tF775CB468731C8C8DFD70DD05C04218B8157A249_StaticFields, ___Quarter_2)); }
	inline MusicalTimeSpan_tF775CB468731C8C8DFD70DD05C04218B8157A249 * get_Quarter_2() const { return ___Quarter_2; }
	inline MusicalTimeSpan_tF775CB468731C8C8DFD70DD05C04218B8157A249 ** get_address_of_Quarter_2() { return &___Quarter_2; }
	inline void set_Quarter_2(MusicalTimeSpan_tF775CB468731C8C8DFD70DD05C04218B8157A249 * value)
	{
		___Quarter_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Quarter_2), (void*)value);
	}

	inline static int32_t get_offset_of_Eighth_3() { return static_cast<int32_t>(offsetof(MusicalTimeSpan_tF775CB468731C8C8DFD70DD05C04218B8157A249_StaticFields, ___Eighth_3)); }
	inline MusicalTimeSpan_tF775CB468731C8C8DFD70DD05C04218B8157A249 * get_Eighth_3() const { return ___Eighth_3; }
	inline MusicalTimeSpan_tF775CB468731C8C8DFD70DD05C04218B8157A249 ** get_address_of_Eighth_3() { return &___Eighth_3; }
	inline void set_Eighth_3(MusicalTimeSpan_tF775CB468731C8C8DFD70DD05C04218B8157A249 * value)
	{
		___Eighth_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Eighth_3), (void*)value);
	}

	inline static int32_t get_offset_of_Sixteenth_4() { return static_cast<int32_t>(offsetof(MusicalTimeSpan_tF775CB468731C8C8DFD70DD05C04218B8157A249_StaticFields, ___Sixteenth_4)); }
	inline MusicalTimeSpan_tF775CB468731C8C8DFD70DD05C04218B8157A249 * get_Sixteenth_4() const { return ___Sixteenth_4; }
	inline MusicalTimeSpan_tF775CB468731C8C8DFD70DD05C04218B8157A249 ** get_address_of_Sixteenth_4() { return &___Sixteenth_4; }
	inline void set_Sixteenth_4(MusicalTimeSpan_tF775CB468731C8C8DFD70DD05C04218B8157A249 * value)
	{
		___Sixteenth_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Sixteenth_4), (void*)value);
	}

	inline static int32_t get_offset_of_ThirtySecond_5() { return static_cast<int32_t>(offsetof(MusicalTimeSpan_tF775CB468731C8C8DFD70DD05C04218B8157A249_StaticFields, ___ThirtySecond_5)); }
	inline MusicalTimeSpan_tF775CB468731C8C8DFD70DD05C04218B8157A249 * get_ThirtySecond_5() const { return ___ThirtySecond_5; }
	inline MusicalTimeSpan_tF775CB468731C8C8DFD70DD05C04218B8157A249 ** get_address_of_ThirtySecond_5() { return &___ThirtySecond_5; }
	inline void set_ThirtySecond_5(MusicalTimeSpan_tF775CB468731C8C8DFD70DD05C04218B8157A249 * value)
	{
		___ThirtySecond_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ThirtySecond_5), (void*)value);
	}

	inline static int32_t get_offset_of_SixtyFourth_6() { return static_cast<int32_t>(offsetof(MusicalTimeSpan_tF775CB468731C8C8DFD70DD05C04218B8157A249_StaticFields, ___SixtyFourth_6)); }
	inline MusicalTimeSpan_tF775CB468731C8C8DFD70DD05C04218B8157A249 * get_SixtyFourth_6() const { return ___SixtyFourth_6; }
	inline MusicalTimeSpan_tF775CB468731C8C8DFD70DD05C04218B8157A249 ** get_address_of_SixtyFourth_6() { return &___SixtyFourth_6; }
	inline void set_SixtyFourth_6(MusicalTimeSpan_tF775CB468731C8C8DFD70DD05C04218B8157A249 * value)
	{
		___SixtyFourth_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SixtyFourth_6), (void*)value);
	}

	inline static int32_t get_offset_of_FractionPartMultiplier_7() { return static_cast<int32_t>(offsetof(MusicalTimeSpan_tF775CB468731C8C8DFD70DD05C04218B8157A249_StaticFields, ___FractionPartMultiplier_7)); }
	inline int32_t get_FractionPartMultiplier_7() const { return ___FractionPartMultiplier_7; }
	inline int32_t* get_address_of_FractionPartMultiplier_7() { return &___FractionPartMultiplier_7; }
	inline void set_FractionPartMultiplier_7(int32_t value)
	{
		___FractionPartMultiplier_7 = value;
	}
};


// Melanchall.DryWetMidi.Composing.Pattern
struct  Pattern_tB42554DBD9AF31288602637AFB2B7E8F53FC703A  : public RuntimeObject
{
public:
	// System.Collections.Generic.IEnumerable`1<Melanchall.DryWetMidi.Composing.PatternAction> Melanchall.DryWetMidi.Composing.Pattern::<Actions>k__BackingField
	RuntimeObject* ___U3CActionsU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CActionsU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Pattern_tB42554DBD9AF31288602637AFB2B7E8F53FC703A, ___U3CActionsU3Ek__BackingField_0)); }
	inline RuntimeObject* get_U3CActionsU3Ek__BackingField_0() const { return ___U3CActionsU3Ek__BackingField_0; }
	inline RuntimeObject** get_address_of_U3CActionsU3Ek__BackingField_0() { return &___U3CActionsU3Ek__BackingField_0; }
	inline void set_U3CActionsU3Ek__BackingField_0(RuntimeObject* value)
	{
		___U3CActionsU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CActionsU3Ek__BackingField_0), (void*)value);
	}
};


// Melanchall.DryWetMidi.Multimedia.PlaybackSettings
struct  PlaybackSettings_tC075B746962B5D3073B0E0BC48BC4106C53C23C0  : public RuntimeObject
{
public:
	// Melanchall.DryWetMidi.Multimedia.MidiClockSettings Melanchall.DryWetMidi.Multimedia.PlaybackSettings::<ClockSettings>k__BackingField
	MidiClockSettings_t82752292796AED5C35103D97D6A694C24A919B02 * ___U3CClockSettingsU3Ek__BackingField_0;
	// Melanchall.DryWetMidi.Interaction.TimedEventDetectionSettings Melanchall.DryWetMidi.Multimedia.PlaybackSettings::<TimedEventDetectionSettings>k__BackingField
	TimedEventDetectionSettings_t1FCA50DEDAC57C53B0CD1BE5164789D76D63E86A * ___U3CTimedEventDetectionSettingsU3Ek__BackingField_1;
	// Melanchall.DryWetMidi.Interaction.NoteDetectionSettings Melanchall.DryWetMidi.Multimedia.PlaybackSettings::<NoteDetectionSettings>k__BackingField
	NoteDetectionSettings_tBBDCB0CE0E95324BD3141AD2A42FFD977A1B858B * ___U3CNoteDetectionSettingsU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CClockSettingsU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(PlaybackSettings_tC075B746962B5D3073B0E0BC48BC4106C53C23C0, ___U3CClockSettingsU3Ek__BackingField_0)); }
	inline MidiClockSettings_t82752292796AED5C35103D97D6A694C24A919B02 * get_U3CClockSettingsU3Ek__BackingField_0() const { return ___U3CClockSettingsU3Ek__BackingField_0; }
	inline MidiClockSettings_t82752292796AED5C35103D97D6A694C24A919B02 ** get_address_of_U3CClockSettingsU3Ek__BackingField_0() { return &___U3CClockSettingsU3Ek__BackingField_0; }
	inline void set_U3CClockSettingsU3Ek__BackingField_0(MidiClockSettings_t82752292796AED5C35103D97D6A694C24A919B02 * value)
	{
		___U3CClockSettingsU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CClockSettingsU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CTimedEventDetectionSettingsU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(PlaybackSettings_tC075B746962B5D3073B0E0BC48BC4106C53C23C0, ___U3CTimedEventDetectionSettingsU3Ek__BackingField_1)); }
	inline TimedEventDetectionSettings_t1FCA50DEDAC57C53B0CD1BE5164789D76D63E86A * get_U3CTimedEventDetectionSettingsU3Ek__BackingField_1() const { return ___U3CTimedEventDetectionSettingsU3Ek__BackingField_1; }
	inline TimedEventDetectionSettings_t1FCA50DEDAC57C53B0CD1BE5164789D76D63E86A ** get_address_of_U3CTimedEventDetectionSettingsU3Ek__BackingField_1() { return &___U3CTimedEventDetectionSettingsU3Ek__BackingField_1; }
	inline void set_U3CTimedEventDetectionSettingsU3Ek__BackingField_1(TimedEventDetectionSettings_t1FCA50DEDAC57C53B0CD1BE5164789D76D63E86A * value)
	{
		___U3CTimedEventDetectionSettingsU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTimedEventDetectionSettingsU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CNoteDetectionSettingsU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(PlaybackSettings_tC075B746962B5D3073B0E0BC48BC4106C53C23C0, ___U3CNoteDetectionSettingsU3Ek__BackingField_2)); }
	inline NoteDetectionSettings_tBBDCB0CE0E95324BD3141AD2A42FFD977A1B858B * get_U3CNoteDetectionSettingsU3Ek__BackingField_2() const { return ___U3CNoteDetectionSettingsU3Ek__BackingField_2; }
	inline NoteDetectionSettings_tBBDCB0CE0E95324BD3141AD2A42FFD977A1B858B ** get_address_of_U3CNoteDetectionSettingsU3Ek__BackingField_2() { return &___U3CNoteDetectionSettingsU3Ek__BackingField_2; }
	inline void set_U3CNoteDetectionSettingsU3Ek__BackingField_2(NoteDetectionSettings_tBBDCB0CE0E95324BD3141AD2A42FFD977A1B858B * value)
	{
		___U3CNoteDetectionSettingsU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNoteDetectionSettingsU3Ek__BackingField_2), (void*)value);
	}
};


// System.String
struct  String_t  : public RuntimeObject
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
struct  StringBuilder_t  : public RuntimeObject
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


// Melanchall.DryWetMidi.Interaction.TempoMap
struct  TempoMap_t2C66560BA5D33AACE8AB672141C4228C04142D5A  : public RuntimeObject
{
public:
	// Melanchall.DryWetMidi.Interaction.ValueLine`1<Melanchall.DryWetMidi.Interaction.TimeSignature> Melanchall.DryWetMidi.Interaction.TempoMap::_timeSignatureLine
	ValueLine_1_t7158889A6BC00189D06403A25199F9B832F5E9FF * ____timeSignatureLine_1;
	// Melanchall.DryWetMidi.Interaction.ValueLine`1<Melanchall.DryWetMidi.Interaction.Tempo> Melanchall.DryWetMidi.Interaction.TempoMap::_tempoLine
	ValueLine_1_t285E4F9D4DD10F5437B65E61130B41AB14BBE226 * ____tempoLine_2;
	// System.Collections.Generic.List`1<Melanchall.DryWetMidi.Interaction.ITempoMapValuesCache> Melanchall.DryWetMidi.Interaction.TempoMap::_valuesCaches
	List_1_tC4BB8297C687FD611B666F94E9DA041E4C2AAF3D * ____valuesCaches_3;
	// System.Boolean Melanchall.DryWetMidi.Interaction.TempoMap::_isTempoMapReady
	bool ____isTempoMapReady_4;
	// Melanchall.DryWetMidi.Core.TimeDivision Melanchall.DryWetMidi.Interaction.TempoMap::<TimeDivision>k__BackingField
	TimeDivision_tF58599BD137E793424B255F00872D47D287F6AB3 * ___U3CTimeDivisionU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of__timeSignatureLine_1() { return static_cast<int32_t>(offsetof(TempoMap_t2C66560BA5D33AACE8AB672141C4228C04142D5A, ____timeSignatureLine_1)); }
	inline ValueLine_1_t7158889A6BC00189D06403A25199F9B832F5E9FF * get__timeSignatureLine_1() const { return ____timeSignatureLine_1; }
	inline ValueLine_1_t7158889A6BC00189D06403A25199F9B832F5E9FF ** get_address_of__timeSignatureLine_1() { return &____timeSignatureLine_1; }
	inline void set__timeSignatureLine_1(ValueLine_1_t7158889A6BC00189D06403A25199F9B832F5E9FF * value)
	{
		____timeSignatureLine_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____timeSignatureLine_1), (void*)value);
	}

	inline static int32_t get_offset_of__tempoLine_2() { return static_cast<int32_t>(offsetof(TempoMap_t2C66560BA5D33AACE8AB672141C4228C04142D5A, ____tempoLine_2)); }
	inline ValueLine_1_t285E4F9D4DD10F5437B65E61130B41AB14BBE226 * get__tempoLine_2() const { return ____tempoLine_2; }
	inline ValueLine_1_t285E4F9D4DD10F5437B65E61130B41AB14BBE226 ** get_address_of__tempoLine_2() { return &____tempoLine_2; }
	inline void set__tempoLine_2(ValueLine_1_t285E4F9D4DD10F5437B65E61130B41AB14BBE226 * value)
	{
		____tempoLine_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____tempoLine_2), (void*)value);
	}

	inline static int32_t get_offset_of__valuesCaches_3() { return static_cast<int32_t>(offsetof(TempoMap_t2C66560BA5D33AACE8AB672141C4228C04142D5A, ____valuesCaches_3)); }
	inline List_1_tC4BB8297C687FD611B666F94E9DA041E4C2AAF3D * get__valuesCaches_3() const { return ____valuesCaches_3; }
	inline List_1_tC4BB8297C687FD611B666F94E9DA041E4C2AAF3D ** get_address_of__valuesCaches_3() { return &____valuesCaches_3; }
	inline void set__valuesCaches_3(List_1_tC4BB8297C687FD611B666F94E9DA041E4C2AAF3D * value)
	{
		____valuesCaches_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____valuesCaches_3), (void*)value);
	}

	inline static int32_t get_offset_of__isTempoMapReady_4() { return static_cast<int32_t>(offsetof(TempoMap_t2C66560BA5D33AACE8AB672141C4228C04142D5A, ____isTempoMapReady_4)); }
	inline bool get__isTempoMapReady_4() const { return ____isTempoMapReady_4; }
	inline bool* get_address_of__isTempoMapReady_4() { return &____isTempoMapReady_4; }
	inline void set__isTempoMapReady_4(bool value)
	{
		____isTempoMapReady_4 = value;
	}

	inline static int32_t get_offset_of_U3CTimeDivisionU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(TempoMap_t2C66560BA5D33AACE8AB672141C4228C04142D5A, ___U3CTimeDivisionU3Ek__BackingField_5)); }
	inline TimeDivision_tF58599BD137E793424B255F00872D47D287F6AB3 * get_U3CTimeDivisionU3Ek__BackingField_5() const { return ___U3CTimeDivisionU3Ek__BackingField_5; }
	inline TimeDivision_tF58599BD137E793424B255F00872D47D287F6AB3 ** get_address_of_U3CTimeDivisionU3Ek__BackingField_5() { return &___U3CTimeDivisionU3Ek__BackingField_5; }
	inline void set_U3CTimeDivisionU3Ek__BackingField_5(TimeDivision_tF58599BD137E793424B255F00872D47D287F6AB3 * value)
	{
		___U3CTimeDivisionU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTimeDivisionU3Ek__BackingField_5), (void*)value);
	}
};

struct TempoMap_t2C66560BA5D33AACE8AB672141C4228C04142D5A_StaticFields
{
public:
	// Melanchall.DryWetMidi.Interaction.TempoMap Melanchall.DryWetMidi.Interaction.TempoMap::Default
	TempoMap_t2C66560BA5D33AACE8AB672141C4228C04142D5A * ___Default_0;

public:
	inline static int32_t get_offset_of_Default_0() { return static_cast<int32_t>(offsetof(TempoMap_t2C66560BA5D33AACE8AB672141C4228C04142D5A_StaticFields, ___Default_0)); }
	inline TempoMap_t2C66560BA5D33AACE8AB672141C4228C04142D5A * get_Default_0() const { return ___Default_0; }
	inline TempoMap_t2C66560BA5D33AACE8AB672141C4228C04142D5A ** get_address_of_Default_0() { return &___Default_0; }
	inline void set_Default_0(TempoMap_t2C66560BA5D33AACE8AB672141C4228C04142D5A * value)
	{
		___Default_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Default_0), (void*)value);
	}
};


// System.ValueType
struct  ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
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

// UnityEngine.YieldInstruction
struct  YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
};

// DemoScript/<>c
struct  U3CU3Ec_tDE021ECD8EACE49080A257681D29E16DCF3F53F2  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tDE021ECD8EACE49080A257681D29E16DCF3F53F2_StaticFields
{
public:
	// DemoScript/<>c DemoScript/<>c::<>9
	U3CU3Ec_tDE021ECD8EACE49080A257681D29E16DCF3F53F2 * ___U3CU3E9_0;
	// System.Func`2<Melanchall.DryWetMidi.Multimedia.OutputDevice,System.Boolean> DemoScript/<>c::<>9__5_0
	Func_2_t9C331FABBD6817E7209986DEE757FE09F192C16F * ___U3CU3E9__5_0_1;
	// System.Func`2<Melanchall.DryWetMidi.Multimedia.OutputDevice,System.String> DemoScript/<>c::<>9__5_1
	Func_2_t39D5366EA29875308A08408C95C8986F8229009D * ___U3CU3E9__5_1_2;
	// System.Func`2<Melanchall.DryWetMidi.Interaction.Note,System.String> DemoScript/<>c::<>9__11_0
	Func_2_tEDFF7C02ADD87D637C43084161242EA41259A2BA * ___U3CU3E9__11_0_3;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tDE021ECD8EACE49080A257681D29E16DCF3F53F2_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tDE021ECD8EACE49080A257681D29E16DCF3F53F2 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tDE021ECD8EACE49080A257681D29E16DCF3F53F2 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tDE021ECD8EACE49080A257681D29E16DCF3F53F2 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__5_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tDE021ECD8EACE49080A257681D29E16DCF3F53F2_StaticFields, ___U3CU3E9__5_0_1)); }
	inline Func_2_t9C331FABBD6817E7209986DEE757FE09F192C16F * get_U3CU3E9__5_0_1() const { return ___U3CU3E9__5_0_1; }
	inline Func_2_t9C331FABBD6817E7209986DEE757FE09F192C16F ** get_address_of_U3CU3E9__5_0_1() { return &___U3CU3E9__5_0_1; }
	inline void set_U3CU3E9__5_0_1(Func_2_t9C331FABBD6817E7209986DEE757FE09F192C16F * value)
	{
		___U3CU3E9__5_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__5_0_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__5_1_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_tDE021ECD8EACE49080A257681D29E16DCF3F53F2_StaticFields, ___U3CU3E9__5_1_2)); }
	inline Func_2_t39D5366EA29875308A08408C95C8986F8229009D * get_U3CU3E9__5_1_2() const { return ___U3CU3E9__5_1_2; }
	inline Func_2_t39D5366EA29875308A08408C95C8986F8229009D ** get_address_of_U3CU3E9__5_1_2() { return &___U3CU3E9__5_1_2; }
	inline void set_U3CU3E9__5_1_2(Func_2_t39D5366EA29875308A08408C95C8986F8229009D * value)
	{
		___U3CU3E9__5_1_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__5_1_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__11_0_3() { return static_cast<int32_t>(offsetof(U3CU3Ec_tDE021ECD8EACE49080A257681D29E16DCF3F53F2_StaticFields, ___U3CU3E9__11_0_3)); }
	inline Func_2_tEDFF7C02ADD87D637C43084161242EA41259A2BA * get_U3CU3E9__11_0_3() const { return ___U3CU3E9__11_0_3; }
	inline Func_2_tEDFF7C02ADD87D637C43084161242EA41259A2BA ** get_address_of_U3CU3E9__11_0_3() { return &___U3CU3E9__11_0_3; }
	inline void set_U3CU3E9__11_0_3(Func_2_tEDFF7C02ADD87D637C43084161242EA41259A2BA * value)
	{
		___U3CU3E9__11_0_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__11_0_3), (void*)value);
	}
};


// InvertCreator/<startCount>d__9
struct  U3CstartCountU3Ed__9_tC6AEADF32799B25FD8FC3FAE295448A88287AB6D  : public RuntimeObject
{
public:
	// System.Int32 InvertCreator/<startCount>d__9::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object InvertCreator/<startCount>d__9::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// InvertCreator InvertCreator/<startCount>d__9::<>4__this
	InvertCreator_t73F06C8608898BB962DB7AFF980F9AA9630506FA * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CstartCountU3Ed__9_tC6AEADF32799B25FD8FC3FAE295448A88287AB6D, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CstartCountU3Ed__9_tC6AEADF32799B25FD8FC3FAE295448A88287AB6D, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CstartCountU3Ed__9_tC6AEADF32799B25FD8FC3FAE295448A88287AB6D, ___U3CU3E4__this_2)); }
	inline InvertCreator_t73F06C8608898BB962DB7AFF980F9AA9630506FA * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline InvertCreator_t73F06C8608898BB962DB7AFF980F9AA9630506FA ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(InvertCreator_t73F06C8608898BB962DB7AFF980F9AA9630506FA * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// Lane/<WaittoSwicth>d__15
struct  U3CWaittoSwicthU3Ed__15_t615CB7E544E6313578445BF522D046CCFE0D1DC8  : public RuntimeObject
{
public:
	// System.Int32 Lane/<WaittoSwicth>d__15::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Lane/<WaittoSwicth>d__15::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Lane Lane/<WaittoSwicth>d__15::<>4__this
	Lane_t286B164399771EA0ED4119258145C46B5AFBD3CF * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CWaittoSwicthU3Ed__15_t615CB7E544E6313578445BF522D046CCFE0D1DC8, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CWaittoSwicthU3Ed__15_t615CB7E544E6313578445BF522D046CCFE0D1DC8, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CWaittoSwicthU3Ed__15_t615CB7E544E6313578445BF522D046CCFE0D1DC8, ___U3CU3E4__this_2)); }
	inline Lane_t286B164399771EA0ED4119258145C46B5AFBD3CF * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline Lane_t286B164399771EA0ED4119258145C46B5AFBD3CF ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(Lane_t286B164399771EA0ED4119258145C46B5AFBD3CF * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// SongManager/<ReadFromWebsite>d__14
struct  U3CReadFromWebsiteU3Ed__14_tAB16D26B298F15A356098B5CCAE0BF31AFD65381  : public RuntimeObject
{
public:
	// System.Int32 SongManager/<ReadFromWebsite>d__14::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object SongManager/<ReadFromWebsite>d__14::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// SongManager SongManager/<ReadFromWebsite>d__14::<>4__this
	SongManager_t0B58391B2DFB12045E717021CF4CF7EE474665A3 * ___U3CU3E4__this_2;
	// UnityEngine.Networking.UnityWebRequest SongManager/<ReadFromWebsite>d__14::<www>5__2
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * ___U3CwwwU3E5__2_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CReadFromWebsiteU3Ed__14_tAB16D26B298F15A356098B5CCAE0BF31AFD65381, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CReadFromWebsiteU3Ed__14_tAB16D26B298F15A356098B5CCAE0BF31AFD65381, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CReadFromWebsiteU3Ed__14_tAB16D26B298F15A356098B5CCAE0BF31AFD65381, ___U3CU3E4__this_2)); }
	inline SongManager_t0B58391B2DFB12045E717021CF4CF7EE474665A3 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline SongManager_t0B58391B2DFB12045E717021CF4CF7EE474665A3 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(SongManager_t0B58391B2DFB12045E717021CF4CF7EE474665A3 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CwwwU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CReadFromWebsiteU3Ed__14_tAB16D26B298F15A356098B5CCAE0BF31AFD65381, ___U3CwwwU3E5__2_3)); }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * get_U3CwwwU3E5__2_3() const { return ___U3CwwwU3E5__2_3; }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E ** get_address_of_U3CwwwU3E5__2_3() { return &___U3CwwwU3E5__2_3; }
	inline void set_U3CwwwU3E5__2_3(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * value)
	{
		___U3CwwwU3E5__2_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CwwwU3E5__2_3), (void*)value);
	}
};


// SongManager/<WaitLoad>d__20
struct  U3CWaitLoadU3Ed__20_t055F386818B09FF1C73268153A9C10D8A79A4BE8  : public RuntimeObject
{
public:
	// System.Int32 SongManager/<WaitLoad>d__20::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object SongManager/<WaitLoad>d__20::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CWaitLoadU3Ed__20_t055F386818B09FF1C73268153A9C10D8A79A4BE8, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CWaitLoadU3Ed__20_t055F386818B09FF1C73268153A9C10D8A79A4BE8, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}
};


// System.Nullable`1<System.UInt16>
struct  Nullable_1_t0443A135F582CD36E20D716DBE9BDFBC39A49CEE 
{
public:
	// T System.Nullable`1::value
	uint16_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t0443A135F582CD36E20D716DBE9BDFBC39A49CEE, ___value_0)); }
	inline uint16_t get_value_0() const { return ___value_0; }
	inline uint16_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(uint16_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t0443A135F582CD36E20D716DBE9BDFBC39A49CEE, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Boolean
struct  Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
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
struct  Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056 
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


// UnityEngine.Color
struct  Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
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


// System.Double
struct  Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181 
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
struct  Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
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

// System.Int32
struct  Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
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
struct  Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3 
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


// Melanchall.DryWetMidi.Multimedia.NotesEventArgs
struct  NotesEventArgs_t32257D581DB8C05FAFF967215383C081CEAF9195  : public EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA
{
public:
	// System.Collections.Generic.IEnumerable`1<Melanchall.DryWetMidi.Interaction.Note> Melanchall.DryWetMidi.Multimedia.NotesEventArgs::<Notes>k__BackingField
	RuntimeObject* ___U3CNotesU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CNotesU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(NotesEventArgs_t32257D581DB8C05FAFF967215383C081CEAF9195, ___U3CNotesU3Ek__BackingField_1)); }
	inline RuntimeObject* get_U3CNotesU3Ek__BackingField_1() const { return ___U3CNotesU3Ek__BackingField_1; }
	inline RuntimeObject** get_address_of_U3CNotesU3Ek__BackingField_1() { return &___U3CNotesU3Ek__BackingField_1; }
	inline void set_U3CNotesU3Ek__BackingField_1(RuntimeObject* value)
	{
		___U3CNotesU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNotesU3Ek__BackingField_1), (void*)value);
	}
};


// UnityEngine.Quaternion
struct  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
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


// Melanchall.DryWetMidi.Common.SevenBitNumber
struct  SevenBitNumber_t9D9AA0CA6CF9F4FD2896F25C6CBF7769F0D8B6A8 
{
public:
	// System.Byte Melanchall.DryWetMidi.Common.SevenBitNumber::_value
	uint8_t ____value_5;

public:
	inline static int32_t get_offset_of__value_5() { return static_cast<int32_t>(offsetof(SevenBitNumber_t9D9AA0CA6CF9F4FD2896F25C6CBF7769F0D8B6A8, ____value_5)); }
	inline uint8_t get__value_5() const { return ____value_5; }
	inline uint8_t* get_address_of__value_5() { return &____value_5; }
	inline void set__value_5(uint8_t value)
	{
		____value_5 = value;
	}
};

struct SevenBitNumber_t9D9AA0CA6CF9F4FD2896F25C6CBF7769F0D8B6A8_StaticFields
{
public:
	// Melanchall.DryWetMidi.Common.SevenBitNumber Melanchall.DryWetMidi.Common.SevenBitNumber::MinValue
	SevenBitNumber_t9D9AA0CA6CF9F4FD2896F25C6CBF7769F0D8B6A8  ___MinValue_0;
	// Melanchall.DryWetMidi.Common.SevenBitNumber Melanchall.DryWetMidi.Common.SevenBitNumber::MaxValue
	SevenBitNumber_t9D9AA0CA6CF9F4FD2896F25C6CBF7769F0D8B6A8  ___MaxValue_1;
	// Melanchall.DryWetMidi.Common.SevenBitNumber[] Melanchall.DryWetMidi.Common.SevenBitNumber::Values
	SevenBitNumberU5BU5D_t7637700F96F6887FA1C000837321021B7902B396* ___Values_2;

public:
	inline static int32_t get_offset_of_MinValue_0() { return static_cast<int32_t>(offsetof(SevenBitNumber_t9D9AA0CA6CF9F4FD2896F25C6CBF7769F0D8B6A8_StaticFields, ___MinValue_0)); }
	inline SevenBitNumber_t9D9AA0CA6CF9F4FD2896F25C6CBF7769F0D8B6A8  get_MinValue_0() const { return ___MinValue_0; }
	inline SevenBitNumber_t9D9AA0CA6CF9F4FD2896F25C6CBF7769F0D8B6A8 * get_address_of_MinValue_0() { return &___MinValue_0; }
	inline void set_MinValue_0(SevenBitNumber_t9D9AA0CA6CF9F4FD2896F25C6CBF7769F0D8B6A8  value)
	{
		___MinValue_0 = value;
	}

	inline static int32_t get_offset_of_MaxValue_1() { return static_cast<int32_t>(offsetof(SevenBitNumber_t9D9AA0CA6CF9F4FD2896F25C6CBF7769F0D8B6A8_StaticFields, ___MaxValue_1)); }
	inline SevenBitNumber_t9D9AA0CA6CF9F4FD2896F25C6CBF7769F0D8B6A8  get_MaxValue_1() const { return ___MaxValue_1; }
	inline SevenBitNumber_t9D9AA0CA6CF9F4FD2896F25C6CBF7769F0D8B6A8 * get_address_of_MaxValue_1() { return &___MaxValue_1; }
	inline void set_MaxValue_1(SevenBitNumber_t9D9AA0CA6CF9F4FD2896F25C6CBF7769F0D8B6A8  value)
	{
		___MaxValue_1 = value;
	}

	inline static int32_t get_offset_of_Values_2() { return static_cast<int32_t>(offsetof(SevenBitNumber_t9D9AA0CA6CF9F4FD2896F25C6CBF7769F0D8B6A8_StaticFields, ___Values_2)); }
	inline SevenBitNumberU5BU5D_t7637700F96F6887FA1C000837321021B7902B396* get_Values_2() const { return ___Values_2; }
	inline SevenBitNumberU5BU5D_t7637700F96F6887FA1C000837321021B7902B396** get_address_of_Values_2() { return &___Values_2; }
	inline void set_Values_2(SevenBitNumberU5BU5D_t7637700F96F6887FA1C000837321021B7902B396* value)
	{
		___Values_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Values_2), (void*)value);
	}
};


// System.Single
struct  Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
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
struct  Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
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


// UnityEngine.Vector3
struct  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
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
struct  Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
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
struct  Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
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


// UnityEngine.WaitForSeconds
struct  WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;

public:
	inline static int32_t get_offset_of_m_Seconds_0() { return static_cast<int32_t>(offsetof(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013, ___m_Seconds_0)); }
	inline float get_m_Seconds_0() const { return ___m_Seconds_0; }
	inline float* get_address_of_m_Seconds_0() { return &___m_Seconds_0; }
	inline void set_m_Seconds_0(float value)
	{
		___m_Seconds_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	float ___m_Seconds_0;
};

// UnityEngine.AsyncOperation
struct  AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.IntPtr UnityEngine.AsyncOperation::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Action`1<UnityEngine.AsyncOperation> UnityEngine.AsyncOperation::m_completeCallback
	Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * ___m_completeCallback_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_completeCallback_1() { return static_cast<int32_t>(offsetof(AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86, ___m_completeCallback_1)); }
	inline Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * get_m_completeCallback_1() const { return ___m_completeCallback_1; }
	inline Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 ** get_address_of_m_completeCallback_1() { return &___m_completeCallback_1; }
	inline void set_m_completeCallback_1(Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * value)
	{
		___m_completeCallback_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_completeCallback_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
// Native definition for COM marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};

// UnityEngine.Networking.CertificateHandler
struct  CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.CertificateHandler::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.Coroutine
struct  Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

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

// UnityEngine.Networking.DownloadHandler
struct  DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.DownloadHandler::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// Melanchall.DryWetMidi.Core.EndOfTrackStoringPolicy
struct  EndOfTrackStoringPolicy_t565DC4084632D6303103742B28F2DC738FD998C4 
{
public:
	// System.Int32 Melanchall.DryWetMidi.Core.EndOfTrackStoringPolicy::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(EndOfTrackStoringPolicy_t565DC4084632D6303103742B28F2DC738FD998C4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Exception
struct  Exception_t  : public RuntimeObject
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

// Melanchall.DryWetMidi.Core.ExtraTrackChunkPolicy
struct  ExtraTrackChunkPolicy_tF0CDB9D8726C57F2852AC819570CBCCE9DFF16D1 
{
public:
	// System.Byte Melanchall.DryWetMidi.Core.ExtraTrackChunkPolicy::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ExtraTrackChunkPolicy_tF0CDB9D8726C57F2852AC819570CBCCE9DFF16D1, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// Melanchall.DryWetMidi.Standards.GeneralMidiProgram
struct  GeneralMidiProgram_t966EA5FC735AAAB1A20FCF6F4A20102D733D3D9A 
{
public:
	// System.Byte Melanchall.DryWetMidi.Standards.GeneralMidiProgram::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(GeneralMidiProgram_t966EA5FC735AAAB1A20FCF6F4A20102D733D3D9A, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// Melanchall.DryWetMidi.Core.InvalidChannelEventParameterValuePolicy
struct  InvalidChannelEventParameterValuePolicy_t59E6C7255A292DF431441AA075C0054FF0E0B110 
{
public:
	// System.Byte Melanchall.DryWetMidi.Core.InvalidChannelEventParameterValuePolicy::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InvalidChannelEventParameterValuePolicy_t59E6C7255A292DF431441AA075C0054FF0E0B110, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// Melanchall.DryWetMidi.Core.InvalidChunkSizePolicy
struct  InvalidChunkSizePolicy_t6A88CFFED75810BB76D01EA21A98A6D70B365C0D 
{
public:
	// System.Byte Melanchall.DryWetMidi.Core.InvalidChunkSizePolicy::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InvalidChunkSizePolicy_t6A88CFFED75810BB76D01EA21A98A6D70B365C0D, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// Melanchall.DryWetMidi.Core.InvalidMetaEventParameterValuePolicy
struct  InvalidMetaEventParameterValuePolicy_t9CC464FE293EB0CDBB1DD2B9C3DA28F50BECD449 
{
public:
	// System.Int32 Melanchall.DryWetMidi.Core.InvalidMetaEventParameterValuePolicy::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InvalidMetaEventParameterValuePolicy_t9CC464FE293EB0CDBB1DD2B9C3DA28F50BECD449, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Melanchall.DryWetMidi.Core.InvalidSystemCommonEventParameterValuePolicy
struct  InvalidSystemCommonEventParameterValuePolicy_tCD10E2E8265F4A78105B59106873537C8B9355E0 
{
public:
	// System.Int32 Melanchall.DryWetMidi.Core.InvalidSystemCommonEventParameterValuePolicy::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InvalidSystemCommonEventParameterValuePolicy_tCD10E2E8265F4A78105B59106873537C8B9355E0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.KeyCode
struct  KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4 
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


// System.IO.MemoryStream
struct  MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C  : public Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB
{
public:
	// System.Byte[] System.IO.MemoryStream::_buffer
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____buffer_5;
	// System.Int32 System.IO.MemoryStream::_origin
	int32_t ____origin_6;
	// System.Int32 System.IO.MemoryStream::_position
	int32_t ____position_7;
	// System.Int32 System.IO.MemoryStream::_length
	int32_t ____length_8;
	// System.Int32 System.IO.MemoryStream::_capacity
	int32_t ____capacity_9;
	// System.Boolean System.IO.MemoryStream::_expandable
	bool ____expandable_10;
	// System.Boolean System.IO.MemoryStream::_writable
	bool ____writable_11;
	// System.Boolean System.IO.MemoryStream::_exposable
	bool ____exposable_12;
	// System.Boolean System.IO.MemoryStream::_isOpen
	bool ____isOpen_13;
	// System.Threading.Tasks.Task`1<System.Int32> System.IO.MemoryStream::_lastReadTask
	Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * ____lastReadTask_14;

public:
	inline static int32_t get_offset_of__buffer_5() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____buffer_5)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get__buffer_5() const { return ____buffer_5; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of__buffer_5() { return &____buffer_5; }
	inline void set__buffer_5(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		____buffer_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buffer_5), (void*)value);
	}

	inline static int32_t get_offset_of__origin_6() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____origin_6)); }
	inline int32_t get__origin_6() const { return ____origin_6; }
	inline int32_t* get_address_of__origin_6() { return &____origin_6; }
	inline void set__origin_6(int32_t value)
	{
		____origin_6 = value;
	}

	inline static int32_t get_offset_of__position_7() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____position_7)); }
	inline int32_t get__position_7() const { return ____position_7; }
	inline int32_t* get_address_of__position_7() { return &____position_7; }
	inline void set__position_7(int32_t value)
	{
		____position_7 = value;
	}

	inline static int32_t get_offset_of__length_8() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____length_8)); }
	inline int32_t get__length_8() const { return ____length_8; }
	inline int32_t* get_address_of__length_8() { return &____length_8; }
	inline void set__length_8(int32_t value)
	{
		____length_8 = value;
	}

	inline static int32_t get_offset_of__capacity_9() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____capacity_9)); }
	inline int32_t get__capacity_9() const { return ____capacity_9; }
	inline int32_t* get_address_of__capacity_9() { return &____capacity_9; }
	inline void set__capacity_9(int32_t value)
	{
		____capacity_9 = value;
	}

	inline static int32_t get_offset_of__expandable_10() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____expandable_10)); }
	inline bool get__expandable_10() const { return ____expandable_10; }
	inline bool* get_address_of__expandable_10() { return &____expandable_10; }
	inline void set__expandable_10(bool value)
	{
		____expandable_10 = value;
	}

	inline static int32_t get_offset_of__writable_11() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____writable_11)); }
	inline bool get__writable_11() const { return ____writable_11; }
	inline bool* get_address_of__writable_11() { return &____writable_11; }
	inline void set__writable_11(bool value)
	{
		____writable_11 = value;
	}

	inline static int32_t get_offset_of__exposable_12() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____exposable_12)); }
	inline bool get__exposable_12() const { return ____exposable_12; }
	inline bool* get_address_of__exposable_12() { return &____exposable_12; }
	inline void set__exposable_12(bool value)
	{
		____exposable_12 = value;
	}

	inline static int32_t get_offset_of__isOpen_13() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____isOpen_13)); }
	inline bool get__isOpen_13() const { return ____isOpen_13; }
	inline bool* get_address_of__isOpen_13() { return &____isOpen_13; }
	inline void set__isOpen_13(bool value)
	{
		____isOpen_13 = value;
	}

	inline static int32_t get_offset_of__lastReadTask_14() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____lastReadTask_14)); }
	inline Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * get__lastReadTask_14() const { return ____lastReadTask_14; }
	inline Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 ** get_address_of__lastReadTask_14() { return &____lastReadTask_14; }
	inline void set__lastReadTask_14(Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * value)
	{
		____lastReadTask_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____lastReadTask_14), (void*)value);
	}
};


// Melanchall.DryWetMidi.Core.MidiFile
struct  MidiFile_t00456CC0D22B31D61780718A31F002EFC5082774  : public RuntimeObject
{
public:
	// System.Nullable`1<System.UInt16> Melanchall.DryWetMidi.Core.MidiFile::_originalFormat
	Nullable_1_t0443A135F582CD36E20D716DBE9BDFBC39A49CEE  ____originalFormat_2;
	// Melanchall.DryWetMidi.Core.TimeDivision Melanchall.DryWetMidi.Core.MidiFile::<TimeDivision>k__BackingField
	TimeDivision_tF58599BD137E793424B255F00872D47D287F6AB3 * ___U3CTimeDivisionU3Ek__BackingField_3;
	// Melanchall.DryWetMidi.Core.ChunksCollection Melanchall.DryWetMidi.Core.MidiFile::<Chunks>k__BackingField
	ChunksCollection_tD7AF62E37A2C5E8D73F6AD83974CD6F5BD91E119 * ___U3CChunksU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of__originalFormat_2() { return static_cast<int32_t>(offsetof(MidiFile_t00456CC0D22B31D61780718A31F002EFC5082774, ____originalFormat_2)); }
	inline Nullable_1_t0443A135F582CD36E20D716DBE9BDFBC39A49CEE  get__originalFormat_2() const { return ____originalFormat_2; }
	inline Nullable_1_t0443A135F582CD36E20D716DBE9BDFBC39A49CEE * get_address_of__originalFormat_2() { return &____originalFormat_2; }
	inline void set__originalFormat_2(Nullable_1_t0443A135F582CD36E20D716DBE9BDFBC39A49CEE  value)
	{
		____originalFormat_2 = value;
	}

	inline static int32_t get_offset_of_U3CTimeDivisionU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(MidiFile_t00456CC0D22B31D61780718A31F002EFC5082774, ___U3CTimeDivisionU3Ek__BackingField_3)); }
	inline TimeDivision_tF58599BD137E793424B255F00872D47D287F6AB3 * get_U3CTimeDivisionU3Ek__BackingField_3() const { return ___U3CTimeDivisionU3Ek__BackingField_3; }
	inline TimeDivision_tF58599BD137E793424B255F00872D47D287F6AB3 ** get_address_of_U3CTimeDivisionU3Ek__BackingField_3() { return &___U3CTimeDivisionU3Ek__BackingField_3; }
	inline void set_U3CTimeDivisionU3Ek__BackingField_3(TimeDivision_tF58599BD137E793424B255F00872D47D287F6AB3 * value)
	{
		___U3CTimeDivisionU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTimeDivisionU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CChunksU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(MidiFile_t00456CC0D22B31D61780718A31F002EFC5082774, ___U3CChunksU3Ek__BackingField_4)); }
	inline ChunksCollection_tD7AF62E37A2C5E8D73F6AD83974CD6F5BD91E119 * get_U3CChunksU3Ek__BackingField_4() const { return ___U3CChunksU3Ek__BackingField_4; }
	inline ChunksCollection_tD7AF62E37A2C5E8D73F6AD83974CD6F5BD91E119 ** get_address_of_U3CChunksU3Ek__BackingField_4() { return &___U3CChunksU3Ek__BackingField_4; }
	inline void set_U3CChunksU3Ek__BackingField_4(ChunksCollection_tD7AF62E37A2C5E8D73F6AD83974CD6F5BD91E119 * value)
	{
		___U3CChunksU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CChunksU3Ek__BackingField_4), (void*)value);
	}
};


// Melanchall.DryWetMidi.Core.MissedEndOfTrackPolicy
struct  MissedEndOfTrackPolicy_t1030C3B1F6859855D154D43A2E33ED6250B1B781 
{
public:
	// System.Byte Melanchall.DryWetMidi.Core.MissedEndOfTrackPolicy::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MissedEndOfTrackPolicy_t1030C3B1F6859855D154D43A2E33ED6250B1B781, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// Melanchall.DryWetMidi.Core.NoHeaderChunkPolicy
struct  NoHeaderChunkPolicy_t6BB54B5A280815306E5616340ED2569E2573C34E 
{
public:
	// System.Int32 Melanchall.DryWetMidi.Core.NoHeaderChunkPolicy::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NoHeaderChunkPolicy_t6BB54B5A280815306E5616340ED2569E2573C34E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Melanchall.DryWetMidi.Core.NotEnoughBytesPolicy
struct  NotEnoughBytesPolicy_t8B39E3CEEC9D7A432737105F281B3EA71464DA69 
{
public:
	// System.Int32 Melanchall.DryWetMidi.Core.NotEnoughBytesPolicy::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NotEnoughBytesPolicy_t8B39E3CEEC9D7A432737105F281B3EA71464DA69, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Melanchall.DryWetMidi.Interaction.Note
struct  Note_t72FA32C1F792DB6998277D23822C6FBBF619808C  : public RuntimeObject
{
public:
	// System.EventHandler`1<Melanchall.DryWetMidi.Interaction.TimeChangedEventArgs> Melanchall.DryWetMidi.Interaction.Note::TimeChanged
	EventHandler_1_tA5E331A41F52458961B747EAC5B3A39CDF3396E9 * ___TimeChanged_2;
	// System.EventHandler`1<Melanchall.DryWetMidi.Interaction.LengthChangedEventArgs> Melanchall.DryWetMidi.Interaction.Note::LengthChanged
	EventHandler_1_t1A0527082D2EBBF21DF9361E3DED887567F0D9EF * ___LengthChanged_3;
	// Melanchall.DryWetMidi.Interaction.TimedEvent Melanchall.DryWetMidi.Interaction.Note::<TimedNoteOnEvent>k__BackingField
	TimedEvent_t870342A119FD0AB374B27D4D53F341A22B9E6FEE * ___U3CTimedNoteOnEventU3Ek__BackingField_4;
	// Melanchall.DryWetMidi.Interaction.TimedEvent Melanchall.DryWetMidi.Interaction.Note::<TimedNoteOffEvent>k__BackingField
	TimedEvent_t870342A119FD0AB374B27D4D53F341A22B9E6FEE * ___U3CTimedNoteOffEventU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_TimeChanged_2() { return static_cast<int32_t>(offsetof(Note_t72FA32C1F792DB6998277D23822C6FBBF619808C, ___TimeChanged_2)); }
	inline EventHandler_1_tA5E331A41F52458961B747EAC5B3A39CDF3396E9 * get_TimeChanged_2() const { return ___TimeChanged_2; }
	inline EventHandler_1_tA5E331A41F52458961B747EAC5B3A39CDF3396E9 ** get_address_of_TimeChanged_2() { return &___TimeChanged_2; }
	inline void set_TimeChanged_2(EventHandler_1_tA5E331A41F52458961B747EAC5B3A39CDF3396E9 * value)
	{
		___TimeChanged_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TimeChanged_2), (void*)value);
	}

	inline static int32_t get_offset_of_LengthChanged_3() { return static_cast<int32_t>(offsetof(Note_t72FA32C1F792DB6998277D23822C6FBBF619808C, ___LengthChanged_3)); }
	inline EventHandler_1_t1A0527082D2EBBF21DF9361E3DED887567F0D9EF * get_LengthChanged_3() const { return ___LengthChanged_3; }
	inline EventHandler_1_t1A0527082D2EBBF21DF9361E3DED887567F0D9EF ** get_address_of_LengthChanged_3() { return &___LengthChanged_3; }
	inline void set_LengthChanged_3(EventHandler_1_t1A0527082D2EBBF21DF9361E3DED887567F0D9EF * value)
	{
		___LengthChanged_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LengthChanged_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CTimedNoteOnEventU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Note_t72FA32C1F792DB6998277D23822C6FBBF619808C, ___U3CTimedNoteOnEventU3Ek__BackingField_4)); }
	inline TimedEvent_t870342A119FD0AB374B27D4D53F341A22B9E6FEE * get_U3CTimedNoteOnEventU3Ek__BackingField_4() const { return ___U3CTimedNoteOnEventU3Ek__BackingField_4; }
	inline TimedEvent_t870342A119FD0AB374B27D4D53F341A22B9E6FEE ** get_address_of_U3CTimedNoteOnEventU3Ek__BackingField_4() { return &___U3CTimedNoteOnEventU3Ek__BackingField_4; }
	inline void set_U3CTimedNoteOnEventU3Ek__BackingField_4(TimedEvent_t870342A119FD0AB374B27D4D53F341A22B9E6FEE * value)
	{
		___U3CTimedNoteOnEventU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTimedNoteOnEventU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CTimedNoteOffEventU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(Note_t72FA32C1F792DB6998277D23822C6FBBF619808C, ___U3CTimedNoteOffEventU3Ek__BackingField_5)); }
	inline TimedEvent_t870342A119FD0AB374B27D4D53F341A22B9E6FEE * get_U3CTimedNoteOffEventU3Ek__BackingField_5() const { return ___U3CTimedNoteOffEventU3Ek__BackingField_5; }
	inline TimedEvent_t870342A119FD0AB374B27D4D53F341A22B9E6FEE ** get_address_of_U3CTimedNoteOffEventU3Ek__BackingField_5() { return &___U3CTimedNoteOffEventU3Ek__BackingField_5; }
	inline void set_U3CTimedNoteOffEventU3Ek__BackingField_5(TimedEvent_t870342A119FD0AB374B27D4D53F341A22B9E6FEE * value)
	{
		___U3CTimedNoteOffEventU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTimedNoteOffEventU3Ek__BackingField_5), (void*)value);
	}
};

struct Note_t72FA32C1F792DB6998277D23822C6FBBF619808C_StaticFields
{
public:
	// Melanchall.DryWetMidi.Common.SevenBitNumber Melanchall.DryWetMidi.Interaction.Note::DefaultVelocity
	SevenBitNumber_t9D9AA0CA6CF9F4FD2896F25C6CBF7769F0D8B6A8  ___DefaultVelocity_0;
	// Melanchall.DryWetMidi.Common.SevenBitNumber Melanchall.DryWetMidi.Interaction.Note::DefaultOffVelocity
	SevenBitNumber_t9D9AA0CA6CF9F4FD2896F25C6CBF7769F0D8B6A8  ___DefaultOffVelocity_1;

public:
	inline static int32_t get_offset_of_DefaultVelocity_0() { return static_cast<int32_t>(offsetof(Note_t72FA32C1F792DB6998277D23822C6FBBF619808C_StaticFields, ___DefaultVelocity_0)); }
	inline SevenBitNumber_t9D9AA0CA6CF9F4FD2896F25C6CBF7769F0D8B6A8  get_DefaultVelocity_0() const { return ___DefaultVelocity_0; }
	inline SevenBitNumber_t9D9AA0CA6CF9F4FD2896F25C6CBF7769F0D8B6A8 * get_address_of_DefaultVelocity_0() { return &___DefaultVelocity_0; }
	inline void set_DefaultVelocity_0(SevenBitNumber_t9D9AA0CA6CF9F4FD2896F25C6CBF7769F0D8B6A8  value)
	{
		___DefaultVelocity_0 = value;
	}

	inline static int32_t get_offset_of_DefaultOffVelocity_1() { return static_cast<int32_t>(offsetof(Note_t72FA32C1F792DB6998277D23822C6FBBF619808C_StaticFields, ___DefaultOffVelocity_1)); }
	inline SevenBitNumber_t9D9AA0CA6CF9F4FD2896F25C6CBF7769F0D8B6A8  get_DefaultOffVelocity_1() const { return ___DefaultOffVelocity_1; }
	inline SevenBitNumber_t9D9AA0CA6CF9F4FD2896F25C6CBF7769F0D8B6A8 * get_address_of_DefaultOffVelocity_1() { return &___DefaultOffVelocity_1; }
	inline void set_DefaultOffVelocity_1(SevenBitNumber_t9D9AA0CA6CF9F4FD2896F25C6CBF7769F0D8B6A8  value)
	{
		___DefaultOffVelocity_1 = value;
	}
};


// Melanchall.DryWetMidi.MusicTheory.Note
struct  Note_t3D41F3AD2C3580F851A482C6559734126CAE4976  : public RuntimeObject
{
public:
	// Melanchall.DryWetMidi.Common.SevenBitNumber Melanchall.DryWetMidi.MusicTheory.Note::<NoteNumber>k__BackingField
	SevenBitNumber_t9D9AA0CA6CF9F4FD2896F25C6CBF7769F0D8B6A8  ___U3CNoteNumberU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CNoteNumberU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Note_t3D41F3AD2C3580F851A482C6559734126CAE4976, ___U3CNoteNumberU3Ek__BackingField_1)); }
	inline SevenBitNumber_t9D9AA0CA6CF9F4FD2896F25C6CBF7769F0D8B6A8  get_U3CNoteNumberU3Ek__BackingField_1() const { return ___U3CNoteNumberU3Ek__BackingField_1; }
	inline SevenBitNumber_t9D9AA0CA6CF9F4FD2896F25C6CBF7769F0D8B6A8 * get_address_of_U3CNoteNumberU3Ek__BackingField_1() { return &___U3CNoteNumberU3Ek__BackingField_1; }
	inline void set_U3CNoteNumberU3Ek__BackingField_1(SevenBitNumber_t9D9AA0CA6CF9F4FD2896F25C6CBF7769F0D8B6A8  value)
	{
		___U3CNoteNumberU3Ek__BackingField_1 = value;
	}
};

struct Note_t3D41F3AD2C3580F851A482C6559734126CAE4976_StaticFields
{
public:
	// System.Collections.Concurrent.ConcurrentDictionary`2<Melanchall.DryWetMidi.Common.SevenBitNumber,Melanchall.DryWetMidi.MusicTheory.Note> Melanchall.DryWetMidi.MusicTheory.Note::Cache
	ConcurrentDictionary_2_tF47B152F6136C9194559689D133E7D55C6374E7E * ___Cache_0;

public:
	inline static int32_t get_offset_of_Cache_0() { return static_cast<int32_t>(offsetof(Note_t3D41F3AD2C3580F851A482C6559734126CAE4976_StaticFields, ___Cache_0)); }
	inline ConcurrentDictionary_2_tF47B152F6136C9194559689D133E7D55C6374E7E * get_Cache_0() const { return ___Cache_0; }
	inline ConcurrentDictionary_2_tF47B152F6136C9194559689D133E7D55C6374E7E ** get_address_of_Cache_0() { return &___Cache_0; }
	inline void set_Cache_0(ConcurrentDictionary_2_tF47B152F6136C9194559689D133E7D55C6374E7E * value)
	{
		___Cache_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Cache_0), (void*)value);
	}
};


// Melanchall.DryWetMidi.MusicTheory.NoteName
struct  NoteName_tA34E584AAFE91088D50A0D73C4C11EA5C8D5738C 
{
public:
	// System.Int32 Melanchall.DryWetMidi.MusicTheory.NoteName::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NoteName_tA34E584AAFE91088D50A0D73C4C11EA5C8D5738C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Melanchall.DryWetMidi.Interaction.NoteSearchContext
struct  NoteSearchContext_t155BA168E6593EF5B08E382338363C618AC6B6DE 
{
public:
	// System.Int32 Melanchall.DryWetMidi.Interaction.NoteSearchContext::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NoteSearchContext_t155BA168E6593EF5B08E382338363C618AC6B6DE, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Melanchall.DryWetMidi.Interaction.NoteStartDetectionPolicy
struct  NoteStartDetectionPolicy_tD368251813391D530249FE10C890F5908C3FC9E4 
{
public:
	// System.Int32 Melanchall.DryWetMidi.Interaction.NoteStartDetectionPolicy::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NoteStartDetectionPolicy_tD368251813391D530249FE10C890F5908C3FC9E4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct  Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
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

// Melanchall.DryWetMidi.Composing.PatternBuilder
struct  PatternBuilder_t3C2CB526323390746CEDE3AD77A06AF96217496B  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<Melanchall.DryWetMidi.Composing.PatternAction> Melanchall.DryWetMidi.Composing.PatternBuilder::_actions
	List_1_tF724ABED98455E69D1FBE5EFE7A4DECEA823222F * ____actions_5;
	// System.Collections.Generic.Dictionary`2<System.Object,System.Int32> Melanchall.DryWetMidi.Composing.PatternBuilder::_anchorCounters
	Dictionary_2_t1DDD2F48B87E022F599DF2452A49BB70BE95A7F8 * ____anchorCounters_6;
	// System.Int32 Melanchall.DryWetMidi.Composing.PatternBuilder::_globalAnchorsCounter
	int32_t ____globalAnchorsCounter_7;
	// Melanchall.DryWetMidi.Common.SevenBitNumber Melanchall.DryWetMidi.Composing.PatternBuilder::<Velocity>k__BackingField
	SevenBitNumber_t9D9AA0CA6CF9F4FD2896F25C6CBF7769F0D8B6A8  ___U3CVelocityU3Ek__BackingField_8;
	// Melanchall.DryWetMidi.Interaction.ITimeSpan Melanchall.DryWetMidi.Composing.PatternBuilder::<NoteLength>k__BackingField
	RuntimeObject* ___U3CNoteLengthU3Ek__BackingField_9;
	// Melanchall.DryWetMidi.Interaction.ITimeSpan Melanchall.DryWetMidi.Composing.PatternBuilder::<Step>k__BackingField
	RuntimeObject* ___U3CStepU3Ek__BackingField_10;
	// Melanchall.DryWetMidi.MusicTheory.Octave Melanchall.DryWetMidi.Composing.PatternBuilder::<Octave>k__BackingField
	Octave_t9692EB270E2F344FC094FDE6252FEA8F72558EC6 * ___U3COctaveU3Ek__BackingField_11;
	// Melanchall.DryWetMidi.MusicTheory.Note Melanchall.DryWetMidi.Composing.PatternBuilder::<RootNote>k__BackingField
	Note_t3D41F3AD2C3580F851A482C6559734126CAE4976 * ___U3CRootNoteU3Ek__BackingField_12;

public:
	inline static int32_t get_offset_of__actions_5() { return static_cast<int32_t>(offsetof(PatternBuilder_t3C2CB526323390746CEDE3AD77A06AF96217496B, ____actions_5)); }
	inline List_1_tF724ABED98455E69D1FBE5EFE7A4DECEA823222F * get__actions_5() const { return ____actions_5; }
	inline List_1_tF724ABED98455E69D1FBE5EFE7A4DECEA823222F ** get_address_of__actions_5() { return &____actions_5; }
	inline void set__actions_5(List_1_tF724ABED98455E69D1FBE5EFE7A4DECEA823222F * value)
	{
		____actions_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____actions_5), (void*)value);
	}

	inline static int32_t get_offset_of__anchorCounters_6() { return static_cast<int32_t>(offsetof(PatternBuilder_t3C2CB526323390746CEDE3AD77A06AF96217496B, ____anchorCounters_6)); }
	inline Dictionary_2_t1DDD2F48B87E022F599DF2452A49BB70BE95A7F8 * get__anchorCounters_6() const { return ____anchorCounters_6; }
	inline Dictionary_2_t1DDD2F48B87E022F599DF2452A49BB70BE95A7F8 ** get_address_of__anchorCounters_6() { return &____anchorCounters_6; }
	inline void set__anchorCounters_6(Dictionary_2_t1DDD2F48B87E022F599DF2452A49BB70BE95A7F8 * value)
	{
		____anchorCounters_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____anchorCounters_6), (void*)value);
	}

	inline static int32_t get_offset_of__globalAnchorsCounter_7() { return static_cast<int32_t>(offsetof(PatternBuilder_t3C2CB526323390746CEDE3AD77A06AF96217496B, ____globalAnchorsCounter_7)); }
	inline int32_t get__globalAnchorsCounter_7() const { return ____globalAnchorsCounter_7; }
	inline int32_t* get_address_of__globalAnchorsCounter_7() { return &____globalAnchorsCounter_7; }
	inline void set__globalAnchorsCounter_7(int32_t value)
	{
		____globalAnchorsCounter_7 = value;
	}

	inline static int32_t get_offset_of_U3CVelocityU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(PatternBuilder_t3C2CB526323390746CEDE3AD77A06AF96217496B, ___U3CVelocityU3Ek__BackingField_8)); }
	inline SevenBitNumber_t9D9AA0CA6CF9F4FD2896F25C6CBF7769F0D8B6A8  get_U3CVelocityU3Ek__BackingField_8() const { return ___U3CVelocityU3Ek__BackingField_8; }
	inline SevenBitNumber_t9D9AA0CA6CF9F4FD2896F25C6CBF7769F0D8B6A8 * get_address_of_U3CVelocityU3Ek__BackingField_8() { return &___U3CVelocityU3Ek__BackingField_8; }
	inline void set_U3CVelocityU3Ek__BackingField_8(SevenBitNumber_t9D9AA0CA6CF9F4FD2896F25C6CBF7769F0D8B6A8  value)
	{
		___U3CVelocityU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_U3CNoteLengthU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(PatternBuilder_t3C2CB526323390746CEDE3AD77A06AF96217496B, ___U3CNoteLengthU3Ek__BackingField_9)); }
	inline RuntimeObject* get_U3CNoteLengthU3Ek__BackingField_9() const { return ___U3CNoteLengthU3Ek__BackingField_9; }
	inline RuntimeObject** get_address_of_U3CNoteLengthU3Ek__BackingField_9() { return &___U3CNoteLengthU3Ek__BackingField_9; }
	inline void set_U3CNoteLengthU3Ek__BackingField_9(RuntimeObject* value)
	{
		___U3CNoteLengthU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNoteLengthU3Ek__BackingField_9), (void*)value);
	}

	inline static int32_t get_offset_of_U3CStepU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(PatternBuilder_t3C2CB526323390746CEDE3AD77A06AF96217496B, ___U3CStepU3Ek__BackingField_10)); }
	inline RuntimeObject* get_U3CStepU3Ek__BackingField_10() const { return ___U3CStepU3Ek__BackingField_10; }
	inline RuntimeObject** get_address_of_U3CStepU3Ek__BackingField_10() { return &___U3CStepU3Ek__BackingField_10; }
	inline void set_U3CStepU3Ek__BackingField_10(RuntimeObject* value)
	{
		___U3CStepU3Ek__BackingField_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CStepU3Ek__BackingField_10), (void*)value);
	}

	inline static int32_t get_offset_of_U3COctaveU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(PatternBuilder_t3C2CB526323390746CEDE3AD77A06AF96217496B, ___U3COctaveU3Ek__BackingField_11)); }
	inline Octave_t9692EB270E2F344FC094FDE6252FEA8F72558EC6 * get_U3COctaveU3Ek__BackingField_11() const { return ___U3COctaveU3Ek__BackingField_11; }
	inline Octave_t9692EB270E2F344FC094FDE6252FEA8F72558EC6 ** get_address_of_U3COctaveU3Ek__BackingField_11() { return &___U3COctaveU3Ek__BackingField_11; }
	inline void set_U3COctaveU3Ek__BackingField_11(Octave_t9692EB270E2F344FC094FDE6252FEA8F72558EC6 * value)
	{
		___U3COctaveU3Ek__BackingField_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COctaveU3Ek__BackingField_11), (void*)value);
	}

	inline static int32_t get_offset_of_U3CRootNoteU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(PatternBuilder_t3C2CB526323390746CEDE3AD77A06AF96217496B, ___U3CRootNoteU3Ek__BackingField_12)); }
	inline Note_t3D41F3AD2C3580F851A482C6559734126CAE4976 * get_U3CRootNoteU3Ek__BackingField_12() const { return ___U3CRootNoteU3Ek__BackingField_12; }
	inline Note_t3D41F3AD2C3580F851A482C6559734126CAE4976 ** get_address_of_U3CRootNoteU3Ek__BackingField_12() { return &___U3CRootNoteU3Ek__BackingField_12; }
	inline void set_U3CRootNoteU3Ek__BackingField_12(Note_t3D41F3AD2C3580F851A482C6559734126CAE4976 * value)
	{
		___U3CRootNoteU3Ek__BackingField_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRootNoteU3Ek__BackingField_12), (void*)value);
	}
};

struct PatternBuilder_t3C2CB526323390746CEDE3AD77A06AF96217496B_StaticFields
{
public:
	// Melanchall.DryWetMidi.Common.SevenBitNumber Melanchall.DryWetMidi.Composing.PatternBuilder::DefaultVelocity
	SevenBitNumber_t9D9AA0CA6CF9F4FD2896F25C6CBF7769F0D8B6A8  ___DefaultVelocity_0;
	// Melanchall.DryWetMidi.Interaction.ITimeSpan Melanchall.DryWetMidi.Composing.PatternBuilder::DefaultNoteLength
	RuntimeObject* ___DefaultNoteLength_1;
	// Melanchall.DryWetMidi.Interaction.ITimeSpan Melanchall.DryWetMidi.Composing.PatternBuilder::DefaultStep
	RuntimeObject* ___DefaultStep_2;
	// Melanchall.DryWetMidi.MusicTheory.Octave Melanchall.DryWetMidi.Composing.PatternBuilder::DefaultOctave
	Octave_t9692EB270E2F344FC094FDE6252FEA8F72558EC6 * ___DefaultOctave_3;
	// Melanchall.DryWetMidi.MusicTheory.Note Melanchall.DryWetMidi.Composing.PatternBuilder::DefaultRootNote
	Note_t3D41F3AD2C3580F851A482C6559734126CAE4976 * ___DefaultRootNote_4;

public:
	inline static int32_t get_offset_of_DefaultVelocity_0() { return static_cast<int32_t>(offsetof(PatternBuilder_t3C2CB526323390746CEDE3AD77A06AF96217496B_StaticFields, ___DefaultVelocity_0)); }
	inline SevenBitNumber_t9D9AA0CA6CF9F4FD2896F25C6CBF7769F0D8B6A8  get_DefaultVelocity_0() const { return ___DefaultVelocity_0; }
	inline SevenBitNumber_t9D9AA0CA6CF9F4FD2896F25C6CBF7769F0D8B6A8 * get_address_of_DefaultVelocity_0() { return &___DefaultVelocity_0; }
	inline void set_DefaultVelocity_0(SevenBitNumber_t9D9AA0CA6CF9F4FD2896F25C6CBF7769F0D8B6A8  value)
	{
		___DefaultVelocity_0 = value;
	}

	inline static int32_t get_offset_of_DefaultNoteLength_1() { return static_cast<int32_t>(offsetof(PatternBuilder_t3C2CB526323390746CEDE3AD77A06AF96217496B_StaticFields, ___DefaultNoteLength_1)); }
	inline RuntimeObject* get_DefaultNoteLength_1() const { return ___DefaultNoteLength_1; }
	inline RuntimeObject** get_address_of_DefaultNoteLength_1() { return &___DefaultNoteLength_1; }
	inline void set_DefaultNoteLength_1(RuntimeObject* value)
	{
		___DefaultNoteLength_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DefaultNoteLength_1), (void*)value);
	}

	inline static int32_t get_offset_of_DefaultStep_2() { return static_cast<int32_t>(offsetof(PatternBuilder_t3C2CB526323390746CEDE3AD77A06AF96217496B_StaticFields, ___DefaultStep_2)); }
	inline RuntimeObject* get_DefaultStep_2() const { return ___DefaultStep_2; }
	inline RuntimeObject** get_address_of_DefaultStep_2() { return &___DefaultStep_2; }
	inline void set_DefaultStep_2(RuntimeObject* value)
	{
		___DefaultStep_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DefaultStep_2), (void*)value);
	}

	inline static int32_t get_offset_of_DefaultOctave_3() { return static_cast<int32_t>(offsetof(PatternBuilder_t3C2CB526323390746CEDE3AD77A06AF96217496B_StaticFields, ___DefaultOctave_3)); }
	inline Octave_t9692EB270E2F344FC094FDE6252FEA8F72558EC6 * get_DefaultOctave_3() const { return ___DefaultOctave_3; }
	inline Octave_t9692EB270E2F344FC094FDE6252FEA8F72558EC6 ** get_address_of_DefaultOctave_3() { return &___DefaultOctave_3; }
	inline void set_DefaultOctave_3(Octave_t9692EB270E2F344FC094FDE6252FEA8F72558EC6 * value)
	{
		___DefaultOctave_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DefaultOctave_3), (void*)value);
	}

	inline static int32_t get_offset_of_DefaultRootNote_4() { return static_cast<int32_t>(offsetof(PatternBuilder_t3C2CB526323390746CEDE3AD77A06AF96217496B_StaticFields, ___DefaultRootNote_4)); }
	inline Note_t3D41F3AD2C3580F851A482C6559734126CAE4976 * get_DefaultRootNote_4() const { return ___DefaultRootNote_4; }
	inline Note_t3D41F3AD2C3580F851A482C6559734126CAE4976 ** get_address_of_DefaultRootNote_4() { return &___DefaultRootNote_4; }
	inline void set_DefaultRootNote_4(Note_t3D41F3AD2C3580F851A482C6559734126CAE4976 * value)
	{
		___DefaultRootNote_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DefaultRootNote_4), (void*)value);
	}
};


// Melanchall.DryWetMidi.Core.SilentNoteOnPolicy
struct  SilentNoteOnPolicy_tA66DEF3D9C0B7129B9D38EED129F1EE01424E6B6 
{
public:
	// System.Byte Melanchall.DryWetMidi.Core.SilentNoteOnPolicy::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SilentNoteOnPolicy_tA66DEF3D9C0B7129B9D38EED129F1EE01424E6B6, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Space
struct  Space_t568D704D2B0AAC3E5894DDFF13DB2E02E2CD539E 
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
struct  TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 
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


// Melanchall.DryWetMidi.Core.UnexpectedTrackChunksCountPolicy
struct  UnexpectedTrackChunksCountPolicy_t8C53123E25057B99CDFFA58385160759D6EFBFE6 
{
public:
	// System.Int32 Melanchall.DryWetMidi.Core.UnexpectedTrackChunksCountPolicy::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UnexpectedTrackChunksCountPolicy_t8C53123E25057B99CDFFA58385160759D6EFBFE6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Melanchall.DryWetMidi.Core.UnknownChannelEventPolicy
struct  UnknownChannelEventPolicy_t8168D034B754E75436C21084A13FAD91AA94553A 
{
public:
	// System.Int32 Melanchall.DryWetMidi.Core.UnknownChannelEventPolicy::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UnknownChannelEventPolicy_t8168D034B754E75436C21084A13FAD91AA94553A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Melanchall.DryWetMidi.Core.UnknownChunkIdPolicy
struct  UnknownChunkIdPolicy_t1DC7BCDF229D8137C8CC1477B643E56611A2421A 
{
public:
	// System.Byte Melanchall.DryWetMidi.Core.UnknownChunkIdPolicy::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UnknownChunkIdPolicy_t1DC7BCDF229D8137C8CC1477B643E56611A2421A, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// Melanchall.DryWetMidi.Core.UnknownFileFormatPolicy
struct  UnknownFileFormatPolicy_t9CBE42E1195ACFF901FA4E6230B88FAF4E51B9B7 
{
public:
	// System.Int32 Melanchall.DryWetMidi.Core.UnknownFileFormatPolicy::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UnknownFileFormatPolicy_t9CBE42E1195ACFF901FA4E6230B88FAF4E51B9B7, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Networking.UploadHandler
struct  UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.UploadHandler::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.UploadHandler
struct UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.UploadHandler
struct UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// Melanchall.DryWetMidi.Core.ZeroLengthDataPolicy
struct  ZeroLengthDataPolicy_tF2E41A08EEAC0BC6AD6EF22F2D22135964510B1D 
{
public:
	// System.Int32 Melanchall.DryWetMidi.Core.ZeroLengthDataPolicy::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ZeroLengthDataPolicy_tF2E41A08EEAC0BC6AD6EF22F2D22135964510B1D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// BackgroundMover/<WallSpawn>d__6
struct  U3CWallSpawnU3Ed__6_tAF3991F444558EB25A917E5E64C0654A3288B8C3  : public RuntimeObject
{
public:
	// System.Int32 BackgroundMover/<WallSpawn>d__6::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object BackgroundMover/<WallSpawn>d__6::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// BackgroundMover BackgroundMover/<WallSpawn>d__6::<>4__this
	BackgroundMover_tCB967D07193551E3830EBA987419287E3598C848 * ___U3CU3E4__this_2;
	// UnityEngine.Vector3 BackgroundMover/<WallSpawn>d__6::<l_Pos>5__2
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3Cl_PosU3E5__2_3;
	// UnityEngine.Quaternion BackgroundMover/<WallSpawn>d__6::<l_Rot>5__3
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___U3Cl_RotU3E5__3_4;
	// UnityEngine.Vector3 BackgroundMover/<WallSpawn>d__6::<r_Pos>5__4
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3Cr_PosU3E5__4_5;
	// UnityEngine.Quaternion BackgroundMover/<WallSpawn>d__6::<r_Rot>5__5
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___U3Cr_RotU3E5__5_6;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CWallSpawnU3Ed__6_tAF3991F444558EB25A917E5E64C0654A3288B8C3, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CWallSpawnU3Ed__6_tAF3991F444558EB25A917E5E64C0654A3288B8C3, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CWallSpawnU3Ed__6_tAF3991F444558EB25A917E5E64C0654A3288B8C3, ___U3CU3E4__this_2)); }
	inline BackgroundMover_tCB967D07193551E3830EBA987419287E3598C848 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline BackgroundMover_tCB967D07193551E3830EBA987419287E3598C848 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(BackgroundMover_tCB967D07193551E3830EBA987419287E3598C848 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3Cl_PosU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CWallSpawnU3Ed__6_tAF3991F444558EB25A917E5E64C0654A3288B8C3, ___U3Cl_PosU3E5__2_3)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3Cl_PosU3E5__2_3() const { return ___U3Cl_PosU3E5__2_3; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3Cl_PosU3E5__2_3() { return &___U3Cl_PosU3E5__2_3; }
	inline void set_U3Cl_PosU3E5__2_3(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3Cl_PosU3E5__2_3 = value;
	}

	inline static int32_t get_offset_of_U3Cl_RotU3E5__3_4() { return static_cast<int32_t>(offsetof(U3CWallSpawnU3Ed__6_tAF3991F444558EB25A917E5E64C0654A3288B8C3, ___U3Cl_RotU3E5__3_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_U3Cl_RotU3E5__3_4() const { return ___U3Cl_RotU3E5__3_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_U3Cl_RotU3E5__3_4() { return &___U3Cl_RotU3E5__3_4; }
	inline void set_U3Cl_RotU3E5__3_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___U3Cl_RotU3E5__3_4 = value;
	}

	inline static int32_t get_offset_of_U3Cr_PosU3E5__4_5() { return static_cast<int32_t>(offsetof(U3CWallSpawnU3Ed__6_tAF3991F444558EB25A917E5E64C0654A3288B8C3, ___U3Cr_PosU3E5__4_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3Cr_PosU3E5__4_5() const { return ___U3Cr_PosU3E5__4_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3Cr_PosU3E5__4_5() { return &___U3Cr_PosU3E5__4_5; }
	inline void set_U3Cr_PosU3E5__4_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3Cr_PosU3E5__4_5 = value;
	}

	inline static int32_t get_offset_of_U3Cr_RotU3E5__5_6() { return static_cast<int32_t>(offsetof(U3CWallSpawnU3Ed__6_tAF3991F444558EB25A917E5E64C0654A3288B8C3, ___U3Cr_RotU3E5__5_6)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_U3Cr_RotU3E5__5_6() const { return ___U3Cr_RotU3E5__5_6; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_U3Cr_RotU3E5__5_6() { return &___U3Cr_RotU3E5__5_6; }
	inline void set_U3Cr_RotU3E5__5_6(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___U3Cr_RotU3E5__5_6 = value;
	}
};


// Melanchall.DryWetMidi.Multimedia.CommonApi/API_TYPE
struct  API_TYPE_tF33EABA9541987F78D68F2823D4C32D5AF100345 
{
public:
	// System.Int32 Melanchall.DryWetMidi.Multimedia.CommonApi/API_TYPE::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(API_TYPE_tF33EABA9541987F78D68F2823D4C32D5AF100345, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Melanchall.DryWetMidi.Multimedia.MidiDevice/CreationContext
struct  CreationContext_tF9E7BEA1FA614DDB3E680E50F196C47220C33C1C 
{
public:
	// System.Int32 Melanchall.DryWetMidi.Multimedia.MidiDevice/CreationContext::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CreationContext_tF9E7BEA1FA614DDB3E680E50F196C47220C33C1C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.AudioClip
struct  AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * ___m_PCMReaderCallback_4;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * ___m_PCMSetPositionCallback_5;

public:
	inline static int32_t get_offset_of_m_PCMReaderCallback_4() { return static_cast<int32_t>(offsetof(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE, ___m_PCMReaderCallback_4)); }
	inline PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * get_m_PCMReaderCallback_4() const { return ___m_PCMReaderCallback_4; }
	inline PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B ** get_address_of_m_PCMReaderCallback_4() { return &___m_PCMReaderCallback_4; }
	inline void set_m_PCMReaderCallback_4(PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * value)
	{
		___m_PCMReaderCallback_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PCMReaderCallback_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_PCMSetPositionCallback_5() { return static_cast<int32_t>(offsetof(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE, ___m_PCMSetPositionCallback_5)); }
	inline PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * get_m_PCMSetPositionCallback_5() const { return ___m_PCMSetPositionCallback_5; }
	inline PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C ** get_address_of_m_PCMSetPositionCallback_5() { return &___m_PCMSetPositionCallback_5; }
	inline void set_m_PCMSetPositionCallback_5(PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * value)
	{
		___m_PCMSetPositionCallback_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PCMSetPositionCallback_5), (void*)value);
	}
};


// UnityEngine.Component
struct  Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// Melanchall.DryWetMidi.Interaction.MetricTimeSpan
struct  MetricTimeSpan_t6BCD0FA647C5BC5289D584F4CF72AC69127E588D  : public RuntimeObject
{
public:
	// System.TimeSpan Melanchall.DryWetMidi.Interaction.MetricTimeSpan::_timeSpan
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ____timeSpan_1;

public:
	inline static int32_t get_offset_of__timeSpan_1() { return static_cast<int32_t>(offsetof(MetricTimeSpan_t6BCD0FA647C5BC5289D584F4CF72AC69127E588D, ____timeSpan_1)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get__timeSpan_1() const { return ____timeSpan_1; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of__timeSpan_1() { return &____timeSpan_1; }
	inline void set__timeSpan_1(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		____timeSpan_1 = value;
	}
};

struct MetricTimeSpan_t6BCD0FA647C5BC5289D584F4CF72AC69127E588D_StaticFields
{
public:
	// System.String Melanchall.DryWetMidi.Interaction.MetricTimeSpan::TotalMicrosecondsIsOutOfRangeMessage
	String_t* ___TotalMicrosecondsIsOutOfRangeMessage_0;

public:
	inline static int32_t get_offset_of_TotalMicrosecondsIsOutOfRangeMessage_0() { return static_cast<int32_t>(offsetof(MetricTimeSpan_t6BCD0FA647C5BC5289D584F4CF72AC69127E588D_StaticFields, ___TotalMicrosecondsIsOutOfRangeMessage_0)); }
	inline String_t* get_TotalMicrosecondsIsOutOfRangeMessage_0() const { return ___TotalMicrosecondsIsOutOfRangeMessage_0; }
	inline String_t** get_address_of_TotalMicrosecondsIsOutOfRangeMessage_0() { return &___TotalMicrosecondsIsOutOfRangeMessage_0; }
	inline void set_TotalMicrosecondsIsOutOfRangeMessage_0(String_t* value)
	{
		___TotalMicrosecondsIsOutOfRangeMessage_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TotalMicrosecondsIsOutOfRangeMessage_0), (void*)value);
	}
};


// Melanchall.DryWetMidi.Multimedia.MidiDevice
struct  MidiDevice_t736FB1ED772DA5A9202017F93EB436B720EFDD83  : public RuntimeObject
{
public:
	// System.EventHandler`1<Melanchall.DryWetMidi.Multimedia.ErrorOccurredEventArgs> Melanchall.DryWetMidi.Multimedia.MidiDevice::ErrorOccurred
	EventHandler_1_t91D77E17587118EE6B5686879F96C8DE6697E156 * ___ErrorOccurred_0;
	// System.Boolean Melanchall.DryWetMidi.Multimedia.MidiDevice::_disposed
	bool ____disposed_2;
	// System.Boolean Melanchall.DryWetMidi.Multimedia.MidiDevice::<IsEnabled>k__BackingField
	bool ___U3CIsEnabledU3Ek__BackingField_3;
	// Melanchall.DryWetMidi.Multimedia.MidiDevice/CreationContext Melanchall.DryWetMidi.Multimedia.MidiDevice::<Context>k__BackingField
	int32_t ___U3CContextU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_ErrorOccurred_0() { return static_cast<int32_t>(offsetof(MidiDevice_t736FB1ED772DA5A9202017F93EB436B720EFDD83, ___ErrorOccurred_0)); }
	inline EventHandler_1_t91D77E17587118EE6B5686879F96C8DE6697E156 * get_ErrorOccurred_0() const { return ___ErrorOccurred_0; }
	inline EventHandler_1_t91D77E17587118EE6B5686879F96C8DE6697E156 ** get_address_of_ErrorOccurred_0() { return &___ErrorOccurred_0; }
	inline void set_ErrorOccurred_0(EventHandler_1_t91D77E17587118EE6B5686879F96C8DE6697E156 * value)
	{
		___ErrorOccurred_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ErrorOccurred_0), (void*)value);
	}

	inline static int32_t get_offset_of__disposed_2() { return static_cast<int32_t>(offsetof(MidiDevice_t736FB1ED772DA5A9202017F93EB436B720EFDD83, ____disposed_2)); }
	inline bool get__disposed_2() const { return ____disposed_2; }
	inline bool* get_address_of__disposed_2() { return &____disposed_2; }
	inline void set__disposed_2(bool value)
	{
		____disposed_2 = value;
	}

	inline static int32_t get_offset_of_U3CIsEnabledU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(MidiDevice_t736FB1ED772DA5A9202017F93EB436B720EFDD83, ___U3CIsEnabledU3Ek__BackingField_3)); }
	inline bool get_U3CIsEnabledU3Ek__BackingField_3() const { return ___U3CIsEnabledU3Ek__BackingField_3; }
	inline bool* get_address_of_U3CIsEnabledU3Ek__BackingField_3() { return &___U3CIsEnabledU3Ek__BackingField_3; }
	inline void set_U3CIsEnabledU3Ek__BackingField_3(bool value)
	{
		___U3CIsEnabledU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CContextU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(MidiDevice_t736FB1ED772DA5A9202017F93EB436B720EFDD83, ___U3CContextU3Ek__BackingField_4)); }
	inline int32_t get_U3CContextU3Ek__BackingField_4() const { return ___U3CContextU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CContextU3Ek__BackingField_4() { return &___U3CContextU3Ek__BackingField_4; }
	inline void set_U3CContextU3Ek__BackingField_4(int32_t value)
	{
		___U3CContextU3Ek__BackingField_4 = value;
	}
};

struct MidiDevice_t736FB1ED772DA5A9202017F93EB436B720EFDD83_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<Melanchall.DryWetMidi.Multimedia.MidiDevice/CreationContext,System.String> Melanchall.DryWetMidi.Multimedia.MidiDevice::ContextsDescriptions
	Dictionary_2_tB56B2F46A477099439F208864C91FF6E1C8D68C2 * ___ContextsDescriptions_1;

public:
	inline static int32_t get_offset_of_ContextsDescriptions_1() { return static_cast<int32_t>(offsetof(MidiDevice_t736FB1ED772DA5A9202017F93EB436B720EFDD83_StaticFields, ___ContextsDescriptions_1)); }
	inline Dictionary_2_tB56B2F46A477099439F208864C91FF6E1C8D68C2 * get_ContextsDescriptions_1() const { return ___ContextsDescriptions_1; }
	inline Dictionary_2_tB56B2F46A477099439F208864C91FF6E1C8D68C2 ** get_address_of_ContextsDescriptions_1() { return &___ContextsDescriptions_1; }
	inline void set_ContextsDescriptions_1(Dictionary_2_tB56B2F46A477099439F208864C91FF6E1C8D68C2 * value)
	{
		___ContextsDescriptions_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ContextsDescriptions_1), (void*)value);
	}
};


// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
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

// Melanchall.DryWetMidi.Interaction.NoteDetectionSettings
struct  NoteDetectionSettings_tBBDCB0CE0E95324BD3141AD2A42FFD977A1B858B  : public RuntimeObject
{
public:
	// Melanchall.DryWetMidi.Interaction.NoteStartDetectionPolicy Melanchall.DryWetMidi.Interaction.NoteDetectionSettings::_noteStartDetectionPolicy
	int32_t ____noteStartDetectionPolicy_0;
	// Melanchall.DryWetMidi.Interaction.NoteSearchContext Melanchall.DryWetMidi.Interaction.NoteDetectionSettings::_noteSearchContext
	int32_t ____noteSearchContext_1;
	// Melanchall.DryWetMidi.Interaction.TimedEventDetectionSettings Melanchall.DryWetMidi.Interaction.NoteDetectionSettings::<TimedEventDetectionSettings>k__BackingField
	TimedEventDetectionSettings_t1FCA50DEDAC57C53B0CD1BE5164789D76D63E86A * ___U3CTimedEventDetectionSettingsU3Ek__BackingField_2;
	// System.Func`2<Melanchall.DryWetMidi.Interaction.NoteData,Melanchall.DryWetMidi.Interaction.Note> Melanchall.DryWetMidi.Interaction.NoteDetectionSettings::<Constructor>k__BackingField
	Func_2_t2D750BAFC03CBA7C98E36CEC629BF31497C02D3C * ___U3CConstructorU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of__noteStartDetectionPolicy_0() { return static_cast<int32_t>(offsetof(NoteDetectionSettings_tBBDCB0CE0E95324BD3141AD2A42FFD977A1B858B, ____noteStartDetectionPolicy_0)); }
	inline int32_t get__noteStartDetectionPolicy_0() const { return ____noteStartDetectionPolicy_0; }
	inline int32_t* get_address_of__noteStartDetectionPolicy_0() { return &____noteStartDetectionPolicy_0; }
	inline void set__noteStartDetectionPolicy_0(int32_t value)
	{
		____noteStartDetectionPolicy_0 = value;
	}

	inline static int32_t get_offset_of__noteSearchContext_1() { return static_cast<int32_t>(offsetof(NoteDetectionSettings_tBBDCB0CE0E95324BD3141AD2A42FFD977A1B858B, ____noteSearchContext_1)); }
	inline int32_t get__noteSearchContext_1() const { return ____noteSearchContext_1; }
	inline int32_t* get_address_of__noteSearchContext_1() { return &____noteSearchContext_1; }
	inline void set__noteSearchContext_1(int32_t value)
	{
		____noteSearchContext_1 = value;
	}

	inline static int32_t get_offset_of_U3CTimedEventDetectionSettingsU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(NoteDetectionSettings_tBBDCB0CE0E95324BD3141AD2A42FFD977A1B858B, ___U3CTimedEventDetectionSettingsU3Ek__BackingField_2)); }
	inline TimedEventDetectionSettings_t1FCA50DEDAC57C53B0CD1BE5164789D76D63E86A * get_U3CTimedEventDetectionSettingsU3Ek__BackingField_2() const { return ___U3CTimedEventDetectionSettingsU3Ek__BackingField_2; }
	inline TimedEventDetectionSettings_t1FCA50DEDAC57C53B0CD1BE5164789D76D63E86A ** get_address_of_U3CTimedEventDetectionSettingsU3Ek__BackingField_2() { return &___U3CTimedEventDetectionSettingsU3Ek__BackingField_2; }
	inline void set_U3CTimedEventDetectionSettingsU3Ek__BackingField_2(TimedEventDetectionSettings_t1FCA50DEDAC57C53B0CD1BE5164789D76D63E86A * value)
	{
		___U3CTimedEventDetectionSettingsU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTimedEventDetectionSettingsU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CConstructorU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(NoteDetectionSettings_tBBDCB0CE0E95324BD3141AD2A42FFD977A1B858B, ___U3CConstructorU3Ek__BackingField_3)); }
	inline Func_2_t2D750BAFC03CBA7C98E36CEC629BF31497C02D3C * get_U3CConstructorU3Ek__BackingField_3() const { return ___U3CConstructorU3Ek__BackingField_3; }
	inline Func_2_t2D750BAFC03CBA7C98E36CEC629BF31497C02D3C ** get_address_of_U3CConstructorU3Ek__BackingField_3() { return &___U3CConstructorU3Ek__BackingField_3; }
	inline void set_U3CConstructorU3Ek__BackingField_3(Func_2_t2D750BAFC03CBA7C98E36CEC629BF31497C02D3C * value)
	{
		___U3CConstructorU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CConstructorU3Ek__BackingField_3), (void*)value);
	}
};


// Melanchall.DryWetMidi.Multimedia.Playback
struct  Playback_t57195DC933DF811AF3EF953E136F4B9610C70D3A  : public RuntimeObject
{
public:
	// System.EventHandler Melanchall.DryWetMidi.Multimedia.Playback::Started
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * ___Started_3;
	// System.EventHandler Melanchall.DryWetMidi.Multimedia.Playback::Stopped
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * ___Stopped_4;
	// System.EventHandler Melanchall.DryWetMidi.Multimedia.Playback::Finished
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * ___Finished_5;
	// System.EventHandler Melanchall.DryWetMidi.Multimedia.Playback::RepeatStarted
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * ___RepeatStarted_6;
	// System.EventHandler`1<Melanchall.DryWetMidi.Multimedia.NotesEventArgs> Melanchall.DryWetMidi.Multimedia.Playback::NotesPlaybackStarted
	EventHandler_1_tD53285C13B6974AAACBA9FD9151014AF05E01516 * ___NotesPlaybackStarted_7;
	// System.EventHandler`1<Melanchall.DryWetMidi.Multimedia.NotesEventArgs> Melanchall.DryWetMidi.Multimedia.Playback::NotesPlaybackFinished
	EventHandler_1_tD53285C13B6974AAACBA9FD9151014AF05E01516 * ___NotesPlaybackFinished_8;
	// System.EventHandler`1<Melanchall.DryWetMidi.Multimedia.MidiEventPlayedEventArgs> Melanchall.DryWetMidi.Multimedia.Playback::EventPlayed
	EventHandler_1_t3C892FEA03250A467E3FA81836BC2E8BEEDB633B * ___EventPlayed_9;
	// System.EventHandler`1<Melanchall.DryWetMidi.Multimedia.ErrorOccurredEventArgs> Melanchall.DryWetMidi.Multimedia.Playback::DeviceErrorOccurred
	EventHandler_1_t91D77E17587118EE6B5686879F96C8DE6697E156 * ___DeviceErrorOccurred_10;
	// System.Collections.Generic.IEnumerator`1<Melanchall.DryWetMidi.Multimedia.PlaybackEvent> Melanchall.DryWetMidi.Multimedia.Playback::_eventsEnumerator
	RuntimeObject* ____eventsEnumerator_11;
	// System.TimeSpan Melanchall.DryWetMidi.Multimedia.Playback::_duration
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ____duration_12;
	// System.Int64 Melanchall.DryWetMidi.Multimedia.Playback::_durationInTicks
	int64_t ____durationInTicks_13;
	// Melanchall.DryWetMidi.Interaction.ITimeSpan Melanchall.DryWetMidi.Multimedia.Playback::_playbackStart
	RuntimeObject* ____playbackStart_14;
	// System.TimeSpan Melanchall.DryWetMidi.Multimedia.Playback::_playbackStartMetric
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ____playbackStartMetric_15;
	// Melanchall.DryWetMidi.Interaction.ITimeSpan Melanchall.DryWetMidi.Multimedia.Playback::_playbackEnd
	RuntimeObject* ____playbackEnd_16;
	// System.TimeSpan Melanchall.DryWetMidi.Multimedia.Playback::_playbackEndMetric
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ____playbackEndMetric_17;
	// System.Boolean Melanchall.DryWetMidi.Multimedia.Playback::_hasBeenStarted
	bool ____hasBeenStarted_18;
	// Melanchall.DryWetMidi.Multimedia.MidiClock Melanchall.DryWetMidi.Multimedia.Playback::_clock
	MidiClock_t123E6B5ED66886CE4731DFAEFD08995DBC2C2A6F * ____clock_19;
	// System.Collections.Concurrent.ConcurrentDictionary`2<Melanchall.DryWetMidi.Multimedia.NotePlaybackEventMetadata,System.Byte> Melanchall.DryWetMidi.Multimedia.Playback::_activeNotesMetadata
	ConcurrentDictionary_2_t6E1585DC4DED59DEEE0BF7513582CC5FEF56ABD9 * ____activeNotesMetadata_20;
	// System.Collections.Generic.List`1<Melanchall.DryWetMidi.Multimedia.NotePlaybackEventMetadata> Melanchall.DryWetMidi.Multimedia.Playback::_notesMetadata
	List_1_tE21D4F34EB9FDA66674AC659505FD188BCEDE88D * ____notesMetadata_21;
	// Melanchall.DryWetMidi.Multimedia.PlaybackDataTracker Melanchall.DryWetMidi.Multimedia.Playback::_playbackDataTracker
	PlaybackDataTracker_t3E93F1003A91BC309F70EF0704F7C30FA795DF94 * ____playbackDataTracker_22;
	// System.Boolean Melanchall.DryWetMidi.Multimedia.Playback::_disposed
	bool ____disposed_23;
	// Melanchall.DryWetMidi.Interaction.TempoMap Melanchall.DryWetMidi.Multimedia.Playback::<TempoMap>k__BackingField
	TempoMap_t2C66560BA5D33AACE8AB672141C4228C04142D5A * ___U3CTempoMapU3Ek__BackingField_24;
	// Melanchall.DryWetMidi.Multimedia.IOutputDevice Melanchall.DryWetMidi.Multimedia.Playback::<OutputDevice>k__BackingField
	RuntimeObject* ___U3COutputDeviceU3Ek__BackingField_25;
	// System.Boolean Melanchall.DryWetMidi.Multimedia.Playback::<Loop>k__BackingField
	bool ___U3CLoopU3Ek__BackingField_26;
	// System.Boolean Melanchall.DryWetMidi.Multimedia.Playback::<InterruptNotesOnStop>k__BackingField
	bool ___U3CInterruptNotesOnStopU3Ek__BackingField_27;
	// System.Boolean Melanchall.DryWetMidi.Multimedia.Playback::<TrackNotes>k__BackingField
	bool ___U3CTrackNotesU3Ek__BackingField_28;
	// Melanchall.DryWetMidi.Multimedia.PlaybackSnapping Melanchall.DryWetMidi.Multimedia.Playback::<Snapping>k__BackingField
	PlaybackSnapping_tAFF59CBC1A17B1DEDB3438762AA107E3504F9BBC * ___U3CSnappingU3Ek__BackingField_29;
	// Melanchall.DryWetMidi.Multimedia.NoteCallback Melanchall.DryWetMidi.Multimedia.Playback::<NoteCallback>k__BackingField
	NoteCallback_t53ADDA5AA061C7E49D28DBE1C181216CD7E8FFE4 * ___U3CNoteCallbackU3Ek__BackingField_30;
	// Melanchall.DryWetMidi.Multimedia.EventCallback Melanchall.DryWetMidi.Multimedia.Playback::<EventCallback>k__BackingField
	EventCallback_tFFA0A8D8A75133F69052AB380962824DF16B7656 * ___U3CEventCallbackU3Ek__BackingField_31;

public:
	inline static int32_t get_offset_of_Started_3() { return static_cast<int32_t>(offsetof(Playback_t57195DC933DF811AF3EF953E136F4B9610C70D3A, ___Started_3)); }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * get_Started_3() const { return ___Started_3; }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B ** get_address_of_Started_3() { return &___Started_3; }
	inline void set_Started_3(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * value)
	{
		___Started_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Started_3), (void*)value);
	}

	inline static int32_t get_offset_of_Stopped_4() { return static_cast<int32_t>(offsetof(Playback_t57195DC933DF811AF3EF953E136F4B9610C70D3A, ___Stopped_4)); }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * get_Stopped_4() const { return ___Stopped_4; }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B ** get_address_of_Stopped_4() { return &___Stopped_4; }
	inline void set_Stopped_4(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * value)
	{
		___Stopped_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Stopped_4), (void*)value);
	}

	inline static int32_t get_offset_of_Finished_5() { return static_cast<int32_t>(offsetof(Playback_t57195DC933DF811AF3EF953E136F4B9610C70D3A, ___Finished_5)); }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * get_Finished_5() const { return ___Finished_5; }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B ** get_address_of_Finished_5() { return &___Finished_5; }
	inline void set_Finished_5(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * value)
	{
		___Finished_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Finished_5), (void*)value);
	}

	inline static int32_t get_offset_of_RepeatStarted_6() { return static_cast<int32_t>(offsetof(Playback_t57195DC933DF811AF3EF953E136F4B9610C70D3A, ___RepeatStarted_6)); }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * get_RepeatStarted_6() const { return ___RepeatStarted_6; }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B ** get_address_of_RepeatStarted_6() { return &___RepeatStarted_6; }
	inline void set_RepeatStarted_6(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * value)
	{
		___RepeatStarted_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RepeatStarted_6), (void*)value);
	}

	inline static int32_t get_offset_of_NotesPlaybackStarted_7() { return static_cast<int32_t>(offsetof(Playback_t57195DC933DF811AF3EF953E136F4B9610C70D3A, ___NotesPlaybackStarted_7)); }
	inline EventHandler_1_tD53285C13B6974AAACBA9FD9151014AF05E01516 * get_NotesPlaybackStarted_7() const { return ___NotesPlaybackStarted_7; }
	inline EventHandler_1_tD53285C13B6974AAACBA9FD9151014AF05E01516 ** get_address_of_NotesPlaybackStarted_7() { return &___NotesPlaybackStarted_7; }
	inline void set_NotesPlaybackStarted_7(EventHandler_1_tD53285C13B6974AAACBA9FD9151014AF05E01516 * value)
	{
		___NotesPlaybackStarted_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NotesPlaybackStarted_7), (void*)value);
	}

	inline static int32_t get_offset_of_NotesPlaybackFinished_8() { return static_cast<int32_t>(offsetof(Playback_t57195DC933DF811AF3EF953E136F4B9610C70D3A, ___NotesPlaybackFinished_8)); }
	inline EventHandler_1_tD53285C13B6974AAACBA9FD9151014AF05E01516 * get_NotesPlaybackFinished_8() const { return ___NotesPlaybackFinished_8; }
	inline EventHandler_1_tD53285C13B6974AAACBA9FD9151014AF05E01516 ** get_address_of_NotesPlaybackFinished_8() { return &___NotesPlaybackFinished_8; }
	inline void set_NotesPlaybackFinished_8(EventHandler_1_tD53285C13B6974AAACBA9FD9151014AF05E01516 * value)
	{
		___NotesPlaybackFinished_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NotesPlaybackFinished_8), (void*)value);
	}

	inline static int32_t get_offset_of_EventPlayed_9() { return static_cast<int32_t>(offsetof(Playback_t57195DC933DF811AF3EF953E136F4B9610C70D3A, ___EventPlayed_9)); }
	inline EventHandler_1_t3C892FEA03250A467E3FA81836BC2E8BEEDB633B * get_EventPlayed_9() const { return ___EventPlayed_9; }
	inline EventHandler_1_t3C892FEA03250A467E3FA81836BC2E8BEEDB633B ** get_address_of_EventPlayed_9() { return &___EventPlayed_9; }
	inline void set_EventPlayed_9(EventHandler_1_t3C892FEA03250A467E3FA81836BC2E8BEEDB633B * value)
	{
		___EventPlayed_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EventPlayed_9), (void*)value);
	}

	inline static int32_t get_offset_of_DeviceErrorOccurred_10() { return static_cast<int32_t>(offsetof(Playback_t57195DC933DF811AF3EF953E136F4B9610C70D3A, ___DeviceErrorOccurred_10)); }
	inline EventHandler_1_t91D77E17587118EE6B5686879F96C8DE6697E156 * get_DeviceErrorOccurred_10() const { return ___DeviceErrorOccurred_10; }
	inline EventHandler_1_t91D77E17587118EE6B5686879F96C8DE6697E156 ** get_address_of_DeviceErrorOccurred_10() { return &___DeviceErrorOccurred_10; }
	inline void set_DeviceErrorOccurred_10(EventHandler_1_t91D77E17587118EE6B5686879F96C8DE6697E156 * value)
	{
		___DeviceErrorOccurred_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DeviceErrorOccurred_10), (void*)value);
	}

	inline static int32_t get_offset_of__eventsEnumerator_11() { return static_cast<int32_t>(offsetof(Playback_t57195DC933DF811AF3EF953E136F4B9610C70D3A, ____eventsEnumerator_11)); }
	inline RuntimeObject* get__eventsEnumerator_11() const { return ____eventsEnumerator_11; }
	inline RuntimeObject** get_address_of__eventsEnumerator_11() { return &____eventsEnumerator_11; }
	inline void set__eventsEnumerator_11(RuntimeObject* value)
	{
		____eventsEnumerator_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____eventsEnumerator_11), (void*)value);
	}

	inline static int32_t get_offset_of__duration_12() { return static_cast<int32_t>(offsetof(Playback_t57195DC933DF811AF3EF953E136F4B9610C70D3A, ____duration_12)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get__duration_12() const { return ____duration_12; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of__duration_12() { return &____duration_12; }
	inline void set__duration_12(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		____duration_12 = value;
	}

	inline static int32_t get_offset_of__durationInTicks_13() { return static_cast<int32_t>(offsetof(Playback_t57195DC933DF811AF3EF953E136F4B9610C70D3A, ____durationInTicks_13)); }
	inline int64_t get__durationInTicks_13() const { return ____durationInTicks_13; }
	inline int64_t* get_address_of__durationInTicks_13() { return &____durationInTicks_13; }
	inline void set__durationInTicks_13(int64_t value)
	{
		____durationInTicks_13 = value;
	}

	inline static int32_t get_offset_of__playbackStart_14() { return static_cast<int32_t>(offsetof(Playback_t57195DC933DF811AF3EF953E136F4B9610C70D3A, ____playbackStart_14)); }
	inline RuntimeObject* get__playbackStart_14() const { return ____playbackStart_14; }
	inline RuntimeObject** get_address_of__playbackStart_14() { return &____playbackStart_14; }
	inline void set__playbackStart_14(RuntimeObject* value)
	{
		____playbackStart_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____playbackStart_14), (void*)value);
	}

	inline static int32_t get_offset_of__playbackStartMetric_15() { return static_cast<int32_t>(offsetof(Playback_t57195DC933DF811AF3EF953E136F4B9610C70D3A, ____playbackStartMetric_15)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get__playbackStartMetric_15() const { return ____playbackStartMetric_15; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of__playbackStartMetric_15() { return &____playbackStartMetric_15; }
	inline void set__playbackStartMetric_15(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		____playbackStartMetric_15 = value;
	}

	inline static int32_t get_offset_of__playbackEnd_16() { return static_cast<int32_t>(offsetof(Playback_t57195DC933DF811AF3EF953E136F4B9610C70D3A, ____playbackEnd_16)); }
	inline RuntimeObject* get__playbackEnd_16() const { return ____playbackEnd_16; }
	inline RuntimeObject** get_address_of__playbackEnd_16() { return &____playbackEnd_16; }
	inline void set__playbackEnd_16(RuntimeObject* value)
	{
		____playbackEnd_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____playbackEnd_16), (void*)value);
	}

	inline static int32_t get_offset_of__playbackEndMetric_17() { return static_cast<int32_t>(offsetof(Playback_t57195DC933DF811AF3EF953E136F4B9610C70D3A, ____playbackEndMetric_17)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get__playbackEndMetric_17() const { return ____playbackEndMetric_17; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of__playbackEndMetric_17() { return &____playbackEndMetric_17; }
	inline void set__playbackEndMetric_17(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		____playbackEndMetric_17 = value;
	}

	inline static int32_t get_offset_of__hasBeenStarted_18() { return static_cast<int32_t>(offsetof(Playback_t57195DC933DF811AF3EF953E136F4B9610C70D3A, ____hasBeenStarted_18)); }
	inline bool get__hasBeenStarted_18() const { return ____hasBeenStarted_18; }
	inline bool* get_address_of__hasBeenStarted_18() { return &____hasBeenStarted_18; }
	inline void set__hasBeenStarted_18(bool value)
	{
		____hasBeenStarted_18 = value;
	}

	inline static int32_t get_offset_of__clock_19() { return static_cast<int32_t>(offsetof(Playback_t57195DC933DF811AF3EF953E136F4B9610C70D3A, ____clock_19)); }
	inline MidiClock_t123E6B5ED66886CE4731DFAEFD08995DBC2C2A6F * get__clock_19() const { return ____clock_19; }
	inline MidiClock_t123E6B5ED66886CE4731DFAEFD08995DBC2C2A6F ** get_address_of__clock_19() { return &____clock_19; }
	inline void set__clock_19(MidiClock_t123E6B5ED66886CE4731DFAEFD08995DBC2C2A6F * value)
	{
		____clock_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____clock_19), (void*)value);
	}

	inline static int32_t get_offset_of__activeNotesMetadata_20() { return static_cast<int32_t>(offsetof(Playback_t57195DC933DF811AF3EF953E136F4B9610C70D3A, ____activeNotesMetadata_20)); }
	inline ConcurrentDictionary_2_t6E1585DC4DED59DEEE0BF7513582CC5FEF56ABD9 * get__activeNotesMetadata_20() const { return ____activeNotesMetadata_20; }
	inline ConcurrentDictionary_2_t6E1585DC4DED59DEEE0BF7513582CC5FEF56ABD9 ** get_address_of__activeNotesMetadata_20() { return &____activeNotesMetadata_20; }
	inline void set__activeNotesMetadata_20(ConcurrentDictionary_2_t6E1585DC4DED59DEEE0BF7513582CC5FEF56ABD9 * value)
	{
		____activeNotesMetadata_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____activeNotesMetadata_20), (void*)value);
	}

	inline static int32_t get_offset_of__notesMetadata_21() { return static_cast<int32_t>(offsetof(Playback_t57195DC933DF811AF3EF953E136F4B9610C70D3A, ____notesMetadata_21)); }
	inline List_1_tE21D4F34EB9FDA66674AC659505FD188BCEDE88D * get__notesMetadata_21() const { return ____notesMetadata_21; }
	inline List_1_tE21D4F34EB9FDA66674AC659505FD188BCEDE88D ** get_address_of__notesMetadata_21() { return &____notesMetadata_21; }
	inline void set__notesMetadata_21(List_1_tE21D4F34EB9FDA66674AC659505FD188BCEDE88D * value)
	{
		____notesMetadata_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____notesMetadata_21), (void*)value);
	}

	inline static int32_t get_offset_of__playbackDataTracker_22() { return static_cast<int32_t>(offsetof(Playback_t57195DC933DF811AF3EF953E136F4B9610C70D3A, ____playbackDataTracker_22)); }
	inline PlaybackDataTracker_t3E93F1003A91BC309F70EF0704F7C30FA795DF94 * get__playbackDataTracker_22() const { return ____playbackDataTracker_22; }
	inline PlaybackDataTracker_t3E93F1003A91BC309F70EF0704F7C30FA795DF94 ** get_address_of__playbackDataTracker_22() { return &____playbackDataTracker_22; }
	inline void set__playbackDataTracker_22(PlaybackDataTracker_t3E93F1003A91BC309F70EF0704F7C30FA795DF94 * value)
	{
		____playbackDataTracker_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____playbackDataTracker_22), (void*)value);
	}

	inline static int32_t get_offset_of__disposed_23() { return static_cast<int32_t>(offsetof(Playback_t57195DC933DF811AF3EF953E136F4B9610C70D3A, ____disposed_23)); }
	inline bool get__disposed_23() const { return ____disposed_23; }
	inline bool* get_address_of__disposed_23() { return &____disposed_23; }
	inline void set__disposed_23(bool value)
	{
		____disposed_23 = value;
	}

	inline static int32_t get_offset_of_U3CTempoMapU3Ek__BackingField_24() { return static_cast<int32_t>(offsetof(Playback_t57195DC933DF811AF3EF953E136F4B9610C70D3A, ___U3CTempoMapU3Ek__BackingField_24)); }
	inline TempoMap_t2C66560BA5D33AACE8AB672141C4228C04142D5A * get_U3CTempoMapU3Ek__BackingField_24() const { return ___U3CTempoMapU3Ek__BackingField_24; }
	inline TempoMap_t2C66560BA5D33AACE8AB672141C4228C04142D5A ** get_address_of_U3CTempoMapU3Ek__BackingField_24() { return &___U3CTempoMapU3Ek__BackingField_24; }
	inline void set_U3CTempoMapU3Ek__BackingField_24(TempoMap_t2C66560BA5D33AACE8AB672141C4228C04142D5A * value)
	{
		___U3CTempoMapU3Ek__BackingField_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTempoMapU3Ek__BackingField_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3COutputDeviceU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(Playback_t57195DC933DF811AF3EF953E136F4B9610C70D3A, ___U3COutputDeviceU3Ek__BackingField_25)); }
	inline RuntimeObject* get_U3COutputDeviceU3Ek__BackingField_25() const { return ___U3COutputDeviceU3Ek__BackingField_25; }
	inline RuntimeObject** get_address_of_U3COutputDeviceU3Ek__BackingField_25() { return &___U3COutputDeviceU3Ek__BackingField_25; }
	inline void set_U3COutputDeviceU3Ek__BackingField_25(RuntimeObject* value)
	{
		___U3COutputDeviceU3Ek__BackingField_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COutputDeviceU3Ek__BackingField_25), (void*)value);
	}

	inline static int32_t get_offset_of_U3CLoopU3Ek__BackingField_26() { return static_cast<int32_t>(offsetof(Playback_t57195DC933DF811AF3EF953E136F4B9610C70D3A, ___U3CLoopU3Ek__BackingField_26)); }
	inline bool get_U3CLoopU3Ek__BackingField_26() const { return ___U3CLoopU3Ek__BackingField_26; }
	inline bool* get_address_of_U3CLoopU3Ek__BackingField_26() { return &___U3CLoopU3Ek__BackingField_26; }
	inline void set_U3CLoopU3Ek__BackingField_26(bool value)
	{
		___U3CLoopU3Ek__BackingField_26 = value;
	}

	inline static int32_t get_offset_of_U3CInterruptNotesOnStopU3Ek__BackingField_27() { return static_cast<int32_t>(offsetof(Playback_t57195DC933DF811AF3EF953E136F4B9610C70D3A, ___U3CInterruptNotesOnStopU3Ek__BackingField_27)); }
	inline bool get_U3CInterruptNotesOnStopU3Ek__BackingField_27() const { return ___U3CInterruptNotesOnStopU3Ek__BackingField_27; }
	inline bool* get_address_of_U3CInterruptNotesOnStopU3Ek__BackingField_27() { return &___U3CInterruptNotesOnStopU3Ek__BackingField_27; }
	inline void set_U3CInterruptNotesOnStopU3Ek__BackingField_27(bool value)
	{
		___U3CInterruptNotesOnStopU3Ek__BackingField_27 = value;
	}

	inline static int32_t get_offset_of_U3CTrackNotesU3Ek__BackingField_28() { return static_cast<int32_t>(offsetof(Playback_t57195DC933DF811AF3EF953E136F4B9610C70D3A, ___U3CTrackNotesU3Ek__BackingField_28)); }
	inline bool get_U3CTrackNotesU3Ek__BackingField_28() const { return ___U3CTrackNotesU3Ek__BackingField_28; }
	inline bool* get_address_of_U3CTrackNotesU3Ek__BackingField_28() { return &___U3CTrackNotesU3Ek__BackingField_28; }
	inline void set_U3CTrackNotesU3Ek__BackingField_28(bool value)
	{
		___U3CTrackNotesU3Ek__BackingField_28 = value;
	}

	inline static int32_t get_offset_of_U3CSnappingU3Ek__BackingField_29() { return static_cast<int32_t>(offsetof(Playback_t57195DC933DF811AF3EF953E136F4B9610C70D3A, ___U3CSnappingU3Ek__BackingField_29)); }
	inline PlaybackSnapping_tAFF59CBC1A17B1DEDB3438762AA107E3504F9BBC * get_U3CSnappingU3Ek__BackingField_29() const { return ___U3CSnappingU3Ek__BackingField_29; }
	inline PlaybackSnapping_tAFF59CBC1A17B1DEDB3438762AA107E3504F9BBC ** get_address_of_U3CSnappingU3Ek__BackingField_29() { return &___U3CSnappingU3Ek__BackingField_29; }
	inline void set_U3CSnappingU3Ek__BackingField_29(PlaybackSnapping_tAFF59CBC1A17B1DEDB3438762AA107E3504F9BBC * value)
	{
		___U3CSnappingU3Ek__BackingField_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSnappingU3Ek__BackingField_29), (void*)value);
	}

	inline static int32_t get_offset_of_U3CNoteCallbackU3Ek__BackingField_30() { return static_cast<int32_t>(offsetof(Playback_t57195DC933DF811AF3EF953E136F4B9610C70D3A, ___U3CNoteCallbackU3Ek__BackingField_30)); }
	inline NoteCallback_t53ADDA5AA061C7E49D28DBE1C181216CD7E8FFE4 * get_U3CNoteCallbackU3Ek__BackingField_30() const { return ___U3CNoteCallbackU3Ek__BackingField_30; }
	inline NoteCallback_t53ADDA5AA061C7E49D28DBE1C181216CD7E8FFE4 ** get_address_of_U3CNoteCallbackU3Ek__BackingField_30() { return &___U3CNoteCallbackU3Ek__BackingField_30; }
	inline void set_U3CNoteCallbackU3Ek__BackingField_30(NoteCallback_t53ADDA5AA061C7E49D28DBE1C181216CD7E8FFE4 * value)
	{
		___U3CNoteCallbackU3Ek__BackingField_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNoteCallbackU3Ek__BackingField_30), (void*)value);
	}

	inline static int32_t get_offset_of_U3CEventCallbackU3Ek__BackingField_31() { return static_cast<int32_t>(offsetof(Playback_t57195DC933DF811AF3EF953E136F4B9610C70D3A, ___U3CEventCallbackU3Ek__BackingField_31)); }
	inline EventCallback_tFFA0A8D8A75133F69052AB380962824DF16B7656 * get_U3CEventCallbackU3Ek__BackingField_31() const { return ___U3CEventCallbackU3Ek__BackingField_31; }
	inline EventCallback_tFFA0A8D8A75133F69052AB380962824DF16B7656 ** get_address_of_U3CEventCallbackU3Ek__BackingField_31() { return &___U3CEventCallbackU3Ek__BackingField_31; }
	inline void set_U3CEventCallbackU3Ek__BackingField_31(EventCallback_tFFA0A8D8A75133F69052AB380962824DF16B7656 * value)
	{
		___U3CEventCallbackU3Ek__BackingField_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CEventCallbackU3Ek__BackingField_31), (void*)value);
	}
};

struct Playback_t57195DC933DF811AF3EF953E136F4B9610C70D3A_StaticFields
{
public:
	// System.TimeSpan Melanchall.DryWetMidi.Multimedia.Playback::ClockInterval
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___ClockInterval_0;
	// System.TimeSpan Melanchall.DryWetMidi.Multimedia.Playback::MinPlaybackTime
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___MinPlaybackTime_1;
	// System.TimeSpan Melanchall.DryWetMidi.Multimedia.Playback::MaxPlaybackTime
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___MaxPlaybackTime_2;

public:
	inline static int32_t get_offset_of_ClockInterval_0() { return static_cast<int32_t>(offsetof(Playback_t57195DC933DF811AF3EF953E136F4B9610C70D3A_StaticFields, ___ClockInterval_0)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_ClockInterval_0() const { return ___ClockInterval_0; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_ClockInterval_0() { return &___ClockInterval_0; }
	inline void set_ClockInterval_0(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___ClockInterval_0 = value;
	}

	inline static int32_t get_offset_of_MinPlaybackTime_1() { return static_cast<int32_t>(offsetof(Playback_t57195DC933DF811AF3EF953E136F4B9610C70D3A_StaticFields, ___MinPlaybackTime_1)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_MinPlaybackTime_1() const { return ___MinPlaybackTime_1; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_MinPlaybackTime_1() { return &___MinPlaybackTime_1; }
	inline void set_MinPlaybackTime_1(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___MinPlaybackTime_1 = value;
	}

	inline static int32_t get_offset_of_MaxPlaybackTime_2() { return static_cast<int32_t>(offsetof(Playback_t57195DC933DF811AF3EF953E136F4B9610C70D3A_StaticFields, ___MaxPlaybackTime_2)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_MaxPlaybackTime_2() const { return ___MaxPlaybackTime_2; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_MaxPlaybackTime_2() { return &___MaxPlaybackTime_2; }
	inline void set_MaxPlaybackTime_2(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___MaxPlaybackTime_2 = value;
	}
};


// Melanchall.DryWetMidi.Core.ReadingSettings
struct  ReadingSettings_tF4A87F7B3EBDAE1FC80442C1C6A71B0B017D35DB  : public RuntimeObject
{
public:
	// Melanchall.DryWetMidi.Core.UnexpectedTrackChunksCountPolicy Melanchall.DryWetMidi.Core.ReadingSettings::_unexpectedTrackChunksCountPolicy
	int32_t ____unexpectedTrackChunksCountPolicy_0;
	// Melanchall.DryWetMidi.Core.ExtraTrackChunkPolicy Melanchall.DryWetMidi.Core.ReadingSettings::_extraTrackChunkPolicy
	uint8_t ____extraTrackChunkPolicy_1;
	// Melanchall.DryWetMidi.Core.UnknownChunkIdPolicy Melanchall.DryWetMidi.Core.ReadingSettings::_unknownChunkIdPolicy
	uint8_t ____unknownChunkIdPolicy_2;
	// Melanchall.DryWetMidi.Core.MissedEndOfTrackPolicy Melanchall.DryWetMidi.Core.ReadingSettings::_missedEndOfTrackPolicy
	uint8_t ____missedEndOfTrackPolicy_3;
	// Melanchall.DryWetMidi.Core.SilentNoteOnPolicy Melanchall.DryWetMidi.Core.ReadingSettings::_silentNoteOnPolicy
	uint8_t ____silentNoteOnPolicy_4;
	// Melanchall.DryWetMidi.Core.InvalidChunkSizePolicy Melanchall.DryWetMidi.Core.ReadingSettings::_invalidChunkSizePolicy
	uint8_t ____invalidChunkSizePolicy_5;
	// Melanchall.DryWetMidi.Core.UnknownFileFormatPolicy Melanchall.DryWetMidi.Core.ReadingSettings::_unknownFileFormatPolicy
	int32_t ____unknownFileFormatPolicy_6;
	// Melanchall.DryWetMidi.Core.UnknownChannelEventPolicy Melanchall.DryWetMidi.Core.ReadingSettings::_unknownChannelEventPolicy
	int32_t ____unknownChannelEventPolicy_7;
	// Melanchall.DryWetMidi.Core.InvalidChannelEventParameterValuePolicy Melanchall.DryWetMidi.Core.ReadingSettings::_invalidChannelEventParameterValuePolicy
	uint8_t ____invalidChannelEventParameterValuePolicy_8;
	// Melanchall.DryWetMidi.Core.InvalidMetaEventParameterValuePolicy Melanchall.DryWetMidi.Core.ReadingSettings::_invalidMetaEventParameterValuePolicy
	int32_t ____invalidMetaEventParameterValuePolicy_9;
	// Melanchall.DryWetMidi.Core.InvalidSystemCommonEventParameterValuePolicy Melanchall.DryWetMidi.Core.ReadingSettings::_invalidSystemCommonEventParameterValuePolicy
	int32_t ____invalidSystemCommonEventParameterValuePolicy_10;
	// Melanchall.DryWetMidi.Core.NotEnoughBytesPolicy Melanchall.DryWetMidi.Core.ReadingSettings::_notEnoughBytesPolicy
	int32_t ____notEnoughBytesPolicy_11;
	// Melanchall.DryWetMidi.Core.NoHeaderChunkPolicy Melanchall.DryWetMidi.Core.ReadingSettings::_noHeaderChunkPolicy
	int32_t ____noHeaderChunkPolicy_12;
	// Melanchall.DryWetMidi.Core.ZeroLengthDataPolicy Melanchall.DryWetMidi.Core.ReadingSettings::_zeroLengthDataPolicy
	int32_t ____zeroLengthDataPolicy_13;
	// Melanchall.DryWetMidi.Core.EndOfTrackStoringPolicy Melanchall.DryWetMidi.Core.ReadingSettings::_endOfTrackStoringPolicy
	int32_t ____endOfTrackStoringPolicy_14;
	// Melanchall.DryWetMidi.Core.UnknownChannelEventCallback Melanchall.DryWetMidi.Core.ReadingSettings::<UnknownChannelEventCallback>k__BackingField
	UnknownChannelEventCallback_t2EFB21A4459CE4BD9944B322EF74920B63A493CA * ___U3CUnknownChannelEventCallbackU3Ek__BackingField_15;
	// Melanchall.DryWetMidi.Core.ChunkTypesCollection Melanchall.DryWetMidi.Core.ReadingSettings::<CustomChunkTypes>k__BackingField
	ChunkTypesCollection_t4F1807C820757FE9CCE016AEE6B7211177DE3C79 * ___U3CCustomChunkTypesU3Ek__BackingField_16;
	// Melanchall.DryWetMidi.Core.EventTypesCollection Melanchall.DryWetMidi.Core.ReadingSettings::<CustomMetaEventTypes>k__BackingField
	EventTypesCollection_t0E1AB1201A1795077C84816F0FD7ACB6EEFF67B2 * ___U3CCustomMetaEventTypesU3Ek__BackingField_17;
	// System.Text.Encoding Melanchall.DryWetMidi.Core.ReadingSettings::<TextEncoding>k__BackingField
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___U3CTextEncodingU3Ek__BackingField_18;
	// Melanchall.DryWetMidi.Core.DecodeTextCallback Melanchall.DryWetMidi.Core.ReadingSettings::<DecodeTextCallback>k__BackingField
	DecodeTextCallback_t37670B0A76F35064F306DADE96EEEBFADC385368 * ___U3CDecodeTextCallbackU3Ek__BackingField_19;
	// Melanchall.DryWetMidi.Core.ReaderSettings Melanchall.DryWetMidi.Core.ReadingSettings::<ReaderSettings>k__BackingField
	ReaderSettings_tEB618C0A38AFFF2ADF1176F0F5F11EEC6DEA6E1D * ___U3CReaderSettingsU3Ek__BackingField_20;

public:
	inline static int32_t get_offset_of__unexpectedTrackChunksCountPolicy_0() { return static_cast<int32_t>(offsetof(ReadingSettings_tF4A87F7B3EBDAE1FC80442C1C6A71B0B017D35DB, ____unexpectedTrackChunksCountPolicy_0)); }
	inline int32_t get__unexpectedTrackChunksCountPolicy_0() const { return ____unexpectedTrackChunksCountPolicy_0; }
	inline int32_t* get_address_of__unexpectedTrackChunksCountPolicy_0() { return &____unexpectedTrackChunksCountPolicy_0; }
	inline void set__unexpectedTrackChunksCountPolicy_0(int32_t value)
	{
		____unexpectedTrackChunksCountPolicy_0 = value;
	}

	inline static int32_t get_offset_of__extraTrackChunkPolicy_1() { return static_cast<int32_t>(offsetof(ReadingSettings_tF4A87F7B3EBDAE1FC80442C1C6A71B0B017D35DB, ____extraTrackChunkPolicy_1)); }
	inline uint8_t get__extraTrackChunkPolicy_1() const { return ____extraTrackChunkPolicy_1; }
	inline uint8_t* get_address_of__extraTrackChunkPolicy_1() { return &____extraTrackChunkPolicy_1; }
	inline void set__extraTrackChunkPolicy_1(uint8_t value)
	{
		____extraTrackChunkPolicy_1 = value;
	}

	inline static int32_t get_offset_of__unknownChunkIdPolicy_2() { return static_cast<int32_t>(offsetof(ReadingSettings_tF4A87F7B3EBDAE1FC80442C1C6A71B0B017D35DB, ____unknownChunkIdPolicy_2)); }
	inline uint8_t get__unknownChunkIdPolicy_2() const { return ____unknownChunkIdPolicy_2; }
	inline uint8_t* get_address_of__unknownChunkIdPolicy_2() { return &____unknownChunkIdPolicy_2; }
	inline void set__unknownChunkIdPolicy_2(uint8_t value)
	{
		____unknownChunkIdPolicy_2 = value;
	}

	inline static int32_t get_offset_of__missedEndOfTrackPolicy_3() { return static_cast<int32_t>(offsetof(ReadingSettings_tF4A87F7B3EBDAE1FC80442C1C6A71B0B017D35DB, ____missedEndOfTrackPolicy_3)); }
	inline uint8_t get__missedEndOfTrackPolicy_3() const { return ____missedEndOfTrackPolicy_3; }
	inline uint8_t* get_address_of__missedEndOfTrackPolicy_3() { return &____missedEndOfTrackPolicy_3; }
	inline void set__missedEndOfTrackPolicy_3(uint8_t value)
	{
		____missedEndOfTrackPolicy_3 = value;
	}

	inline static int32_t get_offset_of__silentNoteOnPolicy_4() { return static_cast<int32_t>(offsetof(ReadingSettings_tF4A87F7B3EBDAE1FC80442C1C6A71B0B017D35DB, ____silentNoteOnPolicy_4)); }
	inline uint8_t get__silentNoteOnPolicy_4() const { return ____silentNoteOnPolicy_4; }
	inline uint8_t* get_address_of__silentNoteOnPolicy_4() { return &____silentNoteOnPolicy_4; }
	inline void set__silentNoteOnPolicy_4(uint8_t value)
	{
		____silentNoteOnPolicy_4 = value;
	}

	inline static int32_t get_offset_of__invalidChunkSizePolicy_5() { return static_cast<int32_t>(offsetof(ReadingSettings_tF4A87F7B3EBDAE1FC80442C1C6A71B0B017D35DB, ____invalidChunkSizePolicy_5)); }
	inline uint8_t get__invalidChunkSizePolicy_5() const { return ____invalidChunkSizePolicy_5; }
	inline uint8_t* get_address_of__invalidChunkSizePolicy_5() { return &____invalidChunkSizePolicy_5; }
	inline void set__invalidChunkSizePolicy_5(uint8_t value)
	{
		____invalidChunkSizePolicy_5 = value;
	}

	inline static int32_t get_offset_of__unknownFileFormatPolicy_6() { return static_cast<int32_t>(offsetof(ReadingSettings_tF4A87F7B3EBDAE1FC80442C1C6A71B0B017D35DB, ____unknownFileFormatPolicy_6)); }
	inline int32_t get__unknownFileFormatPolicy_6() const { return ____unknownFileFormatPolicy_6; }
	inline int32_t* get_address_of__unknownFileFormatPolicy_6() { return &____unknownFileFormatPolicy_6; }
	inline void set__unknownFileFormatPolicy_6(int32_t value)
	{
		____unknownFileFormatPolicy_6 = value;
	}

	inline static int32_t get_offset_of__unknownChannelEventPolicy_7() { return static_cast<int32_t>(offsetof(ReadingSettings_tF4A87F7B3EBDAE1FC80442C1C6A71B0B017D35DB, ____unknownChannelEventPolicy_7)); }
	inline int32_t get__unknownChannelEventPolicy_7() const { return ____unknownChannelEventPolicy_7; }
	inline int32_t* get_address_of__unknownChannelEventPolicy_7() { return &____unknownChannelEventPolicy_7; }
	inline void set__unknownChannelEventPolicy_7(int32_t value)
	{
		____unknownChannelEventPolicy_7 = value;
	}

	inline static int32_t get_offset_of__invalidChannelEventParameterValuePolicy_8() { return static_cast<int32_t>(offsetof(ReadingSettings_tF4A87F7B3EBDAE1FC80442C1C6A71B0B017D35DB, ____invalidChannelEventParameterValuePolicy_8)); }
	inline uint8_t get__invalidChannelEventParameterValuePolicy_8() const { return ____invalidChannelEventParameterValuePolicy_8; }
	inline uint8_t* get_address_of__invalidChannelEventParameterValuePolicy_8() { return &____invalidChannelEventParameterValuePolicy_8; }
	inline void set__invalidChannelEventParameterValuePolicy_8(uint8_t value)
	{
		____invalidChannelEventParameterValuePolicy_8 = value;
	}

	inline static int32_t get_offset_of__invalidMetaEventParameterValuePolicy_9() { return static_cast<int32_t>(offsetof(ReadingSettings_tF4A87F7B3EBDAE1FC80442C1C6A71B0B017D35DB, ____invalidMetaEventParameterValuePolicy_9)); }
	inline int32_t get__invalidMetaEventParameterValuePolicy_9() const { return ____invalidMetaEventParameterValuePolicy_9; }
	inline int32_t* get_address_of__invalidMetaEventParameterValuePolicy_9() { return &____invalidMetaEventParameterValuePolicy_9; }
	inline void set__invalidMetaEventParameterValuePolicy_9(int32_t value)
	{
		____invalidMetaEventParameterValuePolicy_9 = value;
	}

	inline static int32_t get_offset_of__invalidSystemCommonEventParameterValuePolicy_10() { return static_cast<int32_t>(offsetof(ReadingSettings_tF4A87F7B3EBDAE1FC80442C1C6A71B0B017D35DB, ____invalidSystemCommonEventParameterValuePolicy_10)); }
	inline int32_t get__invalidSystemCommonEventParameterValuePolicy_10() const { return ____invalidSystemCommonEventParameterValuePolicy_10; }
	inline int32_t* get_address_of__invalidSystemCommonEventParameterValuePolicy_10() { return &____invalidSystemCommonEventParameterValuePolicy_10; }
	inline void set__invalidSystemCommonEventParameterValuePolicy_10(int32_t value)
	{
		____invalidSystemCommonEventParameterValuePolicy_10 = value;
	}

	inline static int32_t get_offset_of__notEnoughBytesPolicy_11() { return static_cast<int32_t>(offsetof(ReadingSettings_tF4A87F7B3EBDAE1FC80442C1C6A71B0B017D35DB, ____notEnoughBytesPolicy_11)); }
	inline int32_t get__notEnoughBytesPolicy_11() const { return ____notEnoughBytesPolicy_11; }
	inline int32_t* get_address_of__notEnoughBytesPolicy_11() { return &____notEnoughBytesPolicy_11; }
	inline void set__notEnoughBytesPolicy_11(int32_t value)
	{
		____notEnoughBytesPolicy_11 = value;
	}

	inline static int32_t get_offset_of__noHeaderChunkPolicy_12() { return static_cast<int32_t>(offsetof(ReadingSettings_tF4A87F7B3EBDAE1FC80442C1C6A71B0B017D35DB, ____noHeaderChunkPolicy_12)); }
	inline int32_t get__noHeaderChunkPolicy_12() const { return ____noHeaderChunkPolicy_12; }
	inline int32_t* get_address_of__noHeaderChunkPolicy_12() { return &____noHeaderChunkPolicy_12; }
	inline void set__noHeaderChunkPolicy_12(int32_t value)
	{
		____noHeaderChunkPolicy_12 = value;
	}

	inline static int32_t get_offset_of__zeroLengthDataPolicy_13() { return static_cast<int32_t>(offsetof(ReadingSettings_tF4A87F7B3EBDAE1FC80442C1C6A71B0B017D35DB, ____zeroLengthDataPolicy_13)); }
	inline int32_t get__zeroLengthDataPolicy_13() const { return ____zeroLengthDataPolicy_13; }
	inline int32_t* get_address_of__zeroLengthDataPolicy_13() { return &____zeroLengthDataPolicy_13; }
	inline void set__zeroLengthDataPolicy_13(int32_t value)
	{
		____zeroLengthDataPolicy_13 = value;
	}

	inline static int32_t get_offset_of__endOfTrackStoringPolicy_14() { return static_cast<int32_t>(offsetof(ReadingSettings_tF4A87F7B3EBDAE1FC80442C1C6A71B0B017D35DB, ____endOfTrackStoringPolicy_14)); }
	inline int32_t get__endOfTrackStoringPolicy_14() const { return ____endOfTrackStoringPolicy_14; }
	inline int32_t* get_address_of__endOfTrackStoringPolicy_14() { return &____endOfTrackStoringPolicy_14; }
	inline void set__endOfTrackStoringPolicy_14(int32_t value)
	{
		____endOfTrackStoringPolicy_14 = value;
	}

	inline static int32_t get_offset_of_U3CUnknownChannelEventCallbackU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(ReadingSettings_tF4A87F7B3EBDAE1FC80442C1C6A71B0B017D35DB, ___U3CUnknownChannelEventCallbackU3Ek__BackingField_15)); }
	inline UnknownChannelEventCallback_t2EFB21A4459CE4BD9944B322EF74920B63A493CA * get_U3CUnknownChannelEventCallbackU3Ek__BackingField_15() const { return ___U3CUnknownChannelEventCallbackU3Ek__BackingField_15; }
	inline UnknownChannelEventCallback_t2EFB21A4459CE4BD9944B322EF74920B63A493CA ** get_address_of_U3CUnknownChannelEventCallbackU3Ek__BackingField_15() { return &___U3CUnknownChannelEventCallbackU3Ek__BackingField_15; }
	inline void set_U3CUnknownChannelEventCallbackU3Ek__BackingField_15(UnknownChannelEventCallback_t2EFB21A4459CE4BD9944B322EF74920B63A493CA * value)
	{
		___U3CUnknownChannelEventCallbackU3Ek__BackingField_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CUnknownChannelEventCallbackU3Ek__BackingField_15), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCustomChunkTypesU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(ReadingSettings_tF4A87F7B3EBDAE1FC80442C1C6A71B0B017D35DB, ___U3CCustomChunkTypesU3Ek__BackingField_16)); }
	inline ChunkTypesCollection_t4F1807C820757FE9CCE016AEE6B7211177DE3C79 * get_U3CCustomChunkTypesU3Ek__BackingField_16() const { return ___U3CCustomChunkTypesU3Ek__BackingField_16; }
	inline ChunkTypesCollection_t4F1807C820757FE9CCE016AEE6B7211177DE3C79 ** get_address_of_U3CCustomChunkTypesU3Ek__BackingField_16() { return &___U3CCustomChunkTypesU3Ek__BackingField_16; }
	inline void set_U3CCustomChunkTypesU3Ek__BackingField_16(ChunkTypesCollection_t4F1807C820757FE9CCE016AEE6B7211177DE3C79 * value)
	{
		___U3CCustomChunkTypesU3Ek__BackingField_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCustomChunkTypesU3Ek__BackingField_16), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCustomMetaEventTypesU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(ReadingSettings_tF4A87F7B3EBDAE1FC80442C1C6A71B0B017D35DB, ___U3CCustomMetaEventTypesU3Ek__BackingField_17)); }
	inline EventTypesCollection_t0E1AB1201A1795077C84816F0FD7ACB6EEFF67B2 * get_U3CCustomMetaEventTypesU3Ek__BackingField_17() const { return ___U3CCustomMetaEventTypesU3Ek__BackingField_17; }
	inline EventTypesCollection_t0E1AB1201A1795077C84816F0FD7ACB6EEFF67B2 ** get_address_of_U3CCustomMetaEventTypesU3Ek__BackingField_17() { return &___U3CCustomMetaEventTypesU3Ek__BackingField_17; }
	inline void set_U3CCustomMetaEventTypesU3Ek__BackingField_17(EventTypesCollection_t0E1AB1201A1795077C84816F0FD7ACB6EEFF67B2 * value)
	{
		___U3CCustomMetaEventTypesU3Ek__BackingField_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCustomMetaEventTypesU3Ek__BackingField_17), (void*)value);
	}

	inline static int32_t get_offset_of_U3CTextEncodingU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(ReadingSettings_tF4A87F7B3EBDAE1FC80442C1C6A71B0B017D35DB, ___U3CTextEncodingU3Ek__BackingField_18)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_U3CTextEncodingU3Ek__BackingField_18() const { return ___U3CTextEncodingU3Ek__BackingField_18; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_U3CTextEncodingU3Ek__BackingField_18() { return &___U3CTextEncodingU3Ek__BackingField_18; }
	inline void set_U3CTextEncodingU3Ek__BackingField_18(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___U3CTextEncodingU3Ek__BackingField_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTextEncodingU3Ek__BackingField_18), (void*)value);
	}

	inline static int32_t get_offset_of_U3CDecodeTextCallbackU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(ReadingSettings_tF4A87F7B3EBDAE1FC80442C1C6A71B0B017D35DB, ___U3CDecodeTextCallbackU3Ek__BackingField_19)); }
	inline DecodeTextCallback_t37670B0A76F35064F306DADE96EEEBFADC385368 * get_U3CDecodeTextCallbackU3Ek__BackingField_19() const { return ___U3CDecodeTextCallbackU3Ek__BackingField_19; }
	inline DecodeTextCallback_t37670B0A76F35064F306DADE96EEEBFADC385368 ** get_address_of_U3CDecodeTextCallbackU3Ek__BackingField_19() { return &___U3CDecodeTextCallbackU3Ek__BackingField_19; }
	inline void set_U3CDecodeTextCallbackU3Ek__BackingField_19(DecodeTextCallback_t37670B0A76F35064F306DADE96EEEBFADC385368 * value)
	{
		___U3CDecodeTextCallbackU3Ek__BackingField_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDecodeTextCallbackU3Ek__BackingField_19), (void*)value);
	}

	inline static int32_t get_offset_of_U3CReaderSettingsU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(ReadingSettings_tF4A87F7B3EBDAE1FC80442C1C6A71B0B017D35DB, ___U3CReaderSettingsU3Ek__BackingField_20)); }
	inline ReaderSettings_tEB618C0A38AFFF2ADF1176F0F5F11EEC6DEA6E1D * get_U3CReaderSettingsU3Ek__BackingField_20() const { return ___U3CReaderSettingsU3Ek__BackingField_20; }
	inline ReaderSettings_tEB618C0A38AFFF2ADF1176F0F5F11EEC6DEA6E1D ** get_address_of_U3CReaderSettingsU3Ek__BackingField_20() { return &___U3CReaderSettingsU3Ek__BackingField_20; }
	inline void set_U3CReaderSettingsU3Ek__BackingField_20(ReaderSettings_tEB618C0A38AFFF2ADF1176F0F5F11EEC6DEA6E1D * value)
	{
		___U3CReaderSettingsU3Ek__BackingField_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CReaderSettingsU3Ek__BackingField_20), (void*)value);
	}
};


// UnityEngine.Sprite
struct  Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.SystemException
struct  SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// UnityEngine.Networking.UnityWebRequest
struct  UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.UnityWebRequest::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.Networking.DownloadHandler UnityEngine.Networking.UnityWebRequest::m_DownloadHandler
	DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * ___m_DownloadHandler_1;
	// UnityEngine.Networking.UploadHandler UnityEngine.Networking.UnityWebRequest::m_UploadHandler
	UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * ___m_UploadHandler_2;
	// UnityEngine.Networking.CertificateHandler UnityEngine.Networking.UnityWebRequest::m_CertificateHandler
	CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E * ___m_CertificateHandler_3;
	// System.Uri UnityEngine.Networking.UnityWebRequest::m_Uri
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___m_Uri_4;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeCertificateHandlerOnDispose>k__BackingField
	bool ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeDownloadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeUploadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_DownloadHandler_1() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___m_DownloadHandler_1)); }
	inline DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * get_m_DownloadHandler_1() const { return ___m_DownloadHandler_1; }
	inline DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB ** get_address_of_m_DownloadHandler_1() { return &___m_DownloadHandler_1; }
	inline void set_m_DownloadHandler_1(DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * value)
	{
		___m_DownloadHandler_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DownloadHandler_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_UploadHandler_2() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___m_UploadHandler_2)); }
	inline UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * get_m_UploadHandler_2() const { return ___m_UploadHandler_2; }
	inline UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA ** get_address_of_m_UploadHandler_2() { return &___m_UploadHandler_2; }
	inline void set_m_UploadHandler_2(UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * value)
	{
		___m_UploadHandler_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_UploadHandler_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_CertificateHandler_3() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___m_CertificateHandler_3)); }
	inline CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E * get_m_CertificateHandler_3() const { return ___m_CertificateHandler_3; }
	inline CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E ** get_address_of_m_CertificateHandler_3() { return &___m_CertificateHandler_3; }
	inline void set_m_CertificateHandler_3(CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E * value)
	{
		___m_CertificateHandler_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CertificateHandler_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_Uri_4() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___m_Uri_4)); }
	inline Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * get_m_Uri_4() const { return ___m_Uri_4; }
	inline Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 ** get_address_of_m_Uri_4() { return &___m_Uri_4; }
	inline void set_m_Uri_4(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * value)
	{
		___m_Uri_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Uri_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5)); }
	inline bool get_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5() const { return ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5() { return &___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5; }
	inline void set_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5(bool value)
	{
		___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6)); }
	inline bool get_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6() const { return ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6() { return &___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6; }
	inline void set_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6(bool value)
	{
		___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7)); }
	inline bool get_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7() const { return ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7; }
	inline bool* get_address_of_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7() { return &___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7; }
	inline void set_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7(bool value)
	{
		___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_pinvoke ___m_DownloadHandler_1;
	UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_pinvoke ___m_UploadHandler_2;
	CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_pinvoke ___m_CertificateHandler_3;
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___m_Uri_4;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
};
// Native definition for COM marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_com
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_com* ___m_DownloadHandler_1;
	UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_com* ___m_UploadHandler_2;
	CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_com* ___m_CertificateHandler_3;
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___m_Uri_4;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
};

// UnityEngine.Networking.UnityWebRequestAsyncOperation
struct  UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396  : public AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86
{
public:
	// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequestAsyncOperation::<webRequest>k__BackingField
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * ___U3CwebRequestU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CwebRequestU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396, ___U3CwebRequestU3Ek__BackingField_2)); }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * get_U3CwebRequestU3Ek__BackingField_2() const { return ___U3CwebRequestU3Ek__BackingField_2; }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E ** get_address_of_U3CwebRequestU3Ek__BackingField_2() { return &___U3CwebRequestU3Ek__BackingField_2; }
	inline void set_U3CwebRequestU3Ek__BackingField_2(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * value)
	{
		___U3CwebRequestU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CwebRequestU3Ek__BackingField_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396_marshaled_pinvoke : public AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_pinvoke
{
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_pinvoke* ___U3CwebRequestU3Ek__BackingField_2;
};
// Native definition for COM marshalling of UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396_marshaled_com : public AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_com
{
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_com* ___U3CwebRequestU3Ek__BackingField_2;
};

// System.EventHandler`1<Melanchall.DryWetMidi.Multimedia.NotesEventArgs>
struct  EventHandler_1_tD53285C13B6974AAACBA9FD9151014AF05E01516  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<Melanchall.DryWetMidi.Interaction.Note,System.String>
struct  Func_2_tEDFF7C02ADD87D637C43084161242EA41259A2BA  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<Melanchall.DryWetMidi.Multimedia.OutputDevice,System.Boolean>
struct  Func_2_t9C331FABBD6817E7209986DEE757FE09F192C16F  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<Melanchall.DryWetMidi.Multimedia.OutputDevice,System.String>
struct  Func_2_t39D5366EA29875308A08408C95C8986F8229009D  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct  Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// System.NotSupportedException
struct  NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// Melanchall.DryWetMidi.Multimedia.OutputDevice
struct  OutputDevice_t7A9B57531DCA6BF309413A7FACE2F48E261EC9BB  : public MidiDevice_t736FB1ED772DA5A9202017F93EB436B720EFDD83
{
public:
	// System.EventHandler`1<Melanchall.DryWetMidi.Multimedia.MidiEventSentEventArgs> Melanchall.DryWetMidi.Multimedia.OutputDevice::EventSent
	EventHandler_1_tBB45525567384737A4C1698CCAE2497919D404B4 * ___EventSent_8;
	// Melanchall.DryWetMidi.Core.MidiEventToBytesConverter Melanchall.DryWetMidi.Multimedia.OutputDevice::_midiEventToBytesConverter
	MidiEventToBytesConverter_t7A952CA9589AB6E16808F8E61A3F3B37B5FD37C9 * ____midiEventToBytesConverter_10;
	// Melanchall.DryWetMidi.Core.BytesToMidiEventConverter Melanchall.DryWetMidi.Multimedia.OutputDevice::_bytesToMidiEventConverter
	BytesToMidiEventConverter_t9E23B2EE144400112FCE1163980D43C0D52FD688 * ____bytesToMidiEventConverter_11;
	// Melanchall.DryWetMidi.Multimedia.OutputDeviceApi/Callback_Win Melanchall.DryWetMidi.Multimedia.OutputDevice::_callback
	Callback_Win_t87FA3FC87E13F7EE8F035648617EE3F8BF93D8F8 * ____callback_12;
	// Melanchall.DryWetMidi.Multimedia.CommonApi/API_TYPE Melanchall.DryWetMidi.Multimedia.OutputDevice::_apiType
	int32_t ____apiType_13;
	// System.Int32 Melanchall.DryWetMidi.Multimedia.OutputDevice::_hashCode
	int32_t ____hashCode_14;
	// System.IntPtr Melanchall.DryWetMidi.Multimedia.OutputDevice::_info
	intptr_t ____info_15;
	// Melanchall.DryWetMidi.Multimedia.OutputDevice/OutputDeviceHandle Melanchall.DryWetMidi.Multimedia.OutputDevice::_handle
	OutputDeviceHandle_tEB644504BD28E311DCD34A7FBDBBB65C7236A5E6 * ____handle_16;

public:
	inline static int32_t get_offset_of_EventSent_8() { return static_cast<int32_t>(offsetof(OutputDevice_t7A9B57531DCA6BF309413A7FACE2F48E261EC9BB, ___EventSent_8)); }
	inline EventHandler_1_tBB45525567384737A4C1698CCAE2497919D404B4 * get_EventSent_8() const { return ___EventSent_8; }
	inline EventHandler_1_tBB45525567384737A4C1698CCAE2497919D404B4 ** get_address_of_EventSent_8() { return &___EventSent_8; }
	inline void set_EventSent_8(EventHandler_1_tBB45525567384737A4C1698CCAE2497919D404B4 * value)
	{
		___EventSent_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EventSent_8), (void*)value);
	}

	inline static int32_t get_offset_of__midiEventToBytesConverter_10() { return static_cast<int32_t>(offsetof(OutputDevice_t7A9B57531DCA6BF309413A7FACE2F48E261EC9BB, ____midiEventToBytesConverter_10)); }
	inline MidiEventToBytesConverter_t7A952CA9589AB6E16808F8E61A3F3B37B5FD37C9 * get__midiEventToBytesConverter_10() const { return ____midiEventToBytesConverter_10; }
	inline MidiEventToBytesConverter_t7A952CA9589AB6E16808F8E61A3F3B37B5FD37C9 ** get_address_of__midiEventToBytesConverter_10() { return &____midiEventToBytesConverter_10; }
	inline void set__midiEventToBytesConverter_10(MidiEventToBytesConverter_t7A952CA9589AB6E16808F8E61A3F3B37B5FD37C9 * value)
	{
		____midiEventToBytesConverter_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____midiEventToBytesConverter_10), (void*)value);
	}

	inline static int32_t get_offset_of__bytesToMidiEventConverter_11() { return static_cast<int32_t>(offsetof(OutputDevice_t7A9B57531DCA6BF309413A7FACE2F48E261EC9BB, ____bytesToMidiEventConverter_11)); }
	inline BytesToMidiEventConverter_t9E23B2EE144400112FCE1163980D43C0D52FD688 * get__bytesToMidiEventConverter_11() const { return ____bytesToMidiEventConverter_11; }
	inline BytesToMidiEventConverter_t9E23B2EE144400112FCE1163980D43C0D52FD688 ** get_address_of__bytesToMidiEventConverter_11() { return &____bytesToMidiEventConverter_11; }
	inline void set__bytesToMidiEventConverter_11(BytesToMidiEventConverter_t9E23B2EE144400112FCE1163980D43C0D52FD688 * value)
	{
		____bytesToMidiEventConverter_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____bytesToMidiEventConverter_11), (void*)value);
	}

	inline static int32_t get_offset_of__callback_12() { return static_cast<int32_t>(offsetof(OutputDevice_t7A9B57531DCA6BF309413A7FACE2F48E261EC9BB, ____callback_12)); }
	inline Callback_Win_t87FA3FC87E13F7EE8F035648617EE3F8BF93D8F8 * get__callback_12() const { return ____callback_12; }
	inline Callback_Win_t87FA3FC87E13F7EE8F035648617EE3F8BF93D8F8 ** get_address_of__callback_12() { return &____callback_12; }
	inline void set__callback_12(Callback_Win_t87FA3FC87E13F7EE8F035648617EE3F8BF93D8F8 * value)
	{
		____callback_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____callback_12), (void*)value);
	}

	inline static int32_t get_offset_of__apiType_13() { return static_cast<int32_t>(offsetof(OutputDevice_t7A9B57531DCA6BF309413A7FACE2F48E261EC9BB, ____apiType_13)); }
	inline int32_t get__apiType_13() const { return ____apiType_13; }
	inline int32_t* get_address_of__apiType_13() { return &____apiType_13; }
	inline void set__apiType_13(int32_t value)
	{
		____apiType_13 = value;
	}

	inline static int32_t get_offset_of__hashCode_14() { return static_cast<int32_t>(offsetof(OutputDevice_t7A9B57531DCA6BF309413A7FACE2F48E261EC9BB, ____hashCode_14)); }
	inline int32_t get__hashCode_14() const { return ____hashCode_14; }
	inline int32_t* get_address_of__hashCode_14() { return &____hashCode_14; }
	inline void set__hashCode_14(int32_t value)
	{
		____hashCode_14 = value;
	}

	inline static int32_t get_offset_of__info_15() { return static_cast<int32_t>(offsetof(OutputDevice_t7A9B57531DCA6BF309413A7FACE2F48E261EC9BB, ____info_15)); }
	inline intptr_t get__info_15() const { return ____info_15; }
	inline intptr_t* get_address_of__info_15() { return &____info_15; }
	inline void set__info_15(intptr_t value)
	{
		____info_15 = value;
	}

	inline static int32_t get_offset_of__handle_16() { return static_cast<int32_t>(offsetof(OutputDevice_t7A9B57531DCA6BF309413A7FACE2F48E261EC9BB, ____handle_16)); }
	inline OutputDeviceHandle_tEB644504BD28E311DCD34A7FBDBBB65C7236A5E6 * get__handle_16() const { return ____handle_16; }
	inline OutputDeviceHandle_tEB644504BD28E311DCD34A7FBDBBB65C7236A5E6 ** get_address_of__handle_16() { return &____handle_16; }
	inline void set__handle_16(OutputDeviceHandle_tEB644504BD28E311DCD34A7FBDBBB65C7236A5E6 * value)
	{
		____handle_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____handle_16), (void*)value);
	}
};

struct OutputDevice_t7A9B57531DCA6BF309413A7FACE2F48E261EC9BB_StaticFields
{
public:
	// Melanchall.DryWetMidi.Core.IEventWriter Melanchall.DryWetMidi.Multimedia.OutputDevice::ChannelEventWriter
	RuntimeObject* ___ChannelEventWriter_6;
	// Melanchall.DryWetMidi.Core.IEventWriter Melanchall.DryWetMidi.Multimedia.OutputDevice::SystemRealTimeEventWriter
	RuntimeObject* ___SystemRealTimeEventWriter_7;
	// Melanchall.DryWetMidi.Multimedia.OutputDeviceProperty[] Melanchall.DryWetMidi.Multimedia.OutputDevice::_supportedProperties
	OutputDevicePropertyU5BU5D_t45655F8E0B6DE36ED82E5206FBB0FA948D82F9FE* ____supportedProperties_9;

public:
	inline static int32_t get_offset_of_ChannelEventWriter_6() { return static_cast<int32_t>(offsetof(OutputDevice_t7A9B57531DCA6BF309413A7FACE2F48E261EC9BB_StaticFields, ___ChannelEventWriter_6)); }
	inline RuntimeObject* get_ChannelEventWriter_6() const { return ___ChannelEventWriter_6; }
	inline RuntimeObject** get_address_of_ChannelEventWriter_6() { return &___ChannelEventWriter_6; }
	inline void set_ChannelEventWriter_6(RuntimeObject* value)
	{
		___ChannelEventWriter_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ChannelEventWriter_6), (void*)value);
	}

	inline static int32_t get_offset_of_SystemRealTimeEventWriter_7() { return static_cast<int32_t>(offsetof(OutputDevice_t7A9B57531DCA6BF309413A7FACE2F48E261EC9BB_StaticFields, ___SystemRealTimeEventWriter_7)); }
	inline RuntimeObject* get_SystemRealTimeEventWriter_7() const { return ___SystemRealTimeEventWriter_7; }
	inline RuntimeObject** get_address_of_SystemRealTimeEventWriter_7() { return &___SystemRealTimeEventWriter_7; }
	inline void set_SystemRealTimeEventWriter_7(RuntimeObject* value)
	{
		___SystemRealTimeEventWriter_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SystemRealTimeEventWriter_7), (void*)value);
	}

	inline static int32_t get_offset_of__supportedProperties_9() { return static_cast<int32_t>(offsetof(OutputDevice_t7A9B57531DCA6BF309413A7FACE2F48E261EC9BB_StaticFields, ____supportedProperties_9)); }
	inline OutputDevicePropertyU5BU5D_t45655F8E0B6DE36ED82E5206FBB0FA948D82F9FE* get__supportedProperties_9() const { return ____supportedProperties_9; }
	inline OutputDevicePropertyU5BU5D_t45655F8E0B6DE36ED82E5206FBB0FA948D82F9FE** get_address_of__supportedProperties_9() { return &____supportedProperties_9; }
	inline void set__supportedProperties_9(OutputDevicePropertyU5BU5D_t45655F8E0B6DE36ED82E5206FBB0FA948D82F9FE* value)
	{
		____supportedProperties_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____supportedProperties_9), (void*)value);
	}
};


// UnityEngine.Renderer
struct  Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Transform
struct  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.AudioBehaviour
struct  AudioBehaviour_tB44966D47AD43C50C7294AEE9B57574E55AACA4A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.RectTransform
struct  RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072  : public Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1
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


// UnityEngine.SpriteRenderer
struct  SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF  : public Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C
{
public:

public:
};


// UnityEngine.AudioSource
struct  AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B  : public AudioBehaviour_tB44966D47AD43C50C7294AEE9B57574E55AACA4A
{
public:

public:
};


// BackgroundMover
struct  BackgroundMover_tCB967D07193551E3830EBA987419287E3598C848  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject BackgroundMover::l_Background
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___l_Background_4;
	// UnityEngine.GameObject BackgroundMover::r_Background
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___r_Background_5;
	// UnityEngine.GameObject BackgroundMover::l_Spawner
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___l_Spawner_6;
	// UnityEngine.GameObject BackgroundMover::r_Spawner
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___r_Spawner_7;

public:
	inline static int32_t get_offset_of_l_Background_4() { return static_cast<int32_t>(offsetof(BackgroundMover_tCB967D07193551E3830EBA987419287E3598C848, ___l_Background_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_l_Background_4() const { return ___l_Background_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_l_Background_4() { return &___l_Background_4; }
	inline void set_l_Background_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___l_Background_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___l_Background_4), (void*)value);
	}

	inline static int32_t get_offset_of_r_Background_5() { return static_cast<int32_t>(offsetof(BackgroundMover_tCB967D07193551E3830EBA987419287E3598C848, ___r_Background_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_r_Background_5() const { return ___r_Background_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_r_Background_5() { return &___r_Background_5; }
	inline void set_r_Background_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___r_Background_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___r_Background_5), (void*)value);
	}

	inline static int32_t get_offset_of_l_Spawner_6() { return static_cast<int32_t>(offsetof(BackgroundMover_tCB967D07193551E3830EBA987419287E3598C848, ___l_Spawner_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_l_Spawner_6() const { return ___l_Spawner_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_l_Spawner_6() { return &___l_Spawner_6; }
	inline void set_l_Spawner_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___l_Spawner_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___l_Spawner_6), (void*)value);
	}

	inline static int32_t get_offset_of_r_Spawner_7() { return static_cast<int32_t>(offsetof(BackgroundMover_tCB967D07193551E3830EBA987419287E3598C848, ___r_Spawner_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_r_Spawner_7() const { return ___r_Spawner_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_r_Spawner_7() { return &___r_Spawner_7; }
	inline void set_r_Spawner_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___r_Spawner_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___r_Spawner_7), (void*)value);
	}
};


// BeatScroller
struct  BeatScroller_t6BF3F88E6125A8C8789A3610E3EFEA29CA91F380  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single BeatScroller::beatTempo
	float ___beatTempo_4;
	// System.Boolean BeatScroller::hasStarted
	bool ___hasStarted_5;

public:
	inline static int32_t get_offset_of_beatTempo_4() { return static_cast<int32_t>(offsetof(BeatScroller_t6BF3F88E6125A8C8789A3610E3EFEA29CA91F380, ___beatTempo_4)); }
	inline float get_beatTempo_4() const { return ___beatTempo_4; }
	inline float* get_address_of_beatTempo_4() { return &___beatTempo_4; }
	inline void set_beatTempo_4(float value)
	{
		___beatTempo_4 = value;
	}

	inline static int32_t get_offset_of_hasStarted_5() { return static_cast<int32_t>(offsetof(BeatScroller_t6BF3F88E6125A8C8789A3610E3EFEA29CA91F380, ___hasStarted_5)); }
	inline bool get_hasStarted_5() const { return ___hasStarted_5; }
	inline bool* get_address_of_hasStarted_5() { return &___hasStarted_5; }
	inline void set_hasStarted_5(bool value)
	{
		___hasStarted_5 = value;
	}
};


// ButtonController
struct  ButtonController_t0D27B81A3DC32EC27023C3CD654D850B38C7F1C7  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.SpriteRenderer ButtonController::an_SR
	SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * ___an_SR_4;
	// UnityEngine.Sprite ButtonController::defImage
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___defImage_5;
	// UnityEngine.Sprite ButtonController::pressedImage
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___pressedImage_6;
	// UnityEngine.KeyCode ButtonController::keytoPress
	int32_t ___keytoPress_7;

public:
	inline static int32_t get_offset_of_an_SR_4() { return static_cast<int32_t>(offsetof(ButtonController_t0D27B81A3DC32EC27023C3CD654D850B38C7F1C7, ___an_SR_4)); }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * get_an_SR_4() const { return ___an_SR_4; }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF ** get_address_of_an_SR_4() { return &___an_SR_4; }
	inline void set_an_SR_4(SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * value)
	{
		___an_SR_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___an_SR_4), (void*)value);
	}

	inline static int32_t get_offset_of_defImage_5() { return static_cast<int32_t>(offsetof(ButtonController_t0D27B81A3DC32EC27023C3CD654D850B38C7F1C7, ___defImage_5)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_defImage_5() const { return ___defImage_5; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_defImage_5() { return &___defImage_5; }
	inline void set_defImage_5(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___defImage_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defImage_5), (void*)value);
	}

	inline static int32_t get_offset_of_pressedImage_6() { return static_cast<int32_t>(offsetof(ButtonController_t0D27B81A3DC32EC27023C3CD654D850B38C7F1C7, ___pressedImage_6)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_pressedImage_6() const { return ___pressedImage_6; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_pressedImage_6() { return &___pressedImage_6; }
	inline void set_pressedImage_6(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___pressedImage_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pressedImage_6), (void*)value);
	}

	inline static int32_t get_offset_of_keytoPress_7() { return static_cast<int32_t>(offsetof(ButtonController_t0D27B81A3DC32EC27023C3CD654D850B38C7F1C7, ___keytoPress_7)); }
	inline int32_t get_keytoPress_7() const { return ___keytoPress_7; }
	inline int32_t* get_address_of_keytoPress_7() { return &___keytoPress_7; }
	inline void set_keytoPress_7(int32_t value)
	{
		___keytoPress_7 = value;
	}
};


// DemoScript
struct  DemoScript_t035174A3DB2A2A84B0052CF0F69798314D2232D8  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// Melanchall.DryWetMidi.Multimedia.OutputDevice DemoScript::_outputDevice
	OutputDevice_t7A9B57531DCA6BF309413A7FACE2F48E261EC9BB * ____outputDevice_5;
	// Melanchall.DryWetMidi.Multimedia.Playback DemoScript::_playback
	Playback_t57195DC933DF811AF3EF953E136F4B9610C70D3A * ____playback_6;

public:
	inline static int32_t get_offset_of__outputDevice_5() { return static_cast<int32_t>(offsetof(DemoScript_t035174A3DB2A2A84B0052CF0F69798314D2232D8, ____outputDevice_5)); }
	inline OutputDevice_t7A9B57531DCA6BF309413A7FACE2F48E261EC9BB * get__outputDevice_5() const { return ____outputDevice_5; }
	inline OutputDevice_t7A9B57531DCA6BF309413A7FACE2F48E261EC9BB ** get_address_of__outputDevice_5() { return &____outputDevice_5; }
	inline void set__outputDevice_5(OutputDevice_t7A9B57531DCA6BF309413A7FACE2F48E261EC9BB * value)
	{
		____outputDevice_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____outputDevice_5), (void*)value);
	}

	inline static int32_t get_offset_of__playback_6() { return static_cast<int32_t>(offsetof(DemoScript_t035174A3DB2A2A84B0052CF0F69798314D2232D8, ____playback_6)); }
	inline Playback_t57195DC933DF811AF3EF953E136F4B9610C70D3A * get__playback_6() const { return ____playback_6; }
	inline Playback_t57195DC933DF811AF3EF953E136F4B9610C70D3A ** get_address_of__playback_6() { return &____playback_6; }
	inline void set__playback_6(Playback_t57195DC933DF811AF3EF953E136F4B9610C70D3A * value)
	{
		____playback_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____playback_6), (void*)value);
	}
};


// EffectObject
struct  EffectObject_t256C948AF9F8DB1A316D25FB9B8BAE64FD1B3C1C  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single EffectObject::lifetime
	float ___lifetime_4;

public:
	inline static int32_t get_offset_of_lifetime_4() { return static_cast<int32_t>(offsetof(EffectObject_t256C948AF9F8DB1A316D25FB9B8BAE64FD1B3C1C, ___lifetime_4)); }
	inline float get_lifetime_4() const { return ___lifetime_4; }
	inline float* get_address_of_lifetime_4() { return &___lifetime_4; }
	inline void set_lifetime_4(float value)
	{
		___lifetime_4 = value;
	}
};


// GameManager
struct  GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Boolean GameManager::startPlaying
	bool ___startPlaying_4;
	// BeatScroller GameManager::mBeatScroller
	BeatScroller_t6BF3F88E6125A8C8789A3610E3EFEA29CA91F380 * ___mBeatScroller_5;
	// System.Int32 GameManager::currentScore
	int32_t ___currentScore_7;
	// System.Int32 GameManager::scorePerNote
	int32_t ___scorePerNote_8;
	// System.Int32 GameManager::scorePerPerfectNote
	int32_t ___scorePerPerfectNote_9;
	// System.Int32 GameManager::currentMulti
	int32_t ___currentMulti_10;
	// System.Int32 GameManager::multiTracker
	int32_t ___multiTracker_11;
	// System.Int32[] GameManager::multiThreshold
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___multiThreshold_12;
	// UnityEngine.UI.Text GameManager::scoreText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___scoreText_13;
	// UnityEngine.UI.Text GameManager::multiText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___multiText_14;
	// UnityEngine.AudioSource GameManager::music
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___music_15;

public:
	inline static int32_t get_offset_of_startPlaying_4() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___startPlaying_4)); }
	inline bool get_startPlaying_4() const { return ___startPlaying_4; }
	inline bool* get_address_of_startPlaying_4() { return &___startPlaying_4; }
	inline void set_startPlaying_4(bool value)
	{
		___startPlaying_4 = value;
	}

	inline static int32_t get_offset_of_mBeatScroller_5() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___mBeatScroller_5)); }
	inline BeatScroller_t6BF3F88E6125A8C8789A3610E3EFEA29CA91F380 * get_mBeatScroller_5() const { return ___mBeatScroller_5; }
	inline BeatScroller_t6BF3F88E6125A8C8789A3610E3EFEA29CA91F380 ** get_address_of_mBeatScroller_5() { return &___mBeatScroller_5; }
	inline void set_mBeatScroller_5(BeatScroller_t6BF3F88E6125A8C8789A3610E3EFEA29CA91F380 * value)
	{
		___mBeatScroller_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mBeatScroller_5), (void*)value);
	}

	inline static int32_t get_offset_of_currentScore_7() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___currentScore_7)); }
	inline int32_t get_currentScore_7() const { return ___currentScore_7; }
	inline int32_t* get_address_of_currentScore_7() { return &___currentScore_7; }
	inline void set_currentScore_7(int32_t value)
	{
		___currentScore_7 = value;
	}

	inline static int32_t get_offset_of_scorePerNote_8() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___scorePerNote_8)); }
	inline int32_t get_scorePerNote_8() const { return ___scorePerNote_8; }
	inline int32_t* get_address_of_scorePerNote_8() { return &___scorePerNote_8; }
	inline void set_scorePerNote_8(int32_t value)
	{
		___scorePerNote_8 = value;
	}

	inline static int32_t get_offset_of_scorePerPerfectNote_9() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___scorePerPerfectNote_9)); }
	inline int32_t get_scorePerPerfectNote_9() const { return ___scorePerPerfectNote_9; }
	inline int32_t* get_address_of_scorePerPerfectNote_9() { return &___scorePerPerfectNote_9; }
	inline void set_scorePerPerfectNote_9(int32_t value)
	{
		___scorePerPerfectNote_9 = value;
	}

	inline static int32_t get_offset_of_currentMulti_10() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___currentMulti_10)); }
	inline int32_t get_currentMulti_10() const { return ___currentMulti_10; }
	inline int32_t* get_address_of_currentMulti_10() { return &___currentMulti_10; }
	inline void set_currentMulti_10(int32_t value)
	{
		___currentMulti_10 = value;
	}

	inline static int32_t get_offset_of_multiTracker_11() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___multiTracker_11)); }
	inline int32_t get_multiTracker_11() const { return ___multiTracker_11; }
	inline int32_t* get_address_of_multiTracker_11() { return &___multiTracker_11; }
	inline void set_multiTracker_11(int32_t value)
	{
		___multiTracker_11 = value;
	}

	inline static int32_t get_offset_of_multiThreshold_12() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___multiThreshold_12)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_multiThreshold_12() const { return ___multiThreshold_12; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_multiThreshold_12() { return &___multiThreshold_12; }
	inline void set_multiThreshold_12(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___multiThreshold_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___multiThreshold_12), (void*)value);
	}

	inline static int32_t get_offset_of_scoreText_13() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___scoreText_13)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_scoreText_13() const { return ___scoreText_13; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_scoreText_13() { return &___scoreText_13; }
	inline void set_scoreText_13(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___scoreText_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___scoreText_13), (void*)value);
	}

	inline static int32_t get_offset_of_multiText_14() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___multiText_14)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_multiText_14() const { return ___multiText_14; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_multiText_14() { return &___multiText_14; }
	inline void set_multiText_14(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___multiText_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___multiText_14), (void*)value);
	}

	inline static int32_t get_offset_of_music_15() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___music_15)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get_music_15() const { return ___music_15; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of_music_15() { return &___music_15; }
	inline void set_music_15(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		___music_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___music_15), (void*)value);
	}
};

struct GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields
{
public:
	// GameManager GameManager::instance
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * ___instance_6;

public:
	inline static int32_t get_offset_of_instance_6() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields, ___instance_6)); }
	inline GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * get_instance_6() const { return ___instance_6; }
	inline GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 ** get_address_of_instance_6() { return &___instance_6; }
	inline void set_instance_6(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * value)
	{
		___instance_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instance_6), (void*)value);
	}
};


// InvertCreator
struct  InvertCreator_t73F06C8608898BB962DB7AFF980F9AA9630506FA  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single InvertCreator::maxTimer
	float ___maxTimer_4;
	// System.Single InvertCreator::maxSize
	float ___maxSize_5;
	// System.Single InvertCreator::currentSize
	float ___currentSize_6;
	// System.Int32 InvertCreator::startTime
	int32_t ___startTime_7;
	// UnityEngine.RectTransform InvertCreator::rT
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___rT_8;
	// System.Boolean InvertCreator::delayEnd
	bool ___delayEnd_9;
	// System.Single InvertCreator::timer
	float ___timer_10;

public:
	inline static int32_t get_offset_of_maxTimer_4() { return static_cast<int32_t>(offsetof(InvertCreator_t73F06C8608898BB962DB7AFF980F9AA9630506FA, ___maxTimer_4)); }
	inline float get_maxTimer_4() const { return ___maxTimer_4; }
	inline float* get_address_of_maxTimer_4() { return &___maxTimer_4; }
	inline void set_maxTimer_4(float value)
	{
		___maxTimer_4 = value;
	}

	inline static int32_t get_offset_of_maxSize_5() { return static_cast<int32_t>(offsetof(InvertCreator_t73F06C8608898BB962DB7AFF980F9AA9630506FA, ___maxSize_5)); }
	inline float get_maxSize_5() const { return ___maxSize_5; }
	inline float* get_address_of_maxSize_5() { return &___maxSize_5; }
	inline void set_maxSize_5(float value)
	{
		___maxSize_5 = value;
	}

	inline static int32_t get_offset_of_currentSize_6() { return static_cast<int32_t>(offsetof(InvertCreator_t73F06C8608898BB962DB7AFF980F9AA9630506FA, ___currentSize_6)); }
	inline float get_currentSize_6() const { return ___currentSize_6; }
	inline float* get_address_of_currentSize_6() { return &___currentSize_6; }
	inline void set_currentSize_6(float value)
	{
		___currentSize_6 = value;
	}

	inline static int32_t get_offset_of_startTime_7() { return static_cast<int32_t>(offsetof(InvertCreator_t73F06C8608898BB962DB7AFF980F9AA9630506FA, ___startTime_7)); }
	inline int32_t get_startTime_7() const { return ___startTime_7; }
	inline int32_t* get_address_of_startTime_7() { return &___startTime_7; }
	inline void set_startTime_7(int32_t value)
	{
		___startTime_7 = value;
	}

	inline static int32_t get_offset_of_rT_8() { return static_cast<int32_t>(offsetof(InvertCreator_t73F06C8608898BB962DB7AFF980F9AA9630506FA, ___rT_8)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_rT_8() const { return ___rT_8; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_rT_8() { return &___rT_8; }
	inline void set_rT_8(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___rT_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rT_8), (void*)value);
	}

	inline static int32_t get_offset_of_delayEnd_9() { return static_cast<int32_t>(offsetof(InvertCreator_t73F06C8608898BB962DB7AFF980F9AA9630506FA, ___delayEnd_9)); }
	inline bool get_delayEnd_9() const { return ___delayEnd_9; }
	inline bool* get_address_of_delayEnd_9() { return &___delayEnd_9; }
	inline void set_delayEnd_9(bool value)
	{
		___delayEnd_9 = value;
	}

	inline static int32_t get_offset_of_timer_10() { return static_cast<int32_t>(offsetof(InvertCreator_t73F06C8608898BB962DB7AFF980F9AA9630506FA, ___timer_10)); }
	inline float get_timer_10() const { return ___timer_10; }
	inline float* get_address_of_timer_10() { return &___timer_10; }
	inline void set_timer_10(float value)
	{
		___timer_10 = value;
	}
};


// Lane
struct  Lane_t286B164399771EA0ED4119258145C46B5AFBD3CF  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// Melanchall.DryWetMidi.MusicTheory.NoteName Lane::noteRestriction
	int32_t ___noteRestriction_4;
	// UnityEngine.KeyCode Lane::input
	int32_t ___input_5;
	// UnityEngine.GameObject[] Lane::notePrefab
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___notePrefab_6;
	// System.Collections.Generic.List`1<NoteObject> Lane::notes
	List_1_t30C93A65DA86A6C517E439B0040B2AE67DE85112 * ___notes_7;
	// System.Collections.Generic.List`1<System.Double> Lane::timeStamps
	List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC * ___timeStamps_8;
	// UnityEngine.GameObject Lane::hitEffect
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___hitEffect_9;
	// UnityEngine.GameObject Lane::missEffect
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___missEffect_10;
	// System.Int32 Lane::spawnIndex
	int32_t ___spawnIndex_11;
	// System.Int32 Lane::inputIndex
	int32_t ___inputIndex_12;
	// System.Int32 Lane::option
	int32_t ___option_13;

public:
	inline static int32_t get_offset_of_noteRestriction_4() { return static_cast<int32_t>(offsetof(Lane_t286B164399771EA0ED4119258145C46B5AFBD3CF, ___noteRestriction_4)); }
	inline int32_t get_noteRestriction_4() const { return ___noteRestriction_4; }
	inline int32_t* get_address_of_noteRestriction_4() { return &___noteRestriction_4; }
	inline void set_noteRestriction_4(int32_t value)
	{
		___noteRestriction_4 = value;
	}

	inline static int32_t get_offset_of_input_5() { return static_cast<int32_t>(offsetof(Lane_t286B164399771EA0ED4119258145C46B5AFBD3CF, ___input_5)); }
	inline int32_t get_input_5() const { return ___input_5; }
	inline int32_t* get_address_of_input_5() { return &___input_5; }
	inline void set_input_5(int32_t value)
	{
		___input_5 = value;
	}

	inline static int32_t get_offset_of_notePrefab_6() { return static_cast<int32_t>(offsetof(Lane_t286B164399771EA0ED4119258145C46B5AFBD3CF, ___notePrefab_6)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_notePrefab_6() const { return ___notePrefab_6; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_notePrefab_6() { return &___notePrefab_6; }
	inline void set_notePrefab_6(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___notePrefab_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___notePrefab_6), (void*)value);
	}

	inline static int32_t get_offset_of_notes_7() { return static_cast<int32_t>(offsetof(Lane_t286B164399771EA0ED4119258145C46B5AFBD3CF, ___notes_7)); }
	inline List_1_t30C93A65DA86A6C517E439B0040B2AE67DE85112 * get_notes_7() const { return ___notes_7; }
	inline List_1_t30C93A65DA86A6C517E439B0040B2AE67DE85112 ** get_address_of_notes_7() { return &___notes_7; }
	inline void set_notes_7(List_1_t30C93A65DA86A6C517E439B0040B2AE67DE85112 * value)
	{
		___notes_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___notes_7), (void*)value);
	}

	inline static int32_t get_offset_of_timeStamps_8() { return static_cast<int32_t>(offsetof(Lane_t286B164399771EA0ED4119258145C46B5AFBD3CF, ___timeStamps_8)); }
	inline List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC * get_timeStamps_8() const { return ___timeStamps_8; }
	inline List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC ** get_address_of_timeStamps_8() { return &___timeStamps_8; }
	inline void set_timeStamps_8(List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC * value)
	{
		___timeStamps_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___timeStamps_8), (void*)value);
	}

	inline static int32_t get_offset_of_hitEffect_9() { return static_cast<int32_t>(offsetof(Lane_t286B164399771EA0ED4119258145C46B5AFBD3CF, ___hitEffect_9)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_hitEffect_9() const { return ___hitEffect_9; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_hitEffect_9() { return &___hitEffect_9; }
	inline void set_hitEffect_9(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___hitEffect_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hitEffect_9), (void*)value);
	}

	inline static int32_t get_offset_of_missEffect_10() { return static_cast<int32_t>(offsetof(Lane_t286B164399771EA0ED4119258145C46B5AFBD3CF, ___missEffect_10)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_missEffect_10() const { return ___missEffect_10; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_missEffect_10() { return &___missEffect_10; }
	inline void set_missEffect_10(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___missEffect_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___missEffect_10), (void*)value);
	}

	inline static int32_t get_offset_of_spawnIndex_11() { return static_cast<int32_t>(offsetof(Lane_t286B164399771EA0ED4119258145C46B5AFBD3CF, ___spawnIndex_11)); }
	inline int32_t get_spawnIndex_11() const { return ___spawnIndex_11; }
	inline int32_t* get_address_of_spawnIndex_11() { return &___spawnIndex_11; }
	inline void set_spawnIndex_11(int32_t value)
	{
		___spawnIndex_11 = value;
	}

	inline static int32_t get_offset_of_inputIndex_12() { return static_cast<int32_t>(offsetof(Lane_t286B164399771EA0ED4119258145C46B5AFBD3CF, ___inputIndex_12)); }
	inline int32_t get_inputIndex_12() const { return ___inputIndex_12; }
	inline int32_t* get_address_of_inputIndex_12() { return &___inputIndex_12; }
	inline void set_inputIndex_12(int32_t value)
	{
		___inputIndex_12 = value;
	}

	inline static int32_t get_offset_of_option_13() { return static_cast<int32_t>(offsetof(Lane_t286B164399771EA0ED4119258145C46B5AFBD3CF, ___option_13)); }
	inline int32_t get_option_13() const { return ___option_13; }
	inline int32_t* get_address_of_option_13() { return &___option_13; }
	inline void set_option_13(int32_t value)
	{
		___option_13 = value;
	}
};


// Menu
struct  Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// NoteObject
struct  NoteObject_tB227B82DE6D9050A93DC7A2F5A32C79C696F0973  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Double NoteObject::timeInstantiated
	double ___timeInstantiated_4;
	// System.Single NoteObject::assignedTime
	float ___assignedTime_5;
	// UnityEngine.SpriteRenderer NoteObject::sR
	SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * ___sR_6;
	// UnityEngine.Sprite NoteObject::inVis
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___inVis_7;

public:
	inline static int32_t get_offset_of_timeInstantiated_4() { return static_cast<int32_t>(offsetof(NoteObject_tB227B82DE6D9050A93DC7A2F5A32C79C696F0973, ___timeInstantiated_4)); }
	inline double get_timeInstantiated_4() const { return ___timeInstantiated_4; }
	inline double* get_address_of_timeInstantiated_4() { return &___timeInstantiated_4; }
	inline void set_timeInstantiated_4(double value)
	{
		___timeInstantiated_4 = value;
	}

	inline static int32_t get_offset_of_assignedTime_5() { return static_cast<int32_t>(offsetof(NoteObject_tB227B82DE6D9050A93DC7A2F5A32C79C696F0973, ___assignedTime_5)); }
	inline float get_assignedTime_5() const { return ___assignedTime_5; }
	inline float* get_address_of_assignedTime_5() { return &___assignedTime_5; }
	inline void set_assignedTime_5(float value)
	{
		___assignedTime_5 = value;
	}

	inline static int32_t get_offset_of_sR_6() { return static_cast<int32_t>(offsetof(NoteObject_tB227B82DE6D9050A93DC7A2F5A32C79C696F0973, ___sR_6)); }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * get_sR_6() const { return ___sR_6; }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF ** get_address_of_sR_6() { return &___sR_6; }
	inline void set_sR_6(SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * value)
	{
		___sR_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sR_6), (void*)value);
	}

	inline static int32_t get_offset_of_inVis_7() { return static_cast<int32_t>(offsetof(NoteObject_tB227B82DE6D9050A93DC7A2F5A32C79C696F0973, ___inVis_7)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_inVis_7() const { return ___inVis_7; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_inVis_7() { return &___inVis_7; }
	inline void set_inVis_7(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___inVis_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inVis_7), (void*)value);
	}
};


// ScoreManager
struct  ScoreManager_t52E31A532CA8B702090279B85180CF575D6FE113  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.AudioSource ScoreManager::hitSFX
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___hitSFX_5;

public:
	inline static int32_t get_offset_of_hitSFX_5() { return static_cast<int32_t>(offsetof(ScoreManager_t52E31A532CA8B702090279B85180CF575D6FE113, ___hitSFX_5)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get_hitSFX_5() const { return ___hitSFX_5; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of_hitSFX_5() { return &___hitSFX_5; }
	inline void set_hitSFX_5(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		___hitSFX_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hitSFX_5), (void*)value);
	}
};

struct ScoreManager_t52E31A532CA8B702090279B85180CF575D6FE113_StaticFields
{
public:
	// ScoreManager ScoreManager::Instance
	ScoreManager_t52E31A532CA8B702090279B85180CF575D6FE113 * ___Instance_4;
	// System.Int32 ScoreManager::comboScore
	int32_t ___comboScore_6;

public:
	inline static int32_t get_offset_of_Instance_4() { return static_cast<int32_t>(offsetof(ScoreManager_t52E31A532CA8B702090279B85180CF575D6FE113_StaticFields, ___Instance_4)); }
	inline ScoreManager_t52E31A532CA8B702090279B85180CF575D6FE113 * get_Instance_4() const { return ___Instance_4; }
	inline ScoreManager_t52E31A532CA8B702090279B85180CF575D6FE113 ** get_address_of_Instance_4() { return &___Instance_4; }
	inline void set_Instance_4(ScoreManager_t52E31A532CA8B702090279B85180CF575D6FE113 * value)
	{
		___Instance_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_4), (void*)value);
	}

	inline static int32_t get_offset_of_comboScore_6() { return static_cast<int32_t>(offsetof(ScoreManager_t52E31A532CA8B702090279B85180CF575D6FE113_StaticFields, ___comboScore_6)); }
	inline int32_t get_comboScore_6() const { return ___comboScore_6; }
	inline int32_t* get_address_of_comboScore_6() { return &___comboScore_6; }
	inline void set_comboScore_6(int32_t value)
	{
		___comboScore_6 = value;
	}
};


// SongManager
struct  SongManager_t0B58391B2DFB12045E717021CF4CF7EE474665A3  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.AudioSource SongManager::audioSource
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___audioSource_5;
	// Lane[] SongManager::lanes
	LaneU5BU5D_t0CF8D81AFD60F36B05B27E64BBBC911D131D4F35* ___lanes_6;
	// System.Single SongManager::songDelayInSeconds
	float ___songDelayInSeconds_7;
	// System.Double SongManager::marginOfError
	double ___marginOfError_8;
	// System.Int32 SongManager::inputDelayInMilliseconds
	int32_t ___inputDelayInMilliseconds_9;
	// System.String SongManager::fileLocation
	String_t* ___fileLocation_10;
	// System.Single SongManager::noteTime
	float ___noteTime_11;
	// System.Single SongManager::noteSpawnY
	float ___noteSpawnY_12;
	// System.Single SongManager::noteTapY
	float ___noteTapY_13;

public:
	inline static int32_t get_offset_of_audioSource_5() { return static_cast<int32_t>(offsetof(SongManager_t0B58391B2DFB12045E717021CF4CF7EE474665A3, ___audioSource_5)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get_audioSource_5() const { return ___audioSource_5; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of_audioSource_5() { return &___audioSource_5; }
	inline void set_audioSource_5(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		___audioSource_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___audioSource_5), (void*)value);
	}

	inline static int32_t get_offset_of_lanes_6() { return static_cast<int32_t>(offsetof(SongManager_t0B58391B2DFB12045E717021CF4CF7EE474665A3, ___lanes_6)); }
	inline LaneU5BU5D_t0CF8D81AFD60F36B05B27E64BBBC911D131D4F35* get_lanes_6() const { return ___lanes_6; }
	inline LaneU5BU5D_t0CF8D81AFD60F36B05B27E64BBBC911D131D4F35** get_address_of_lanes_6() { return &___lanes_6; }
	inline void set_lanes_6(LaneU5BU5D_t0CF8D81AFD60F36B05B27E64BBBC911D131D4F35* value)
	{
		___lanes_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lanes_6), (void*)value);
	}

	inline static int32_t get_offset_of_songDelayInSeconds_7() { return static_cast<int32_t>(offsetof(SongManager_t0B58391B2DFB12045E717021CF4CF7EE474665A3, ___songDelayInSeconds_7)); }
	inline float get_songDelayInSeconds_7() const { return ___songDelayInSeconds_7; }
	inline float* get_address_of_songDelayInSeconds_7() { return &___songDelayInSeconds_7; }
	inline void set_songDelayInSeconds_7(float value)
	{
		___songDelayInSeconds_7 = value;
	}

	inline static int32_t get_offset_of_marginOfError_8() { return static_cast<int32_t>(offsetof(SongManager_t0B58391B2DFB12045E717021CF4CF7EE474665A3, ___marginOfError_8)); }
	inline double get_marginOfError_8() const { return ___marginOfError_8; }
	inline double* get_address_of_marginOfError_8() { return &___marginOfError_8; }
	inline void set_marginOfError_8(double value)
	{
		___marginOfError_8 = value;
	}

	inline static int32_t get_offset_of_inputDelayInMilliseconds_9() { return static_cast<int32_t>(offsetof(SongManager_t0B58391B2DFB12045E717021CF4CF7EE474665A3, ___inputDelayInMilliseconds_9)); }
	inline int32_t get_inputDelayInMilliseconds_9() const { return ___inputDelayInMilliseconds_9; }
	inline int32_t* get_address_of_inputDelayInMilliseconds_9() { return &___inputDelayInMilliseconds_9; }
	inline void set_inputDelayInMilliseconds_9(int32_t value)
	{
		___inputDelayInMilliseconds_9 = value;
	}

	inline static int32_t get_offset_of_fileLocation_10() { return static_cast<int32_t>(offsetof(SongManager_t0B58391B2DFB12045E717021CF4CF7EE474665A3, ___fileLocation_10)); }
	inline String_t* get_fileLocation_10() const { return ___fileLocation_10; }
	inline String_t** get_address_of_fileLocation_10() { return &___fileLocation_10; }
	inline void set_fileLocation_10(String_t* value)
	{
		___fileLocation_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fileLocation_10), (void*)value);
	}

	inline static int32_t get_offset_of_noteTime_11() { return static_cast<int32_t>(offsetof(SongManager_t0B58391B2DFB12045E717021CF4CF7EE474665A3, ___noteTime_11)); }
	inline float get_noteTime_11() const { return ___noteTime_11; }
	inline float* get_address_of_noteTime_11() { return &___noteTime_11; }
	inline void set_noteTime_11(float value)
	{
		___noteTime_11 = value;
	}

	inline static int32_t get_offset_of_noteSpawnY_12() { return static_cast<int32_t>(offsetof(SongManager_t0B58391B2DFB12045E717021CF4CF7EE474665A3, ___noteSpawnY_12)); }
	inline float get_noteSpawnY_12() const { return ___noteSpawnY_12; }
	inline float* get_address_of_noteSpawnY_12() { return &___noteSpawnY_12; }
	inline void set_noteSpawnY_12(float value)
	{
		___noteSpawnY_12 = value;
	}

	inline static int32_t get_offset_of_noteTapY_13() { return static_cast<int32_t>(offsetof(SongManager_t0B58391B2DFB12045E717021CF4CF7EE474665A3, ___noteTapY_13)); }
	inline float get_noteTapY_13() const { return ___noteTapY_13; }
	inline float* get_address_of_noteTapY_13() { return &___noteTapY_13; }
	inline void set_noteTapY_13(float value)
	{
		___noteTapY_13 = value;
	}
};

struct SongManager_t0B58391B2DFB12045E717021CF4CF7EE474665A3_StaticFields
{
public:
	// SongManager SongManager::Instance
	SongManager_t0B58391B2DFB12045E717021CF4CF7EE474665A3 * ___Instance_4;
	// Melanchall.DryWetMidi.Core.MidiFile SongManager::midiFile
	MidiFile_t00456CC0D22B31D61780718A31F002EFC5082774 * ___midiFile_14;

public:
	inline static int32_t get_offset_of_Instance_4() { return static_cast<int32_t>(offsetof(SongManager_t0B58391B2DFB12045E717021CF4CF7EE474665A3_StaticFields, ___Instance_4)); }
	inline SongManager_t0B58391B2DFB12045E717021CF4CF7EE474665A3 * get_Instance_4() const { return ___Instance_4; }
	inline SongManager_t0B58391B2DFB12045E717021CF4CF7EE474665A3 ** get_address_of_Instance_4() { return &___Instance_4; }
	inline void set_Instance_4(SongManager_t0B58391B2DFB12045E717021CF4CF7EE474665A3 * value)
	{
		___Instance_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_4), (void*)value);
	}

	inline static int32_t get_offset_of_midiFile_14() { return static_cast<int32_t>(offsetof(SongManager_t0B58391B2DFB12045E717021CF4CF7EE474665A3_StaticFields, ___midiFile_14)); }
	inline MidiFile_t00456CC0D22B31D61780718A31F002EFC5082774 * get_midiFile_14() const { return ___midiFile_14; }
	inline MidiFile_t00456CC0D22B31D61780718A31F002EFC5082774 ** get_address_of_midiFile_14() { return &___midiFile_14; }
	inline void set_midiFile_14(MidiFile_t00456CC0D22B31D61780718A31F002EFC5082774 * value)
	{
		___midiFile_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___midiFile_14), (void*)value);
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct  UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// WallScript
struct  WallScript_t36D3BD898C2E4F038846DC27F799DD591852A7B9  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single WallScript::speed
	float ___speed_4;

public:
	inline static int32_t get_offset_of_speed_4() { return static_cast<int32_t>(offsetof(WallScript_t36D3BD898C2E4F038846DC27F799DD591852A7B9, ___speed_4)); }
	inline float get_speed_4() const { return ___speed_4; }
	inline float* get_address_of_speed_4() { return &___speed_4; }
	inline void set_speed_4(float value)
	{
		___speed_4 = value;
	}
};


// UnityEngine.UI.Graphic
struct  Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
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


// UnityEngine.UI.MaskableGraphic
struct  MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE  : public Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24
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
struct  Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
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
// Melanchall.DryWetMidi.Common.SevenBitNumber[]
struct SevenBitNumberU5BU5D_t7637700F96F6887FA1C000837321021B7902B396  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) SevenBitNumber_t9D9AA0CA6CF9F4FD2896F25C6CBF7769F0D8B6A8  m_Items[1];

public:
	inline SevenBitNumber_t9D9AA0CA6CF9F4FD2896F25C6CBF7769F0D8B6A8  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SevenBitNumber_t9D9AA0CA6CF9F4FD2896F25C6CBF7769F0D8B6A8 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SevenBitNumber_t9D9AA0CA6CF9F4FD2896F25C6CBF7769F0D8B6A8  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline SevenBitNumber_t9D9AA0CA6CF9F4FD2896F25C6CBF7769F0D8B6A8  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SevenBitNumber_t9D9AA0CA6CF9F4FD2896F25C6CBF7769F0D8B6A8 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SevenBitNumber_t9D9AA0CA6CF9F4FD2896F25C6CBF7769F0D8B6A8  value)
	{
		m_Items[index] = value;
	}
};
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// Melanchall.DryWetMidi.Interaction.Note[]
struct NoteU5BU5D_tCBBDF8452DE17E526D80118C9E6926262C9BD7E9  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Note_t72FA32C1F792DB6998277D23822C6FBBF619808C * m_Items[1];

public:
	inline Note_t72FA32C1F792DB6998277D23822C6FBBF619808C * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Note_t72FA32C1F792DB6998277D23822C6FBBF619808C ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Note_t72FA32C1F792DB6998277D23822C6FBBF619808C * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Note_t72FA32C1F792DB6998277D23822C6FBBF619808C * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Note_t72FA32C1F792DB6998277D23822C6FBBF619808C ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Note_t72FA32C1F792DB6998277D23822C6FBBF619808C * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * m_Items[1];

public:
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Lane[]
struct LaneU5BU5D_t0CF8D81AFD60F36B05B27E64BBBC911D131D4F35  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Lane_t286B164399771EA0ED4119258145C46B5AFBD3CF * m_Items[1];

public:
	inline Lane_t286B164399771EA0ED4119258145C46B5AFBD3CF * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Lane_t286B164399771EA0ED4119258145C46B5AFBD3CF ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Lane_t286B164399771EA0ED4119258145C46B5AFBD3CF * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Lane_t286B164399771EA0ED4119258145C46B5AFBD3CF * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Lane_t286B164399771EA0ED4119258145C46B5AFBD3CF ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Lane_t286B164399771EA0ED4119258145C46B5AFBD3CF * value)
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
// System.Double[]
struct DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) double m_Items[1];

public:
	inline double GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline double* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, double value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline double GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline double* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, double value)
	{
		m_Items[index] = value;
	}
};
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


// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void System.EventHandler`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventHandler_1__ctor_m55B15D6747B269625FC10375E6008AA99BD498B4_gshared (EventHandler_1_tFA1C30E54FA1061D79E711F65F9A174BFBD8CDCB * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Func`2<System.Object,System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_mCA84157864A199574AD0B7F3083F99B54DC1F98C_gshared (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Boolean System.Linq.Enumerable::Any<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerable_Any_TisRuntimeObject_m79E5BEA29E663B44BB9C1BDD62286D214D22E600_gshared (RuntimeObject* ___source0, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate1, const RuntimeMethod* method);
// System.Void System.Func`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_mA7F3C5A0612B84E910DE92E77BA95101FD68EEDB_gshared (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!1> System.Linq.Enumerable::Select<System.Object,System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Select_TisRuntimeObject_TisRuntimeObject_mC0F1DA980E0433D70A6CF9DD7CD1942BB7FE87C0_gshared (RuntimeObject* ___source0, Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * ___selector1, const RuntimeMethod* method);
// !!0 Melanchall.DryWetMidi.Interaction.TimeConverter::ConvertTo<System.Object>(System.Int64,Melanchall.DryWetMidi.Interaction.TempoMap)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * TimeConverter_ConvertTo_TisRuntimeObject_m16EE1383D5586CE3E2A1C811464CE7A6BA03FCAC_gshared (int64_t ___time0, TempoMap_t2C66560BA5D33AACE8AB672141C4228C04142D5A * ___tempoMap1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Double>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m56E93B74F5254C198272F09C8E4B09483184B929_gshared (List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC * __this, double ___item0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Double>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mC1A91036A8488F4B39DA566C71D9631B796DCBE2_gshared_inline (List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Double>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double List_1_get_Item_m31A9E37299AA6C7637D3CB1E55556B22883D2A06_gshared_inline (List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC * __this, int32_t ___index0, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_mD211EB15E9E128684605B4CC7277F10840F8E8CF_gshared (RuntimeObject * ___original0, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___parent1, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_m4039C8E65629D33E1EC84D2505BF1D5DDC936622_gshared (RuntimeObject * ___original0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Double>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mA0CE4C11D163EF853E9E6A0FD3C75486EF3A0F31_gshared (List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_mB05DEC51C29EF5BB8BD17D055E80217F11E571AA_gshared (RuntimeObject * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method);

// System.Collections.IEnumerator BackgroundMover::WallSpawn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BackgroundMover_WallSpawn_mEE2E9B936BF318D7C5D656E9DC43B2FB18AF4023 (BackgroundMover_tCB967D07193551E3830EBA987419287E3598C848 * __this, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, RuntimeObject* ___routine0, const RuntimeMethod* method);
// System.Void BackgroundMover/<WallSpawn>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWallSpawnU3Ed__6__ctor_m0F2481D9D9A2286B867A899EAD364E261A9E4392 (U3CWallSpawnU3Ed__6_tAF3991F444558EB25A917E5E64C0654A3288B8C3 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290 (const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.SpriteRenderer>()
inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220 (int32_t ___key0, const RuntimeMethod* method);
// System.Void UnityEngine.SpriteRenderer::set_sprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteRenderer_set_sprite_mBCFFBF3F10C068FD1174C4506DF73E204303FC1A (SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * __this, Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetKeyUp(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyUp_mDE9D56FE11715566D4D54FD96F8E1EF9734D225F (int32_t ___key0, const RuntimeMethod* method);
// System.Void DemoScript::InitializeOutputDevice()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoScript_InitializeOutputDevice_m53113E27B64479CDA88B3A9D806AA335E096D391 (DemoScript_t035174A3DB2A2A84B0052CF0F69798314D2232D8 * __this, const RuntimeMethod* method);
// Melanchall.DryWetMidi.Core.MidiFile DemoScript::CreateTestFile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MidiFile_t00456CC0D22B31D61780718A31F002EFC5082774 * DemoScript_CreateTestFile_mB2B88DCA2B5E4FBA8AEAB3A2552D2413E5E8A51F (DemoScript_t035174A3DB2A2A84B0052CF0F69798314D2232D8 * __this, const RuntimeMethod* method);
// System.Void DemoScript::InitializeFilePlayback(Melanchall.DryWetMidi.Core.MidiFile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoScript_InitializeFilePlayback_mA334B5FE949D5C991735B99D52408E9FB89357DD (DemoScript_t035174A3DB2A2A84B0052CF0F69798314D2232D8 * __this, MidiFile_t00456CC0D22B31D61780718A31F002EFC5082774 * ___midiFile0, const RuntimeMethod* method);
// System.Void DemoScript::StartPlayback()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoScript_StartPlayback_m0A3750E637070DF7F478FE278D72DF8F492B11C7 (DemoScript_t035174A3DB2A2A84B0052CF0F69798314D2232D8 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void System.EventHandler`1<Melanchall.DryWetMidi.Multimedia.NotesEventArgs>::.ctor(System.Object,System.IntPtr)
inline void EventHandler_1__ctor_m0DFCF20BA5A90DC393BC8D21FA5D77CEE8E99AE8 (EventHandler_1_tD53285C13B6974AAACBA9FD9151014AF05E01516 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_tD53285C13B6974AAACBA9FD9151014AF05E01516 *, RuntimeObject *, intptr_t, const RuntimeMethod*))EventHandler_1__ctor_m55B15D6747B269625FC10375E6008AA99BD498B4_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Melanchall.DryWetMidi.Multimedia.Playback::remove_NotesPlaybackStarted(System.EventHandler`1<Melanchall.DryWetMidi.Multimedia.NotesEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Playback_remove_NotesPlaybackStarted_m3AEC4B40BDE797EA89BDEEC685627401A74034F5 (Playback_t57195DC933DF811AF3EF953E136F4B9610C70D3A * __this, EventHandler_1_tD53285C13B6974AAACBA9FD9151014AF05E01516 * ___value0, const RuntimeMethod* method);
// System.Void Melanchall.DryWetMidi.Multimedia.Playback::remove_NotesPlaybackFinished(System.EventHandler`1<Melanchall.DryWetMidi.Multimedia.NotesEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Playback_remove_NotesPlaybackFinished_mD631E539867F53BD4D06CD0356457FF00FA42D08 (Playback_t57195DC933DF811AF3EF953E136F4B9610C70D3A * __this, EventHandler_1_tD53285C13B6974AAACBA9FD9151014AF05E01516 * ___value0, const RuntimeMethod* method);
// System.Void Melanchall.DryWetMidi.Multimedia.Playback::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Playback_Dispose_mDB255B751EC037F8A6CD111BB84E12A5FDB8BFD4 (Playback_t57195DC933DF811AF3EF953E136F4B9610C70D3A * __this, const RuntimeMethod* method);
// System.Boolean Melanchall.DryWetMidi.Multimedia.OutputDevice::op_Inequality(Melanchall.DryWetMidi.Multimedia.OutputDevice,Melanchall.DryWetMidi.Multimedia.OutputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OutputDevice_op_Inequality_m7B8AFEF446322A31EC5B95B82E1650FD9C48AC5A (OutputDevice_t7A9B57531DCA6BF309413A7FACE2F48E261EC9BB * ___outputDevice10, OutputDevice_t7A9B57531DCA6BF309413A7FACE2F48E261EC9BB * ___outputDevice21, const RuntimeMethod* method);
// System.Void Melanchall.DryWetMidi.Multimedia.MidiDevice::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MidiDevice_Dispose_m0ECAF928559B006B67705C76F140B75652AF6EC9 (MidiDevice_t736FB1ED772DA5A9202017F93EB436B720EFDD83 * __this, const RuntimeMethod* method);
// System.Collections.Generic.ICollection`1<Melanchall.DryWetMidi.Multimedia.OutputDevice> Melanchall.DryWetMidi.Multimedia.OutputDevice::GetAll()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OutputDevice_GetAll_m92295B16185C892C37D7C82A1E8219DF0064D2D2 (const RuntimeMethod* method);
// System.Void System.Func`2<Melanchall.DryWetMidi.Multimedia.OutputDevice,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mE52FABCA369749DDF8A8FD5C61B7561CECF43DE4 (Func_2_t9C331FABBD6817E7209986DEE757FE09F192C16F * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t9C331FABBD6817E7209986DEE757FE09F192C16F *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_mCA84157864A199574AD0B7F3083F99B54DC1F98C_gshared)(__this, ___object0, ___method1, method);
}
// System.Boolean System.Linq.Enumerable::Any<Melanchall.DryWetMidi.Multimedia.OutputDevice>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Boolean>)
inline bool Enumerable_Any_TisOutputDevice_t7A9B57531DCA6BF309413A7FACE2F48E261EC9BB_m3674EE89D4345AB5E8518E585D07F10E134C4FFE (RuntimeObject* ___source0, Func_2_t9C331FABBD6817E7209986DEE757FE09F192C16F * ___predicate1, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, Func_2_t9C331FABBD6817E7209986DEE757FE09F192C16F *, const RuntimeMethod*))Enumerable_Any_TisRuntimeObject_m79E5BEA29E663B44BB9C1BDD62286D214D22E600_gshared)(___source0, ___predicate1, method);
}
// System.String System.Environment::get_NewLine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Environment_get_NewLine_mD145C8EE917C986BAA7C5243DEFAF4D333C521B4 (const RuntimeMethod* method);
// System.Void System.Func`2<Melanchall.DryWetMidi.Multimedia.OutputDevice,System.String>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m3F8FCF6FB04E43DC4FD8A36D1D69AECF686C9F64 (Func_2_t39D5366EA29875308A08408C95C8986F8229009D * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t39D5366EA29875308A08408C95C8986F8229009D *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_mA7F3C5A0612B84E910DE92E77BA95101FD68EEDB_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<!!1> System.Linq.Enumerable::Select<Melanchall.DryWetMidi.Multimedia.OutputDevice,System.String>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
inline RuntimeObject* Enumerable_Select_TisOutputDevice_t7A9B57531DCA6BF309413A7FACE2F48E261EC9BB_TisString_t_mE37921EB1BB2B54AD8B2EB7B2ED5499B05A42EF6 (RuntimeObject* ___source0, Func_2_t39D5366EA29875308A08408C95C8986F8229009D * ___selector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t39D5366EA29875308A08408C95C8986F8229009D *, const RuntimeMethod*))Enumerable_Select_TisRuntimeObject_TisRuntimeObject_mC0F1DA980E0433D70A6CF9DD7CD1942BB7FE87C0_gshared)(___source0, ___selector1, method);
}
// System.String System.String::Join(System.String,System.Collections.Generic.IEnumerable`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Join_m7E55204B5C94F9EB939D144E7EE684D016F90509 (String_t* ___separator0, RuntimeObject* ___values1, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// Melanchall.DryWetMidi.Multimedia.OutputDevice Melanchall.DryWetMidi.Multimedia.OutputDevice::GetByName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OutputDevice_t7A9B57531DCA6BF309413A7FACE2F48E261EC9BB * OutputDevice_GetByName_mE4068E08DB28876AD3CEE089E63A95C321F8C9DC (String_t* ___name0, const RuntimeMethod* method);
// System.Void Melanchall.DryWetMidi.Composing.PatternBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PatternBuilder__ctor_m145E6C37BF655C13EB55D2735B5202AB6CE7513C (PatternBuilder_t3C2CB526323390746CEDE3AD77A06AF96217496B * __this, const RuntimeMethod* method);
// Melanchall.DryWetMidi.Composing.PatternBuilder Melanchall.DryWetMidi.Composing.PatternBuilder::SetNoteLength(Melanchall.DryWetMidi.Interaction.ITimeSpan)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PatternBuilder_t3C2CB526323390746CEDE3AD77A06AF96217496B * PatternBuilder_SetNoteLength_m5C8B022E51495D3D0EAABF3B4C8A6B2A6B74C59C (PatternBuilder_t3C2CB526323390746CEDE3AD77A06AF96217496B * __this, RuntimeObject* ___length0, const RuntimeMethod* method);
// Melanchall.DryWetMidi.Composing.PatternBuilder Melanchall.DryWetMidi.Composing.PatternBuilder::SetVelocity(Melanchall.DryWetMidi.Common.SevenBitNumber)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PatternBuilder_t3C2CB526323390746CEDE3AD77A06AF96217496B * PatternBuilder_SetVelocity_m960DCE9AA90F5DB916B977D625CFA2A2274C784C (PatternBuilder_t3C2CB526323390746CEDE3AD77A06AF96217496B * __this, SevenBitNumber_t9D9AA0CA6CF9F4FD2896F25C6CBF7769F0D8B6A8  ___velocity0, const RuntimeMethod* method);
// Melanchall.DryWetMidi.Composing.PatternBuilder Melanchall.DryWetMidi.Composing.PatternBuilder::ProgramChange(Melanchall.DryWetMidi.Standards.GeneralMidiProgram)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PatternBuilder_t3C2CB526323390746CEDE3AD77A06AF96217496B * PatternBuilder_ProgramChange_mBCE5E9E079AD7BA3849E0539F12331FEFE2BE660 (PatternBuilder_t3C2CB526323390746CEDE3AD77A06AF96217496B * __this, uint8_t ___program0, const RuntimeMethod* method);
// Melanchall.DryWetMidi.MusicTheory.Note Melanchall.DryWetMidi.MusicTheory.Note::Get(Melanchall.DryWetMidi.Common.SevenBitNumber)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Note_t3D41F3AD2C3580F851A482C6559734126CAE4976 * Note_Get_m51087CE23C0A53BD57F1BD5F27BDB4327295BD06 (SevenBitNumber_t9D9AA0CA6CF9F4FD2896F25C6CBF7769F0D8B6A8  ___noteNumber0, const RuntimeMethod* method);
// Melanchall.DryWetMidi.Composing.PatternBuilder Melanchall.DryWetMidi.Composing.PatternBuilder::Note(Melanchall.DryWetMidi.MusicTheory.Note)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PatternBuilder_t3C2CB526323390746CEDE3AD77A06AF96217496B * PatternBuilder_Note_mAD4C277CB38340899E9F9F6C1AEE725244BE5FC6 (PatternBuilder_t3C2CB526323390746CEDE3AD77A06AF96217496B * __this, Note_t3D41F3AD2C3580F851A482C6559734126CAE4976 * ___note0, const RuntimeMethod* method);
// Melanchall.DryWetMidi.Composing.Pattern Melanchall.DryWetMidi.Composing.PatternBuilder::Build()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pattern_tB42554DBD9AF31288602637AFB2B7E8F53FC703A * PatternBuilder_Build_m6CE5B38189265FCCE56AB0079F211203C7203310 (PatternBuilder_t3C2CB526323390746CEDE3AD77A06AF96217496B * __this, const RuntimeMethod* method);
// Melanchall.DryWetMidi.Core.MidiFile Melanchall.DryWetMidi.Composing.Pattern::ToFile(Melanchall.DryWetMidi.Interaction.TempoMap)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MidiFile_t00456CC0D22B31D61780718A31F002EFC5082774 * Pattern_ToFile_m8030CBD7507AAAABE620CCC89EB4B088703A21F5 (Pattern_tB42554DBD9AF31288602637AFB2B7E8F53FC703A * __this, TempoMap_t2C66560BA5D33AACE8AB672141C4228C04142D5A * ___tempoMap0, const RuntimeMethod* method);
// Melanchall.DryWetMidi.Multimedia.Playback Melanchall.DryWetMidi.Multimedia.PlaybackUtilities::GetPlayback(Melanchall.DryWetMidi.Core.MidiFile,Melanchall.DryWetMidi.Multimedia.IOutputDevice,Melanchall.DryWetMidi.Multimedia.PlaybackSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Playback_t57195DC933DF811AF3EF953E136F4B9610C70D3A * PlaybackUtilities_GetPlayback_mA242856218F480C3C3B3A0839118CEEE23516FDB (MidiFile_t00456CC0D22B31D61780718A31F002EFC5082774 * ___midiFile0, RuntimeObject* ___outputDevice1, PlaybackSettings_tC075B746962B5D3073B0E0BC48BC4106C53C23C0 * ___playbackSettings2, const RuntimeMethod* method);
// System.Void Melanchall.DryWetMidi.Multimedia.Playback::set_Loop(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Playback_set_Loop_mF1C603EB64A9D4AAF140CD55822A230F018476CA_inline (Playback_t57195DC933DF811AF3EF953E136F4B9610C70D3A * __this, bool ___value0, const RuntimeMethod* method);
// System.Void Melanchall.DryWetMidi.Multimedia.Playback::add_NotesPlaybackStarted(System.EventHandler`1<Melanchall.DryWetMidi.Multimedia.NotesEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Playback_add_NotesPlaybackStarted_m46ED419B8C6BDF3B09258A2A3C2F8CEFD081719E (Playback_t57195DC933DF811AF3EF953E136F4B9610C70D3A * __this, EventHandler_1_tD53285C13B6974AAACBA9FD9151014AF05E01516 * ___value0, const RuntimeMethod* method);
// System.Void Melanchall.DryWetMidi.Multimedia.Playback::add_NotesPlaybackFinished(System.EventHandler`1<Melanchall.DryWetMidi.Multimedia.NotesEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Playback_add_NotesPlaybackFinished_m84BBD9B48A80767CF88F3D4B241D2E2191E8C3F6 (Playback_t57195DC933DF811AF3EF953E136F4B9610C70D3A * __this, EventHandler_1_tD53285C13B6974AAACBA9FD9151014AF05E01516 * ___value0, const RuntimeMethod* method);
// System.Void Melanchall.DryWetMidi.Multimedia.Playback::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Playback_Start_m6F696892B7F90D7CAC001529910F6DB09EBB5327 (Playback_t57195DC933DF811AF3EF953E136F4B9610C70D3A * __this, const RuntimeMethod* method);
// System.Void DemoScript::LogNotes(System.String,Melanchall.DryWetMidi.Multimedia.NotesEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoScript_LogNotes_m1ED77CDD2699A6B57AAFF6D655DA3DBF219FC88C (DemoScript_t035174A3DB2A2A84B0052CF0F69798314D2232D8 * __this, String_t* ___title0, NotesEventArgs_t32257D581DB8C05FAFF967215383C081CEAF9195 * ___e1, const RuntimeMethod* method);
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9 (StringBuilder_t * __this, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::AppendLine(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_AppendLine_m4FBF9761747825683B04B18842DF906473EEF7C8 (StringBuilder_t * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<Melanchall.DryWetMidi.Interaction.Note> Melanchall.DryWetMidi.Multimedia.NotesEventArgs::get_Notes()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* NotesEventArgs_get_Notes_mF2A186B97E400BA5CB9AB3ECC3D201E3097B2C61_inline (NotesEventArgs_t32257D581DB8C05FAFF967215383C081CEAF9195 * __this, const RuntimeMethod* method);
// System.Void System.Func`2<Melanchall.DryWetMidi.Interaction.Note,System.String>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m39B9D9ED874CA16084F241EC2E1D968DC38DB331 (Func_2_tEDFF7C02ADD87D637C43084161242EA41259A2BA * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tEDFF7C02ADD87D637C43084161242EA41259A2BA *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_mA7F3C5A0612B84E910DE92E77BA95101FD68EEDB_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<!!1> System.Linq.Enumerable::Select<Melanchall.DryWetMidi.Interaction.Note,System.String>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
inline RuntimeObject* Enumerable_Select_TisNote_t72FA32C1F792DB6998277D23822C6FBBF619808C_TisString_t_mED9DB9A2BB6F6A474CC52215DC7925690A279DC8 (RuntimeObject* ___source0, Func_2_tEDFF7C02ADD87D637C43084161242EA41259A2BA * ___selector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_tEDFF7C02ADD87D637C43084161242EA41259A2BA *, const RuntimeMethod*))Enumerable_Select_TisRuntimeObject_TisRuntimeObject_mC0F1DA980E0433D70A6CF9DD7CD1942BB7FE87C0_gshared)(___source0, ___selector1, method);
}
// System.String System.String::Trim()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Trim_m3FEC641D7046124B7F381701903B50B5171DE0A2 (String_t* __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mAAAA103F4911E9FA18634BF9605C28559F5E2AC7 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, float ___t1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::get_anyKeyDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_get_anyKeyDown_m0E5B02352AC40A25BBE31F4532764279D5AF03A5 (const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1 (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, const RuntimeMethod* method);
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411 (int32_t* __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void GameManager::NoteHit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_NoteHit_m0DC9EFC72076871721F3BCB8752F3B759BEA2CD2 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.RectTransform>()
inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * Component_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m98D387B909AC36B37BF964576557C064222B3C79 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Collections.IEnumerator InvertCreator::startCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InvertCreator_startCount_mA202309E51B575B2413E8E2164A59088EAD7AF8D (InvertCreator_t73F06C8608898BB962DB7AFF980F9AA9630506FA * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void InvertCreator/<startCount>d__9::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CstartCountU3Ed__9__ctor_mA2E09348D1A944907445AB986E8D86F94CE78CC7 (U3CstartCountU3Ed__9_tC6AEADF32799B25FD8FC3FAE295448A88287AB6D * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// Melanchall.DryWetMidi.MusicTheory.NoteName Melanchall.DryWetMidi.Interaction.Note::get_NoteName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Note_get_NoteName_m39956BA754C289AE99BE52A21891F6C9595EBEBF (Note_t72FA32C1F792DB6998277D23822C6FBBF619808C * __this, const RuntimeMethod* method);
// System.Int64 Melanchall.DryWetMidi.Interaction.Note::get_Time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Note_get_Time_m2DC52518A81B561040A026D35641400C9BB93D52 (Note_t72FA32C1F792DB6998277D23822C6FBBF619808C * __this, const RuntimeMethod* method);
// Melanchall.DryWetMidi.Interaction.TempoMap Melanchall.DryWetMidi.Interaction.TempoMapManagingUtilities::GetTempoMap(Melanchall.DryWetMidi.Core.MidiFile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TempoMap_t2C66560BA5D33AACE8AB672141C4228C04142D5A * TempoMapManagingUtilities_GetTempoMap_m4004D524AA5FE6B4507145A161BB3A1F3AB02BD6 (MidiFile_t00456CC0D22B31D61780718A31F002EFC5082774 * ___file0, const RuntimeMethod* method);
// !!0 Melanchall.DryWetMidi.Interaction.TimeConverter::ConvertTo<Melanchall.DryWetMidi.Interaction.MetricTimeSpan>(System.Int64,Melanchall.DryWetMidi.Interaction.TempoMap)
inline MetricTimeSpan_t6BCD0FA647C5BC5289D584F4CF72AC69127E588D * TimeConverter_ConvertTo_TisMetricTimeSpan_t6BCD0FA647C5BC5289D584F4CF72AC69127E588D_m94362943FAEE201DEBF356CA08FC89AF1EAF8EBA (int64_t ___time0, TempoMap_t2C66560BA5D33AACE8AB672141C4228C04142D5A * ___tempoMap1, const RuntimeMethod* method)
{
	return ((  MetricTimeSpan_t6BCD0FA647C5BC5289D584F4CF72AC69127E588D * (*) (int64_t, TempoMap_t2C66560BA5D33AACE8AB672141C4228C04142D5A *, const RuntimeMethod*))TimeConverter_ConvertTo_TisRuntimeObject_m16EE1383D5586CE3E2A1C811464CE7A6BA03FCAC_gshared)(___time0, ___tempoMap1, method);
}
// System.Int32 Melanchall.DryWetMidi.Interaction.MetricTimeSpan::get_Minutes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MetricTimeSpan_get_Minutes_mCA5183F51EF86229800D7B1990D4C60E24D4DC04 (MetricTimeSpan_t6BCD0FA647C5BC5289D584F4CF72AC69127E588D * __this, const RuntimeMethod* method);
// System.Int32 Melanchall.DryWetMidi.Interaction.MetricTimeSpan::get_Seconds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MetricTimeSpan_get_Seconds_mF0D3E03E0484715655AD54147FE753ACE5195641 (MetricTimeSpan_t6BCD0FA647C5BC5289D584F4CF72AC69127E588D * __this, const RuntimeMethod* method);
// System.Int32 Melanchall.DryWetMidi.Interaction.MetricTimeSpan::get_Milliseconds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MetricTimeSpan_get_Milliseconds_mCFC12277E4AE8EEEB2633FC9B5ACB26488B3F0EA (MetricTimeSpan_t6BCD0FA647C5BC5289D584F4CF72AC69127E588D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Double>::Add(!0)
inline void List_1_Add_m56E93B74F5254C198272F09C8E4B09483184B929 (List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC * __this, double ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC *, double, const RuntimeMethod*))List_1_Add_m56E93B74F5254C198272F09C8E4B09483184B929_gshared)(__this, ___item0, method);
}
// System.Collections.IEnumerator Lane::WaittoSwicth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Lane_WaittoSwicth_mFF60727E063849D9D620C72CD0D30D0B53C4AC3F (Lane_t286B164399771EA0ED4119258145C46B5AFBD3CF * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Double>::get_Count()
inline int32_t List_1_get_Count_mC1A91036A8488F4B39DA566C71D9631B796DCBE2_inline (List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC *, const RuntimeMethod*))List_1_get_Count_mC1A91036A8488F4B39DA566C71D9631B796DCBE2_gshared_inline)(__this, method);
}
// System.Double SongManager::GetAudioSourceTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double SongManager_GetAudioSourceTime_m26D5B6F69E4377F3EAA9E79CE33F4360A852B01D (const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Double>::get_Item(System.Int32)
inline double List_1_get_Item_m31A9E37299AA6C7637D3CB1E55556B22883D2A06_inline (List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  double (*) (List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC *, int32_t, const RuntimeMethod*))List_1_get_Item_m31A9E37299AA6C7637D3CB1E55556B22883D2A06_gshared_inline)(__this, ___index0, method);
}
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Transform)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___original0, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___parent1, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mD211EB15E9E128684605B4CC7277F10840F8E8CF_gshared)(___original0, ___parent1, method);
}
// !!0 UnityEngine.GameObject::GetComponent<NoteObject>()
inline NoteObject_tB227B82DE6D9050A93DC7A2F5A32C79C696F0973 * GameObject_GetComponent_TisNoteObject_tB227B82DE6D9050A93DC7A2F5A32C79C696F0973_m8B9AB498238C48116AD36E6695809EC83C985244 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  NoteObject_tB227B82DE6D9050A93DC7A2F5A32C79C696F0973 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<NoteObject>::Add(!0)
inline void List_1_Add_mFFF48FBBEC231046FE2B8DB9D222FABF7CFDA6AE (List_1_t30C93A65DA86A6C517E439B0040B2AE67DE85112 * __this, NoteObject_tB227B82DE6D9050A93DC7A2F5A32C79C696F0973 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t30C93A65DA86A6C517E439B0040B2AE67DE85112 *, NoteObject_tB227B82DE6D9050A93DC7A2F5A32C79C696F0973 *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Void Lane::Hit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lane_Hit_m9B70538FFEE33B0D99ABB3F1843B7C3BA7E8F81C (Lane_t286B164399771EA0ED4119258145C46B5AFBD3CF * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17 (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::print(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_print_m4F113B89EC1C221CAC6EC64365E6DAD0AF86F090 (RuntimeObject * ___message0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<NoteObject>::get_Item(System.Int32)
inline NoteObject_tB227B82DE6D9050A93DC7A2F5A32C79C696F0973 * List_1_get_Item_mA97FC7588319092C5157A79FA19233846EAC0820_inline (List_1_t30C93A65DA86A6C517E439B0040B2AE67DE85112 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  NoteObject_tB227B82DE6D9050A93DC7A2F5A32C79C696F0973 * (*) (List_1_t30C93A65DA86A6C517E439B0040B2AE67DE85112 *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66 (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, const RuntimeMethod* method);
// System.Void Lane::Miss()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lane_Miss_m9DB4EFE35069C31DB938E50E601402A3898CCE07 (Lane_t286B164399771EA0ED4119258145C46B5AFBD3CF * __this, const RuntimeMethod* method);
// System.Void ScoreManager::Hit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreManager_Hit_mDE10830F41216D35EC449F36401BFF25A782D475 (const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___original0, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m4039C8E65629D33E1EC84D2505BF1D5DDC936622_gshared)(___original0, method);
}
// System.Void ScoreManager::Miss()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreManager_Miss_m87DE88C42203D03B267D97755D51E38591B69318 (const RuntimeMethod* method);
// System.Void Lane/<WaittoSwicth>d__15::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaittoSwicthU3Ed__15__ctor_mAAE9DF1461A62C7F7181C4EC7A103E2D37B291F0 (U3CWaittoSwicthU3Ed__15_t615CB7E544E6313578445BF522D046CCFE0D1DC8 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<NoteObject>::.ctor()
inline void List_1__ctor_m096216F17BF757CF4C7F937E038E1F8D5DD330E1 (List_1_t30C93A65DA86A6C517E439B0040B2AE67DE85112 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t30C93A65DA86A6C517E439B0040B2AE67DE85112 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Double>::.ctor()
inline void List_1__ctor_mA0CE4C11D163EF853E9E6A0FD3C75486EF3A0F31 (List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC *, const RuntimeMethod*))List_1__ctor_mA0CE4C11D163EF853E9E6A0FD3C75486EF3A0F31_gshared)(__this, method);
}
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092 (String_t* ___sceneName0, const RuntimeMethod* method);
// System.Void UnityEngine.Application::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_Quit_m8D720E5092786C2EE32310D85FE61C253D3B1F2A (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method);
// System.Single SongManager::get_noteDespawnY()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SongManager_get_noteDespawnY_mD49CE11BAB953C4CAC13636EBE37C831F43A11E4 (SongManager_t0B58391B2DFB12045E717021CF4CF7EE474665A3 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_Lerp_m8E095584FFA10CF1D3EABCD04F4C83FB82EC5524_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, float ___t2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Renderer::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_enabled_mFFBA418C428C1B2B151C77B879DD10C393D9D95B (Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * __this, bool ___value0, const RuntimeMethod* method);
// System.String UnityEngine.Application::get_streamingAssetsPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_streamingAssetsPath_mA1FBABB08D7A4590A468C7CD940CD442B58C91E1 (const RuntimeMethod* method);
// System.Boolean System.String::StartsWith(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_StartsWith_mDE2FF98CAFFD13F88EDEB6C40158DDF840BFCF12 (String_t* __this, String_t* ___value0, const RuntimeMethod* method);
// System.Collections.IEnumerator SongManager::ReadFromWebsite()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SongManager_ReadFromWebsite_mD046ED04FD70A8A3712BD20D1950D1C19ABF1640 (SongManager_t0B58391B2DFB12045E717021CF4CF7EE474665A3 * __this, const RuntimeMethod* method);
// System.Void SongManager::ReadFromFile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SongManager_ReadFromFile_m5A7905DC4C1EED361E23EE3B7C3E151915B6CD1E (SongManager_t0B58391B2DFB12045E717021CF4CF7EE474665A3 * __this, const RuntimeMethod* method);
// System.Void SongManager/<ReadFromWebsite>d__14::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReadFromWebsiteU3Ed__14__ctor_m5B88C0DAF5E18E047C4C8A8B17F8042BC92E6414 (U3CReadFromWebsiteU3Ed__14_tAB16D26B298F15A356098B5CCAE0BF31AFD65381 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// Melanchall.DryWetMidi.Core.MidiFile Melanchall.DryWetMidi.Core.MidiFile::Read(System.String,Melanchall.DryWetMidi.Core.ReadingSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MidiFile_t00456CC0D22B31D61780718A31F002EFC5082774 * MidiFile_Read_m825698659B2915325D7BE38E5570E56646208412 (String_t* ___filePath0, ReadingSettings_tF4A87F7B3EBDAE1FC80442C1C6A71B0B017D35DB * ___settings1, const RuntimeMethod* method);
// System.Void SongManager::GetDataFromMidi()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SongManager_GetDataFromMidi_m42A78881AC2E5E02EEF1697CDD27B1BE28E12EC1 (SongManager_t0B58391B2DFB12045E717021CF4CF7EE474665A3 * __this, const RuntimeMethod* method);
// System.Collections.Generic.ICollection`1<Melanchall.DryWetMidi.Interaction.Note> Melanchall.DryWetMidi.Interaction.NotesManagingUtilities::GetNotes(Melanchall.DryWetMidi.Core.MidiFile,Melanchall.DryWetMidi.Interaction.NoteDetectionSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NotesManagingUtilities_GetNotes_m3F1D23DBC668EA7D6AE40A472D16BD69D307BAF4 (MidiFile_t00456CC0D22B31D61780718A31F002EFC5082774 * ___file0, NoteDetectionSettings_tBBDCB0CE0E95324BD3141AD2A42FFD977A1B858B * ___settings1, const RuntimeMethod* method);
// System.Void Lane::SetTimeStamps(Melanchall.DryWetMidi.Interaction.Note[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lane_SetTimeStamps_mFCD9EEF3C1C7BCBBE563F12740F06ED78FA6FC42 (Lane_t286B164399771EA0ED4119258145C46B5AFBD3CF * __this, NoteU5BU5D_tCBBDF8452DE17E526D80118C9E6926262C9BD7E9* ___array0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::Invoke(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_Invoke_m4AAB759653B1C6FB0653527F4DDC72D1E9162CC4 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, String_t* ___methodName0, float ___time1, const RuntimeMethod* method);
// System.Int32 UnityEngine.AudioSource::get_timeSamples()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioSource_get_timeSamples_m2D16DA78011B58C24BCA679B44D2BF832DFCA0BE (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, const RuntimeMethod* method);
// UnityEngine.AudioClip UnityEngine.AudioSource::get_clip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * AudioSource_get_clip_mE4454E38D2C0A4C8CC780A435FC1DBD4D47D16DC (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.AudioClip::get_frequency()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioClip_get_frequency_m5346F253EE3761A2535B20E0E27B6AB0B875BFCD (AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.AudioSource::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioSource_get_isPlaying_mEA69477C77D542971F7B454946EF25DFBE0AF6A8 (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator SongManager::WaitLoad()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SongManager_WaitLoad_m5AAEA987E46291D4096E75F4233D9F996D5EB3AD (SongManager_t0B58391B2DFB12045E717021CF4CF7EE474665A3 * __this, const RuntimeMethod* method);
// System.Void SongManager/<WaitLoad>d__20::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitLoadU3Ed__20__ctor_m0A6746A6693964894277CFD95530183A5F291FFC (U3CWaitLoadU3Ed__20_t055F386818B09FF1C73268153A9C10D8A79A4BE8 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::Translate(System.Single,System.Single,System.Single,UnityEngine.Space)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Translate_m22737F202DE67AAAAC408ADE91BD44F5BAF3DD6B (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, float ___x0, float ___y1, float ___z2, int32_t ___relativeTo3, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.GameObject::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GameObject_get_gameObject_mD5FFECF7C3AC5039E847DF7A8842478539B701D6 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4 (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * __this, float ___seconds0, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 , const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mB05DEC51C29EF5BB8BD17D055E80217F11E571AA_gshared)(___original0, ___position1, ___rotation2, method);
}
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Void DemoScript/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m4119CE4D8758DADE144C4E60372D6CA940FF7125 (U3CU3Ec_tDE021ECD8EACE49080A257681D29E16DCF3F53F2 * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Void SongManager/<ReadFromWebsite>d__14::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReadFromWebsiteU3Ed__14_U3CU3Em__Finally1_mE2265F4C6339F67116ECAC8366FB1B34BBE5059A (U3CReadFromWebsiteU3Ed__14_tAB16D26B298F15A356098B5CCAE0BF31AFD65381 * __this, const RuntimeMethod* method);
// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequest::Get(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * UnityWebRequest_Get_m9C24DB3E8BED0B0886F28DCD982A4741A9903B1A (String_t* ___uri0, const RuntimeMethod* method);
// UnityEngine.Networking.UnityWebRequestAsyncOperation UnityEngine.Networking.UnityWebRequest::SendWebRequest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396 * UnityWebRequest_SendWebRequest_m990921023F56ECB8FF8C118894A317EB6E2F5B50 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Networking.UnityWebRequest::get_isNetworkError()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityWebRequest_get_isNetworkError_m0126D38DA9B39159CB12F8DE0C3962A4BEEE5C03 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Networking.UnityWebRequest::get_isHttpError()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityWebRequest_get_isHttpError_m23ADCBE1CF082A940EF6AA75A15051583228B616 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method);
// System.String UnityEngine.Networking.UnityWebRequest::get_error()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityWebRequest_get_error_m32B69D2365C1FE2310B5936C7C295B71A92CC2B4 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485 (RuntimeObject * ___message0, const RuntimeMethod* method);
// UnityEngine.Networking.DownloadHandler UnityEngine.Networking.UnityWebRequest::get_downloadHandler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * UnityWebRequest_get_downloadHandler_mCE0A0C53A63419FE5AE25915AFB36EABE294C732 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method);
// System.Byte[] UnityEngine.Networking.DownloadHandler::get_data()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* DownloadHandler_get_data_m3AE551AAE6BF21279435D386E76EA7084CC037D3 (DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * __this, const RuntimeMethod* method);
// System.Void System.IO.MemoryStream::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryStream__ctor_m3E041ADD3DB7EA42E7DB56FE862097819C02B9C2 (MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buffer0, const RuntimeMethod* method);
// Melanchall.DryWetMidi.Core.MidiFile Melanchall.DryWetMidi.Core.MidiFile::Read(System.IO.Stream,Melanchall.DryWetMidi.Core.ReadingSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MidiFile_t00456CC0D22B31D61780718A31F002EFC5082774 * MidiFile_Read_mF259700CFF64DFEB3BA1C871837F7039DA4D8CCF (Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___stream0, ReadingSettings_tF4A87F7B3EBDAE1FC80442C1C6A71B0B017D35DB * ___settings1, const RuntimeMethod* method);
// System.Void SongManager/<ReadFromWebsite>d__14::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReadFromWebsiteU3Ed__14_System_IDisposable_Dispose_mE82E3B9BD9D2E225E8BEB095379BA27849D07C7D (U3CReadFromWebsiteU3Ed__14_tAB16D26B298F15A356098B5CCAE0BF31AFD65381 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C (float ___value0, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929 (const RuntimeMethod* method);
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
// System.Void BackgroundMover::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BackgroundMover_Start_m1CBD77E14B17DA29195EA976C91A819547F12DFD (BackgroundMover_tCB967D07193551E3830EBA987419287E3598C848 * __this, const RuntimeMethod* method)
{
	{
		// StartCoroutine(WallSpawn());
		RuntimeObject* L_0;
		L_0 = BackgroundMover_WallSpawn_mEE2E9B936BF318D7C5D656E9DC43B2FB18AF4023(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_1;
		L_1 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void BackgroundMover::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BackgroundMover_Update_mF24BA495CEE397CEEB9FAD30F352EDB814555C37 (BackgroundMover_tCB967D07193551E3830EBA987419287E3598C848 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator BackgroundMover::WallSpawn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BackgroundMover_WallSpawn_mEE2E9B936BF318D7C5D656E9DC43B2FB18AF4023 (BackgroundMover_tCB967D07193551E3830EBA987419287E3598C848 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CWallSpawnU3Ed__6_tAF3991F444558EB25A917E5E64C0654A3288B8C3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CWallSpawnU3Ed__6_tAF3991F444558EB25A917E5E64C0654A3288B8C3 * L_0 = (U3CWallSpawnU3Ed__6_tAF3991F444558EB25A917E5E64C0654A3288B8C3 *)il2cpp_codegen_object_new(U3CWallSpawnU3Ed__6_tAF3991F444558EB25A917E5E64C0654A3288B8C3_il2cpp_TypeInfo_var);
		U3CWallSpawnU3Ed__6__ctor_m0F2481D9D9A2286B867A899EAD364E261A9E4392(L_0, 0, /*hidden argument*/NULL);
		U3CWallSpawnU3Ed__6_tAF3991F444558EB25A917E5E64C0654A3288B8C3 * L_1 = L_0;
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void BackgroundMover::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BackgroundMover__ctor_mE0C0E9016EF3496777E8F56E5BD652B9C7B5A1DB (BackgroundMover_tCB967D07193551E3830EBA987419287E3598C848 * __this, const RuntimeMethod* method)
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
// System.Void BeatScroller::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BeatScroller_Start_mC24C4B13AD59CAF22E489F9EC8C9F93803583283 (BeatScroller_t6BF3F88E6125A8C8789A3610E3EFEA29CA91F380 * __this, const RuntimeMethod* method)
{
	{
		// beatTempo = beatTempo / 60f;
		float L_0 = __this->get_beatTempo_4();
		__this->set_beatTempo_4(((float)((float)L_0/(float)(60.0f))));
		// }
		return;
	}
}
// System.Void BeatScroller::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BeatScroller_Update_mFE1A47C1829AEFE1E50F936D612979A3682875F8 (BeatScroller_t6BF3F88E6125A8C8789A3610E3EFEA29CA91F380 * __this, const RuntimeMethod* method)
{
	{
		// if(!hasStarted)
		bool L_0 = __this->get_hasStarted_5();
		if (!L_0)
		{
			goto IL_0039;
		}
	}
	{
		// transform.position -= new Vector3(0f, beatTempo * Time.deltaTime, 0f);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2 = L_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_2, /*hidden argument*/NULL);
		float L_4 = __this->get_beatTempo_4();
		float L_5;
		L_5 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_6), (0.0f), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), (0.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_3, L_6, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_2, L_7, /*hidden argument*/NULL);
	}

IL_0039:
	{
		// }
		return;
	}
}
// System.Void BeatScroller::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BeatScroller__ctor_m72A92C15A1B43FC916BB514A7673FEE8E30B2A17 (BeatScroller_t6BF3F88E6125A8C8789A3610E3EFEA29CA91F380 * __this, const RuntimeMethod* method)
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
// System.Void ButtonController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonController_Start_mC239982012DEB17653C7C54E0668DEF6E0FC52CC (ButtonController_t0D27B81A3DC32EC27023C3CD654D850B38C7F1C7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// an_SR = GetComponent<SpriteRenderer>();
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_0;
		L_0 = Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491(__this, /*hidden argument*/Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491_RuntimeMethod_var);
		__this->set_an_SR_4(L_0);
		// }
		return;
	}
}
// System.Void ButtonController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonController_Update_mD9BED097D42C846343C806B0EB4252A5F8DE58F1 (ButtonController_t0D27B81A3DC32EC27023C3CD654D850B38C7F1C7 * __this, const RuntimeMethod* method)
{
	{
		// if (Input.GetKeyDown(keytoPress))
		int32_t L_0 = __this->get_keytoPress_7();
		bool L_1;
		L_1 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		// an_SR.sprite = pressedImage;
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_2 = __this->get_an_SR_4();
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_3 = __this->get_pressedImage_6();
		SpriteRenderer_set_sprite_mBCFFBF3F10C068FD1174C4506DF73E204303FC1A(L_2, L_3, /*hidden argument*/NULL);
	}

IL_001e:
	{
		// if (Input.GetKeyUp(keytoPress))
		int32_t L_4 = __this->get_keytoPress_7();
		bool L_5;
		L_5 = Input_GetKeyUp_mDE9D56FE11715566D4D54FD96F8E1EF9734D225F(L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_003c;
		}
	}
	{
		// an_SR.sprite = defImage;
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_6 = __this->get_an_SR_4();
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_7 = __this->get_defImage_5();
		SpriteRenderer_set_sprite_mBCFFBF3F10C068FD1174C4506DF73E204303FC1A(L_6, L_7, /*hidden argument*/NULL);
	}

IL_003c:
	{
		// }
		return;
	}
}
// System.Void ButtonController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonController__ctor_m36749A05CC35FB6DE62764596A93D54AC73713F3 (ButtonController_t0D27B81A3DC32EC27023C3CD654D850B38C7F1C7 * __this, const RuntimeMethod* method)
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
// System.Void DemoScript::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoScript_Start_mB13CE077CC0627C7F0433CB2E6A41EB2982208C7 (DemoScript_t035174A3DB2A2A84B0052CF0F69798314D2232D8 * __this, const RuntimeMethod* method)
{
	MidiFile_t00456CC0D22B31D61780718A31F002EFC5082774 * V_0 = NULL;
	{
		// InitializeOutputDevice();
		DemoScript_InitializeOutputDevice_m53113E27B64479CDA88B3A9D806AA335E096D391(__this, /*hidden argument*/NULL);
		// var midiFile = CreateTestFile();
		MidiFile_t00456CC0D22B31D61780718A31F002EFC5082774 * L_0;
		L_0 = DemoScript_CreateTestFile_mB2B88DCA2B5E4FBA8AEAB3A2552D2413E5E8A51F(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		// InitializeFilePlayback(midiFile);
		MidiFile_t00456CC0D22B31D61780718A31F002EFC5082774 * L_1 = V_0;
		DemoScript_InitializeFilePlayback_mA334B5FE949D5C991735B99D52408E9FB89357DD(__this, L_1, /*hidden argument*/NULL);
		// StartPlayback();
		DemoScript_StartPlayback_m0A3750E637070DF7F478FE278D72DF8F492B11C7(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void DemoScript::OnApplicationQuit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoScript_OnApplicationQuit_mB95C05628E144DB3F6FA3AC44B17B905D6831D94 (DemoScript_t035174A3DB2A2A84B0052CF0F69798314D2232D8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DemoScript_OnNotesPlaybackFinished_m7A2BBC7B040F0268281D7A8E7922D8FB13DF124C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DemoScript_OnNotesPlaybackStarted_mEBAE6300FDC0DF0386E2627FD2565739EFA2E319_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1__ctor_m0DFCF20BA5A90DC393BC8D21FA5D77CEE8E99AE8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tD53285C13B6974AAACBA9FD9151014AF05E01516_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OutputDevice_t7A9B57531DCA6BF309413A7FACE2F48E261EC9BB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6DB0AA29D452F6EBFC9F831658B901EA2F208AA6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralABAFD062C0021BA081173D4DD1A949B024535F0B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Releasing playback and device...");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralABAFD062C0021BA081173D4DD1A949B024535F0B, /*hidden argument*/NULL);
		// if (_playback != null)
		Playback_t57195DC933DF811AF3EF953E136F4B9610C70D3A * L_0 = __this->get__playback_6();
		if (!L_0)
		{
			goto IL_004b;
		}
	}
	{
		// _playback.NotesPlaybackStarted -= OnNotesPlaybackStarted;
		Playback_t57195DC933DF811AF3EF953E136F4B9610C70D3A * L_1 = __this->get__playback_6();
		EventHandler_1_tD53285C13B6974AAACBA9FD9151014AF05E01516 * L_2 = (EventHandler_1_tD53285C13B6974AAACBA9FD9151014AF05E01516 *)il2cpp_codegen_object_new(EventHandler_1_tD53285C13B6974AAACBA9FD9151014AF05E01516_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m0DFCF20BA5A90DC393BC8D21FA5D77CEE8E99AE8(L_2, __this, (intptr_t)((intptr_t)DemoScript_OnNotesPlaybackStarted_mEBAE6300FDC0DF0386E2627FD2565739EFA2E319_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_m0DFCF20BA5A90DC393BC8D21FA5D77CEE8E99AE8_RuntimeMethod_var);
		Playback_remove_NotesPlaybackStarted_m3AEC4B40BDE797EA89BDEEC685627401A74034F5(L_1, L_2, /*hidden argument*/NULL);
		// _playback.NotesPlaybackFinished -= OnNotesPlaybackFinished;
		Playback_t57195DC933DF811AF3EF953E136F4B9610C70D3A * L_3 = __this->get__playback_6();
		EventHandler_1_tD53285C13B6974AAACBA9FD9151014AF05E01516 * L_4 = (EventHandler_1_tD53285C13B6974AAACBA9FD9151014AF05E01516 *)il2cpp_codegen_object_new(EventHandler_1_tD53285C13B6974AAACBA9FD9151014AF05E01516_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m0DFCF20BA5A90DC393BC8D21FA5D77CEE8E99AE8(L_4, __this, (intptr_t)((intptr_t)DemoScript_OnNotesPlaybackFinished_m7A2BBC7B040F0268281D7A8E7922D8FB13DF124C_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_m0DFCF20BA5A90DC393BC8D21FA5D77CEE8E99AE8_RuntimeMethod_var);
		Playback_remove_NotesPlaybackFinished_mD631E539867F53BD4D06CD0356457FF00FA42D08(L_3, L_4, /*hidden argument*/NULL);
		// _playback.Dispose();
		Playback_t57195DC933DF811AF3EF953E136F4B9610C70D3A * L_5 = __this->get__playback_6();
		Playback_Dispose_mDB255B751EC037F8A6CD111BB84E12A5FDB8BFD4(L_5, /*hidden argument*/NULL);
	}

IL_004b:
	{
		// if (_outputDevice != null)
		OutputDevice_t7A9B57531DCA6BF309413A7FACE2F48E261EC9BB * L_6 = __this->get__outputDevice_5();
		IL2CPP_RUNTIME_CLASS_INIT(OutputDevice_t7A9B57531DCA6BF309413A7FACE2F48E261EC9BB_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = OutputDevice_op_Inequality_m7B8AFEF446322A31EC5B95B82E1650FD9C48AC5A(L_6, (OutputDevice_t7A9B57531DCA6BF309413A7FACE2F48E261EC9BB *)NULL, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0064;
		}
	}
	{
		// _outputDevice.Dispose();
		OutputDevice_t7A9B57531DCA6BF309413A7FACE2F48E261EC9BB * L_8 = __this->get__outputDevice_5();
		MidiDevice_Dispose_m0ECAF928559B006B67705C76F140B75652AF6EC9(L_8, /*hidden argument*/NULL);
	}

IL_0064:
	{
		// Debug.Log("Playback and device released.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral6DB0AA29D452F6EBFC9F831658B901EA2F208AA6, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void DemoScript::InitializeOutputDevice()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoScript_InitializeOutputDevice_m53113E27B64479CDA88B3A9D806AA335E096D391 (DemoScript_t035174A3DB2A2A84B0052CF0F69798314D2232D8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Any_TisOutputDevice_t7A9B57531DCA6BF309413A7FACE2F48E261EC9BB_m3674EE89D4345AB5E8518E585D07F10E134C4FFE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_TisOutputDevice_t7A9B57531DCA6BF309413A7FACE2F48E261EC9BB_TisString_t_mE37921EB1BB2B54AD8B2EB7B2ED5499B05A42EF6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2__ctor_m3F8FCF6FB04E43DC4FD8A36D1D69AECF686C9F64_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2__ctor_mE52FABCA369749DDF8A8FD5C61B7561CECF43DE4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t39D5366EA29875308A08408C95C8986F8229009D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t9C331FABBD6817E7209986DEE757FE09F192C16F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OutputDevice_t7A9B57531DCA6BF309413A7FACE2F48E261EC9BB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CInitializeOutputDeviceU3Eb__5_0_m5D283EA583758841FC457054573656CC139FB89D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CInitializeOutputDeviceU3Eb__5_1_m862ED9491FD0F5DFDB10D2F3FD9FABD9000294EC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tDE021ECD8EACE49080A257681D29E16DCF3F53F2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral16565924D9A149B4BF76B0E247A9B848E113C4A0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral51B6E42767E2559991968046FCE0D8D5A1EC7385);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9B418922661D6D91E05EC513FA764F124B9EA46);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFFC3884485EDAE61C8B559F7DC0AE41C6C4B4442);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	String_t* V_1 = NULL;
	Func_2_t9C331FABBD6817E7209986DEE757FE09F192C16F * G_B2_0 = NULL;
	RuntimeObject* G_B2_1 = NULL;
	Func_2_t9C331FABBD6817E7209986DEE757FE09F192C16F * G_B1_0 = NULL;
	RuntimeObject* G_B1_1 = NULL;
	Func_2_t39D5366EA29875308A08408C95C8986F8229009D * G_B5_0 = NULL;
	RuntimeObject* G_B5_1 = NULL;
	String_t* G_B5_2 = NULL;
	Func_2_t39D5366EA29875308A08408C95C8986F8229009D * G_B4_0 = NULL;
	RuntimeObject* G_B4_1 = NULL;
	String_t* G_B4_2 = NULL;
	{
		// Debug.Log($"Initializing output device [{OutputDeviceName}]...");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralFFC3884485EDAE61C8B559F7DC0AE41C6C4B4442, /*hidden argument*/NULL);
		// var allOutputDevices = OutputDevice.GetAll();
		IL2CPP_RUNTIME_CLASS_INIT(OutputDevice_t7A9B57531DCA6BF309413A7FACE2F48E261EC9BB_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = OutputDevice_GetAll_m92295B16185C892C37D7C82A1E8219DF0064D2D2(/*hidden argument*/NULL);
		V_0 = L_0;
		// if (!allOutputDevices.Any(d => d.Name == OutputDeviceName))
		RuntimeObject* L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tDE021ECD8EACE49080A257681D29E16DCF3F53F2_il2cpp_TypeInfo_var);
		Func_2_t9C331FABBD6817E7209986DEE757FE09F192C16F * L_2 = ((U3CU3Ec_tDE021ECD8EACE49080A257681D29E16DCF3F53F2_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDE021ECD8EACE49080A257681D29E16DCF3F53F2_il2cpp_TypeInfo_var))->get_U3CU3E9__5_0_1();
		Func_2_t9C331FABBD6817E7209986DEE757FE09F192C16F * L_3 = L_2;
		G_B1_0 = L_3;
		G_B1_1 = L_1;
		if (L_3)
		{
			G_B2_0 = L_3;
			G_B2_1 = L_1;
			goto IL_0030;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tDE021ECD8EACE49080A257681D29E16DCF3F53F2_il2cpp_TypeInfo_var);
		U3CU3Ec_tDE021ECD8EACE49080A257681D29E16DCF3F53F2 * L_4 = ((U3CU3Ec_tDE021ECD8EACE49080A257681D29E16DCF3F53F2_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDE021ECD8EACE49080A257681D29E16DCF3F53F2_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Func_2_t9C331FABBD6817E7209986DEE757FE09F192C16F * L_5 = (Func_2_t9C331FABBD6817E7209986DEE757FE09F192C16F *)il2cpp_codegen_object_new(Func_2_t9C331FABBD6817E7209986DEE757FE09F192C16F_il2cpp_TypeInfo_var);
		Func_2__ctor_mE52FABCA369749DDF8A8FD5C61B7561CECF43DE4(L_5, L_4, (intptr_t)((intptr_t)U3CU3Ec_U3CInitializeOutputDeviceU3Eb__5_0_m5D283EA583758841FC457054573656CC139FB89D_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_mE52FABCA369749DDF8A8FD5C61B7561CECF43DE4_RuntimeMethod_var);
		Func_2_t9C331FABBD6817E7209986DEE757FE09F192C16F * L_6 = L_5;
		((U3CU3Ec_tDE021ECD8EACE49080A257681D29E16DCF3F53F2_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDE021ECD8EACE49080A257681D29E16DCF3F53F2_il2cpp_TypeInfo_var))->set_U3CU3E9__5_0_1(L_6);
		G_B2_0 = L_6;
		G_B2_1 = G_B1_1;
	}

IL_0030:
	{
		bool L_7;
		L_7 = Enumerable_Any_TisOutputDevice_t7A9B57531DCA6BF309413A7FACE2F48E261EC9BB_m3674EE89D4345AB5E8518E585D07F10E134C4FFE(G_B2_1, G_B2_0, /*hidden argument*/Enumerable_Any_TisOutputDevice_t7A9B57531DCA6BF309413A7FACE2F48E261EC9BB_m3674EE89D4345AB5E8518E585D07F10E134C4FFE_RuntimeMethod_var);
		if (L_7)
		{
			goto IL_007d;
		}
	}
	{
		// var allDevicesList = string.Join(Environment.NewLine, allOutputDevices.Select(d => $"  {d.Name}"));
		String_t* L_8;
		L_8 = Environment_get_NewLine_mD145C8EE917C986BAA7C5243DEFAF4D333C521B4(/*hidden argument*/NULL);
		RuntimeObject* L_9 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tDE021ECD8EACE49080A257681D29E16DCF3F53F2_il2cpp_TypeInfo_var);
		Func_2_t39D5366EA29875308A08408C95C8986F8229009D * L_10 = ((U3CU3Ec_tDE021ECD8EACE49080A257681D29E16DCF3F53F2_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDE021ECD8EACE49080A257681D29E16DCF3F53F2_il2cpp_TypeInfo_var))->get_U3CU3E9__5_1_2();
		Func_2_t39D5366EA29875308A08408C95C8986F8229009D * L_11 = L_10;
		G_B4_0 = L_11;
		G_B4_1 = L_9;
		G_B4_2 = L_8;
		if (L_11)
		{
			G_B5_0 = L_11;
			G_B5_1 = L_9;
			G_B5_2 = L_8;
			goto IL_005c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tDE021ECD8EACE49080A257681D29E16DCF3F53F2_il2cpp_TypeInfo_var);
		U3CU3Ec_tDE021ECD8EACE49080A257681D29E16DCF3F53F2 * L_12 = ((U3CU3Ec_tDE021ECD8EACE49080A257681D29E16DCF3F53F2_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDE021ECD8EACE49080A257681D29E16DCF3F53F2_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Func_2_t39D5366EA29875308A08408C95C8986F8229009D * L_13 = (Func_2_t39D5366EA29875308A08408C95C8986F8229009D *)il2cpp_codegen_object_new(Func_2_t39D5366EA29875308A08408C95C8986F8229009D_il2cpp_TypeInfo_var);
		Func_2__ctor_m3F8FCF6FB04E43DC4FD8A36D1D69AECF686C9F64(L_13, L_12, (intptr_t)((intptr_t)U3CU3Ec_U3CInitializeOutputDeviceU3Eb__5_1_m862ED9491FD0F5DFDB10D2F3FD9FABD9000294EC_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_m3F8FCF6FB04E43DC4FD8A36D1D69AECF686C9F64_RuntimeMethod_var);
		Func_2_t39D5366EA29875308A08408C95C8986F8229009D * L_14 = L_13;
		((U3CU3Ec_tDE021ECD8EACE49080A257681D29E16DCF3F53F2_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDE021ECD8EACE49080A257681D29E16DCF3F53F2_il2cpp_TypeInfo_var))->set_U3CU3E9__5_1_2(L_14);
		G_B5_0 = L_14;
		G_B5_1 = G_B4_1;
		G_B5_2 = G_B4_2;
	}

IL_005c:
	{
		RuntimeObject* L_15;
		L_15 = Enumerable_Select_TisOutputDevice_t7A9B57531DCA6BF309413A7FACE2F48E261EC9BB_TisString_t_mE37921EB1BB2B54AD8B2EB7B2ED5499B05A42EF6(G_B5_1, G_B5_0, /*hidden argument*/Enumerable_Select_TisOutputDevice_t7A9B57531DCA6BF309413A7FACE2F48E261EC9BB_TisString_t_mE37921EB1BB2B54AD8B2EB7B2ED5499B05A42EF6_RuntimeMethod_var);
		String_t* L_16;
		L_16 = String_Join_m7E55204B5C94F9EB939D144E7EE684D016F90509(G_B5_2, L_15, /*hidden argument*/NULL);
		V_1 = L_16;
		// Debug.Log($"There is no [{OutputDeviceName}] device presented in the system. Here the list of all device:{Environment.NewLine}{allDevicesList}");
		String_t* L_17;
		L_17 = Environment_get_NewLine_mD145C8EE917C986BAA7C5243DEFAF4D333C521B4(/*hidden argument*/NULL);
		String_t* L_18 = V_1;
		String_t* L_19;
		L_19 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteralF9B418922661D6D91E05EC513FA764F124B9EA46, L_17, L_18, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_19, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_007d:
	{
		// _outputDevice = OutputDevice.GetByName(OutputDeviceName);
		IL2CPP_RUNTIME_CLASS_INIT(OutputDevice_t7A9B57531DCA6BF309413A7FACE2F48E261EC9BB_il2cpp_TypeInfo_var);
		OutputDevice_t7A9B57531DCA6BF309413A7FACE2F48E261EC9BB * L_20;
		L_20 = OutputDevice_GetByName_mE4068E08DB28876AD3CEE089E63A95C321F8C9DC(_stringLiteral51B6E42767E2559991968046FCE0D8D5A1EC7385, /*hidden argument*/NULL);
		__this->set__outputDevice_5(L_20);
		// Debug.Log($"Output device [{OutputDeviceName}] initialized.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral16565924D9A149B4BF76B0E247A9B848E113C4A0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// Melanchall.DryWetMidi.Core.MidiFile DemoScript::CreateTestFile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MidiFile_t00456CC0D22B31D61780718A31F002EFC5082774 * DemoScript_CreateTestFile_mB2B88DCA2B5E4FBA8AEAB3A2552D2413E5E8A51F (DemoScript_t035174A3DB2A2A84B0052CF0F69798314D2232D8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MusicalTimeSpan_tF775CB468731C8C8DFD70DD05C04218B8157A249_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Note_t3D41F3AD2C3580F851A482C6559734126CAE4976_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PatternBuilder_t3C2CB526323390746CEDE3AD77A06AF96217496B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SevenBitNumber_t9D9AA0CA6CF9F4FD2896F25C6CBF7769F0D8B6A8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TempoMap_t2C66560BA5D33AACE8AB672141C4228C04142D5A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral265A4651FB1F71BAF8A53859EC2D237C5C2CF448);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDFA1EA6CBAEDACBA0940FEDA7050C10F2F0F7C1C);
		s_Il2CppMethodInitialized = true;
	}
	PatternBuilder_t3C2CB526323390746CEDE3AD77A06AF96217496B * V_0 = NULL;
	SevenBitNumberU5BU5D_t7637700F96F6887FA1C000837321021B7902B396* V_1 = NULL;
	int32_t V_2 = 0;
	SevenBitNumber_t9D9AA0CA6CF9F4FD2896F25C6CBF7769F0D8B6A8  V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// Debug.Log("Creating test MIDI file...");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralDFA1EA6CBAEDACBA0940FEDA7050C10F2F0F7C1C, /*hidden argument*/NULL);
		// var patternBuilder = new PatternBuilder()
		//     .SetNoteLength(MusicalTimeSpan.Eighth)
		//     .SetVelocity(SevenBitNumber.MaxValue)
		//     .ProgramChange(GeneralMidiProgram.Harpsichord);
		PatternBuilder_t3C2CB526323390746CEDE3AD77A06AF96217496B * L_0 = (PatternBuilder_t3C2CB526323390746CEDE3AD77A06AF96217496B *)il2cpp_codegen_object_new(PatternBuilder_t3C2CB526323390746CEDE3AD77A06AF96217496B_il2cpp_TypeInfo_var);
		PatternBuilder__ctor_m145E6C37BF655C13EB55D2735B5202AB6CE7513C(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(MusicalTimeSpan_tF775CB468731C8C8DFD70DD05C04218B8157A249_il2cpp_TypeInfo_var);
		MusicalTimeSpan_tF775CB468731C8C8DFD70DD05C04218B8157A249 * L_1 = ((MusicalTimeSpan_tF775CB468731C8C8DFD70DD05C04218B8157A249_StaticFields*)il2cpp_codegen_static_fields_for(MusicalTimeSpan_tF775CB468731C8C8DFD70DD05C04218B8157A249_il2cpp_TypeInfo_var))->get_Eighth_3();
		PatternBuilder_t3C2CB526323390746CEDE3AD77A06AF96217496B * L_2;
		L_2 = PatternBuilder_SetNoteLength_m5C8B022E51495D3D0EAABF3B4C8A6B2A6B74C59C(L_0, L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(SevenBitNumber_t9D9AA0CA6CF9F4FD2896F25C6CBF7769F0D8B6A8_il2cpp_TypeInfo_var);
		SevenBitNumber_t9D9AA0CA6CF9F4FD2896F25C6CBF7769F0D8B6A8  L_3 = ((SevenBitNumber_t9D9AA0CA6CF9F4FD2896F25C6CBF7769F0D8B6A8_StaticFields*)il2cpp_codegen_static_fields_for(SevenBitNumber_t9D9AA0CA6CF9F4FD2896F25C6CBF7769F0D8B6A8_il2cpp_TypeInfo_var))->get_MaxValue_1();
		PatternBuilder_t3C2CB526323390746CEDE3AD77A06AF96217496B * L_4;
		L_4 = PatternBuilder_SetVelocity_m960DCE9AA90F5DB916B977D625CFA2A2274C784C(L_2, L_3, /*hidden argument*/NULL);
		PatternBuilder_t3C2CB526323390746CEDE3AD77A06AF96217496B * L_5;
		L_5 = PatternBuilder_ProgramChange_mBCE5E9E079AD7BA3849E0539F12331FEFE2BE660(L_4, 6, /*hidden argument*/NULL);
		V_0 = L_5;
		// foreach (var noteNumber in SevenBitNumber.Values)
		SevenBitNumberU5BU5D_t7637700F96F6887FA1C000837321021B7902B396* L_6 = ((SevenBitNumber_t9D9AA0CA6CF9F4FD2896F25C6CBF7769F0D8B6A8_StaticFields*)il2cpp_codegen_static_fields_for(SevenBitNumber_t9D9AA0CA6CF9F4FD2896F25C6CBF7769F0D8B6A8_il2cpp_TypeInfo_var))->get_Values_2();
		V_1 = L_6;
		V_2 = 0;
		goto IL_004d;
	}

IL_0034:
	{
		// foreach (var noteNumber in SevenBitNumber.Values)
		SevenBitNumberU5BU5D_t7637700F96F6887FA1C000837321021B7902B396* L_7 = V_1;
		int32_t L_8 = V_2;
		int32_t L_9 = L_8;
		SevenBitNumber_t9D9AA0CA6CF9F4FD2896F25C6CBF7769F0D8B6A8  L_10 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9));
		V_3 = L_10;
		// patternBuilder.Note(Melanchall.DryWetMidi.MusicTheory.Note.Get(noteNumber));
		PatternBuilder_t3C2CB526323390746CEDE3AD77A06AF96217496B * L_11 = V_0;
		SevenBitNumber_t9D9AA0CA6CF9F4FD2896F25C6CBF7769F0D8B6A8  L_12 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(Note_t3D41F3AD2C3580F851A482C6559734126CAE4976_il2cpp_TypeInfo_var);
		Note_t3D41F3AD2C3580F851A482C6559734126CAE4976 * L_13;
		L_13 = Note_Get_m51087CE23C0A53BD57F1BD5F27BDB4327295BD06(L_12, /*hidden argument*/NULL);
		PatternBuilder_t3C2CB526323390746CEDE3AD77A06AF96217496B * L_14;
		L_14 = PatternBuilder_Note_mAD4C277CB38340899E9F9F6C1AEE725244BE5FC6(L_11, L_13, /*hidden argument*/NULL);
		int32_t L_15 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_004d:
	{
		// foreach (var noteNumber in SevenBitNumber.Values)
		int32_t L_16 = V_2;
		SevenBitNumberU5BU5D_t7637700F96F6887FA1C000837321021B7902B396* L_17 = V_1;
		if ((((int32_t)L_16) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_17)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		// var midiFile = patternBuilder.Build().ToFile(TempoMap.Default);
		PatternBuilder_t3C2CB526323390746CEDE3AD77A06AF96217496B * L_18 = V_0;
		Pattern_tB42554DBD9AF31288602637AFB2B7E8F53FC703A * L_19;
		L_19 = PatternBuilder_Build_m6CE5B38189265FCCE56AB0079F211203C7203310(L_18, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(TempoMap_t2C66560BA5D33AACE8AB672141C4228C04142D5A_il2cpp_TypeInfo_var);
		TempoMap_t2C66560BA5D33AACE8AB672141C4228C04142D5A * L_20 = ((TempoMap_t2C66560BA5D33AACE8AB672141C4228C04142D5A_StaticFields*)il2cpp_codegen_static_fields_for(TempoMap_t2C66560BA5D33AACE8AB672141C4228C04142D5A_il2cpp_TypeInfo_var))->get_Default_0();
		MidiFile_t00456CC0D22B31D61780718A31F002EFC5082774 * L_21;
		L_21 = Pattern_ToFile_m8030CBD7507AAAABE620CCC89EB4B088703A21F5(L_19, L_20, /*hidden argument*/NULL);
		// Debug.Log("Test MIDI file created.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral265A4651FB1F71BAF8A53859EC2D237C5C2CF448, /*hidden argument*/NULL);
		// return midiFile;
		return L_21;
	}
}
// System.Void DemoScript::InitializeFilePlayback(Melanchall.DryWetMidi.Core.MidiFile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoScript_InitializeFilePlayback_mA334B5FE949D5C991735B99D52408E9FB89357DD (DemoScript_t035174A3DB2A2A84B0052CF0F69798314D2232D8 * __this, MidiFile_t00456CC0D22B31D61780718A31F002EFC5082774 * ___midiFile0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DemoScript_OnNotesPlaybackFinished_m7A2BBC7B040F0268281D7A8E7922D8FB13DF124C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DemoScript_OnNotesPlaybackStarted_mEBAE6300FDC0DF0386E2627FD2565739EFA2E319_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1__ctor_m0DFCF20BA5A90DC393BC8D21FA5D77CEE8E99AE8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tD53285C13B6974AAACBA9FD9151014AF05E01516_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral17109A988CBB1F66E3937D5245653D7CCA420351);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA7984896866A736F9D12F10D6C6358521C694DED);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Initializing playback...");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralA7984896866A736F9D12F10D6C6358521C694DED, /*hidden argument*/NULL);
		// _playback = midiFile.GetPlayback(_outputDevice);
		MidiFile_t00456CC0D22B31D61780718A31F002EFC5082774 * L_0 = ___midiFile0;
		OutputDevice_t7A9B57531DCA6BF309413A7FACE2F48E261EC9BB * L_1 = __this->get__outputDevice_5();
		Playback_t57195DC933DF811AF3EF953E136F4B9610C70D3A * L_2;
		L_2 = PlaybackUtilities_GetPlayback_mA242856218F480C3C3B3A0839118CEEE23516FDB(L_0, L_1, (PlaybackSettings_tC075B746962B5D3073B0E0BC48BC4106C53C23C0 *)NULL, /*hidden argument*/NULL);
		__this->set__playback_6(L_2);
		// _playback.Loop = true;
		Playback_t57195DC933DF811AF3EF953E136F4B9610C70D3A * L_3 = __this->get__playback_6();
		Playback_set_Loop_mF1C603EB64A9D4AAF140CD55822A230F018476CA_inline(L_3, (bool)1, /*hidden argument*/NULL);
		// _playback.NotesPlaybackStarted += OnNotesPlaybackStarted;
		Playback_t57195DC933DF811AF3EF953E136F4B9610C70D3A * L_4 = __this->get__playback_6();
		EventHandler_1_tD53285C13B6974AAACBA9FD9151014AF05E01516 * L_5 = (EventHandler_1_tD53285C13B6974AAACBA9FD9151014AF05E01516 *)il2cpp_codegen_object_new(EventHandler_1_tD53285C13B6974AAACBA9FD9151014AF05E01516_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m0DFCF20BA5A90DC393BC8D21FA5D77CEE8E99AE8(L_5, __this, (intptr_t)((intptr_t)DemoScript_OnNotesPlaybackStarted_mEBAE6300FDC0DF0386E2627FD2565739EFA2E319_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_m0DFCF20BA5A90DC393BC8D21FA5D77CEE8E99AE8_RuntimeMethod_var);
		Playback_add_NotesPlaybackStarted_m46ED419B8C6BDF3B09258A2A3C2F8CEFD081719E(L_4, L_5, /*hidden argument*/NULL);
		// _playback.NotesPlaybackFinished += OnNotesPlaybackFinished;
		Playback_t57195DC933DF811AF3EF953E136F4B9610C70D3A * L_6 = __this->get__playback_6();
		EventHandler_1_tD53285C13B6974AAACBA9FD9151014AF05E01516 * L_7 = (EventHandler_1_tD53285C13B6974AAACBA9FD9151014AF05E01516 *)il2cpp_codegen_object_new(EventHandler_1_tD53285C13B6974AAACBA9FD9151014AF05E01516_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m0DFCF20BA5A90DC393BC8D21FA5D77CEE8E99AE8(L_7, __this, (intptr_t)((intptr_t)DemoScript_OnNotesPlaybackFinished_m7A2BBC7B040F0268281D7A8E7922D8FB13DF124C_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_m0DFCF20BA5A90DC393BC8D21FA5D77CEE8E99AE8_RuntimeMethod_var);
		Playback_add_NotesPlaybackFinished_m84BBD9B48A80767CF88F3D4B241D2E2191E8C3F6(L_6, L_7, /*hidden argument*/NULL);
		// Debug.Log("Playback initialized.");
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral17109A988CBB1F66E3937D5245653D7CCA420351, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void DemoScript::StartPlayback()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoScript_StartPlayback_m0A3750E637070DF7F478FE278D72DF8F492B11C7 (DemoScript_t035174A3DB2A2A84B0052CF0F69798314D2232D8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3B9EBE27FDDD0E7D927D93ED4D83673CE74ADE5D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Starting playback...");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral3B9EBE27FDDD0E7D927D93ED4D83673CE74ADE5D, /*hidden argument*/NULL);
		// _playback.Start();
		Playback_t57195DC933DF811AF3EF953E136F4B9610C70D3A * L_0 = __this->get__playback_6();
		Playback_Start_m6F696892B7F90D7CAC001529910F6DB09EBB5327(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void DemoScript::OnNotesPlaybackFinished(System.Object,Melanchall.DryWetMidi.Multimedia.NotesEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoScript_OnNotesPlaybackFinished_m7A2BBC7B040F0268281D7A8E7922D8FB13DF124C (DemoScript_t035174A3DB2A2A84B0052CF0F69798314D2232D8 * __this, RuntimeObject * ___sender0, NotesEventArgs_t32257D581DB8C05FAFF967215383C081CEAF9195 * ___e1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral141751B3E3BD5A346663DBD351A2EE01EB8AEDF9);
		s_Il2CppMethodInitialized = true;
	}
	{
		// LogNotes("Notes finished:", e);
		NotesEventArgs_t32257D581DB8C05FAFF967215383C081CEAF9195 * L_0 = ___e1;
		DemoScript_LogNotes_m1ED77CDD2699A6B57AAFF6D655DA3DBF219FC88C(__this, _stringLiteral141751B3E3BD5A346663DBD351A2EE01EB8AEDF9, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void DemoScript::OnNotesPlaybackStarted(System.Object,Melanchall.DryWetMidi.Multimedia.NotesEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoScript_OnNotesPlaybackStarted_mEBAE6300FDC0DF0386E2627FD2565739EFA2E319 (DemoScript_t035174A3DB2A2A84B0052CF0F69798314D2232D8 * __this, RuntimeObject * ___sender0, NotesEventArgs_t32257D581DB8C05FAFF967215383C081CEAF9195 * ___e1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2CAB7352D581563C66828F9A3DC5ED58B585BC44);
		s_Il2CppMethodInitialized = true;
	}
	{
		// LogNotes("Notes started:", e);
		NotesEventArgs_t32257D581DB8C05FAFF967215383C081CEAF9195 * L_0 = ___e1;
		DemoScript_LogNotes_m1ED77CDD2699A6B57AAFF6D655DA3DBF219FC88C(__this, _stringLiteral2CAB7352D581563C66828F9A3DC5ED58B585BC44, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void DemoScript::LogNotes(System.String,Melanchall.DryWetMidi.Multimedia.NotesEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoScript_LogNotes_m1ED77CDD2699A6B57AAFF6D655DA3DBF219FC88C (DemoScript_t035174A3DB2A2A84B0052CF0F69798314D2232D8 * __this, String_t* ___title0, NotesEventArgs_t32257D581DB8C05FAFF967215383C081CEAF9195 * ___e1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_TisNote_t72FA32C1F792DB6998277D23822C6FBBF619808C_TisString_t_mED9DB9A2BB6F6A474CC52215DC7925690A279DC8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2__ctor_m39B9D9ED874CA16084F241EC2E1D968DC38DB331_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tEDFF7C02ADD87D637C43084161242EA41259A2BA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CLogNotesU3Eb__11_0_m10BE402BA8F7E139F2D13E03C5DF314C7AA6B7EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tDE021ECD8EACE49080A257681D29E16DCF3F53F2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Func_2_tEDFF7C02ADD87D637C43084161242EA41259A2BA * G_B2_0 = NULL;
	RuntimeObject* G_B2_1 = NULL;
	String_t* G_B2_2 = NULL;
	StringBuilder_t * G_B2_3 = NULL;
	Func_2_tEDFF7C02ADD87D637C43084161242EA41259A2BA * G_B1_0 = NULL;
	RuntimeObject* G_B1_1 = NULL;
	String_t* G_B1_2 = NULL;
	StringBuilder_t * G_B1_3 = NULL;
	{
		// var message = new StringBuilder()
		//     .AppendLine(title)
		//     .AppendLine(string.Join(Environment.NewLine, e.Notes.Select(n => $"  {n}")))
		//     .ToString();
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9(L_0, /*hidden argument*/NULL);
		String_t* L_1 = ___title0;
		StringBuilder_t * L_2;
		L_2 = StringBuilder_AppendLine_m4FBF9761747825683B04B18842DF906473EEF7C8(L_0, L_1, /*hidden argument*/NULL);
		String_t* L_3;
		L_3 = Environment_get_NewLine_mD145C8EE917C986BAA7C5243DEFAF4D333C521B4(/*hidden argument*/NULL);
		NotesEventArgs_t32257D581DB8C05FAFF967215383C081CEAF9195 * L_4 = ___e1;
		RuntimeObject* L_5;
		L_5 = NotesEventArgs_get_Notes_mF2A186B97E400BA5CB9AB3ECC3D201E3097B2C61_inline(L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tDE021ECD8EACE49080A257681D29E16DCF3F53F2_il2cpp_TypeInfo_var);
		Func_2_tEDFF7C02ADD87D637C43084161242EA41259A2BA * L_6 = ((U3CU3Ec_tDE021ECD8EACE49080A257681D29E16DCF3F53F2_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDE021ECD8EACE49080A257681D29E16DCF3F53F2_il2cpp_TypeInfo_var))->get_U3CU3E9__11_0_3();
		Func_2_tEDFF7C02ADD87D637C43084161242EA41259A2BA * L_7 = L_6;
		G_B1_0 = L_7;
		G_B1_1 = L_5;
		G_B1_2 = L_3;
		G_B1_3 = L_2;
		if (L_7)
		{
			G_B2_0 = L_7;
			G_B2_1 = L_5;
			G_B2_2 = L_3;
			G_B2_3 = L_2;
			goto IL_0035;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tDE021ECD8EACE49080A257681D29E16DCF3F53F2_il2cpp_TypeInfo_var);
		U3CU3Ec_tDE021ECD8EACE49080A257681D29E16DCF3F53F2 * L_8 = ((U3CU3Ec_tDE021ECD8EACE49080A257681D29E16DCF3F53F2_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDE021ECD8EACE49080A257681D29E16DCF3F53F2_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Func_2_tEDFF7C02ADD87D637C43084161242EA41259A2BA * L_9 = (Func_2_tEDFF7C02ADD87D637C43084161242EA41259A2BA *)il2cpp_codegen_object_new(Func_2_tEDFF7C02ADD87D637C43084161242EA41259A2BA_il2cpp_TypeInfo_var);
		Func_2__ctor_m39B9D9ED874CA16084F241EC2E1D968DC38DB331(L_9, L_8, (intptr_t)((intptr_t)U3CU3Ec_U3CLogNotesU3Eb__11_0_m10BE402BA8F7E139F2D13E03C5DF314C7AA6B7EB_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_m39B9D9ED874CA16084F241EC2E1D968DC38DB331_RuntimeMethod_var);
		Func_2_tEDFF7C02ADD87D637C43084161242EA41259A2BA * L_10 = L_9;
		((U3CU3Ec_tDE021ECD8EACE49080A257681D29E16DCF3F53F2_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDE021ECD8EACE49080A257681D29E16DCF3F53F2_il2cpp_TypeInfo_var))->set_U3CU3E9__11_0_3(L_10);
		G_B2_0 = L_10;
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
		G_B2_3 = G_B1_3;
	}

IL_0035:
	{
		RuntimeObject* L_11;
		L_11 = Enumerable_Select_TisNote_t72FA32C1F792DB6998277D23822C6FBBF619808C_TisString_t_mED9DB9A2BB6F6A474CC52215DC7925690A279DC8(G_B2_1, G_B2_0, /*hidden argument*/Enumerable_Select_TisNote_t72FA32C1F792DB6998277D23822C6FBBF619808C_TisString_t_mED9DB9A2BB6F6A474CC52215DC7925690A279DC8_RuntimeMethod_var);
		String_t* L_12;
		L_12 = String_Join_m7E55204B5C94F9EB939D144E7EE684D016F90509(G_B2_2, L_11, /*hidden argument*/NULL);
		StringBuilder_t * L_13;
		L_13 = StringBuilder_AppendLine_m4FBF9761747825683B04B18842DF906473EEF7C8(G_B2_3, L_12, /*hidden argument*/NULL);
		String_t* L_14;
		L_14 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_13);
		// Debug.Log(message.Trim());
		String_t* L_15;
		L_15 = String_Trim_m3FEC641D7046124B7F381701903B50B5171DE0A2(L_14, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_15, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void DemoScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoScript__ctor_mD03E3354F1152C36D1CD19D173E4C58504E15FE7 (DemoScript_t035174A3DB2A2A84B0052CF0F69798314D2232D8 * __this, const RuntimeMethod* method)
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
// System.Void EffectObject::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EffectObject_Start_mCB72D72E83C5A204801DECF7F721DE10F8C25436 (EffectObject_t256C948AF9F8DB1A316D25FB9B8BAE64FD1B3C1C * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void EffectObject::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EffectObject_Update_mC1BE46CADEFA6B15CF6E33D0AF15CE4DF6F316D6 (EffectObject_t256C948AF9F8DB1A316D25FB9B8BAE64FD1B3C1C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Destroy(gameObject, lifetime);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		float L_1 = __this->get_lifetime_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_mAAAA103F4911E9FA18634BF9605C28559F5E2AC7(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void EffectObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EffectObject__ctor_m0AC7E5DCFC4D2AF373B31A09FA038A7D2ACBA1E3 (EffectObject_t256C948AF9F8DB1A316D25FB9B8BAE64FD1B3C1C * __this, const RuntimeMethod* method)
{
	{
		// public float lifetime = 1f;
		__this->set_lifetime_4((1.0f));
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
// System.Void GameManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Start_m26461AEF27E44DB8FECCBC19D6C9E228B658BF8E (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral34C62C0EA9964074E2383B62B1E943BBA2405B92);
		s_Il2CppMethodInitialized = true;
	}
	{
		// scorePerNote = 100;
		__this->set_scorePerNote_8(((int32_t)100));
		// scorePerPerfectNote = 150;
		__this->set_scorePerPerfectNote_9(((int32_t)150));
		// currentMulti = 1;
		__this->set_currentMulti_10(1);
		// instance = this;
		((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->set_instance_6(__this);
		// scoreText.text = "Score: 0";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get_scoreText_13();
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, _stringLiteral34C62C0EA9964074E2383B62B1E943BBA2405B92);
		// }
		return;
	}
}
// System.Void GameManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Update_mC9303BA7C3117BD861F49F8E36151CC52117E6C1 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	{
		// if (!startPlaying)
		bool L_0 = __this->get_startPlaying_4();
		if (L_0)
		{
			goto IL_0021;
		}
	}
	{
		// if(Input.anyKeyDown)
		bool L_1;
		L_1 = Input_get_anyKeyDown_m0E5B02352AC40A25BBE31F4532764279D5AF03A5(/*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		// startPlaying = true;
		__this->set_startPlaying_4((bool)1);
		// music.Play();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_2 = __this->get_music_15();
		AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1(L_2, /*hidden argument*/NULL);
	}

IL_0021:
	{
		// }
		return;
	}
}
// System.Void GameManager::NoteHit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_NoteHit_m0DC9EFC72076871721F3BCB8752F3B759BEA2CD2 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B00FE8D93C8DA57AEA59DB0FE808A827C3503B6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D2110161D78FB7F59434B3E566205F3A31E899F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB46E953D1EF50EAA2F09DB488AC9B9437CEC6395);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Hit on Time");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralB46E953D1EF50EAA2F09DB488AC9B9437CEC6395, /*hidden argument*/NULL);
		// if(currentMulti - 1 < multiThreshold.Length)
		int32_t L_0 = __this->get_currentMulti_10();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_1 = __this->get_multiThreshold_12();
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)1))) >= ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))))))
		{
			goto IL_0056;
		}
	}
	{
		// multiTracker++;
		int32_t L_2 = __this->get_multiTracker_11();
		__this->set_multiTracker_11(((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1)));
		// if (multiThreshold[currentMulti -1 ] <= multiTracker)
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_3 = __this->get_multiThreshold_12();
		int32_t L_4 = __this->get_currentMulti_10();
		int32_t L_5 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)1));
		int32_t L_6 = (L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5));
		int32_t L_7 = __this->get_multiTracker_11();
		if ((((int32_t)L_6) > ((int32_t)L_7)))
		{
			goto IL_0056;
		}
	}
	{
		// multiTracker = 0;
		__this->set_multiTracker_11(0);
		// currentMulti++;
		int32_t L_8 = __this->get_currentMulti_10();
		__this->set_currentMulti_10(((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1)));
	}

IL_0056:
	{
		// multiText.text = "Multipler: x" + currentMulti;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_9 = __this->get_multiText_14();
		int32_t* L_10 = __this->get_address_of_currentMulti_10();
		String_t* L_11;
		L_11 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_10, /*hidden argument*/NULL);
		String_t* L_12;
		L_12 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral4D2110161D78FB7F59434B3E566205F3A31E899F, L_11, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_9, L_12);
		// scoreText.text = "Score: " + currentScore;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_13 = __this->get_scoreText_13();
		int32_t* L_14 = __this->get_address_of_currentScore_7();
		String_t* L_15;
		L_15 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_14, /*hidden argument*/NULL);
		String_t* L_16;
		L_16 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral1B00FE8D93C8DA57AEA59DB0FE808A827C3503B6, L_15, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_13, L_16);
		// }
		return;
	}
}
// System.Void GameManager::NoteMiss()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_NoteMiss_mFF0DAADFF89185D5C7A711DFE4FC5CB2A68CB6B4 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D2110161D78FB7F59434B3E566205F3A31E899F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6955CD5C17DEEB2505D15147A8070387E35CCE73);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Miss");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral6955CD5C17DEEB2505D15147A8070387E35CCE73, /*hidden argument*/NULL);
		// currentMulti = 1;
		__this->set_currentMulti_10(1);
		// multiTracker = 0;
		__this->set_multiTracker_11(0);
		// multiText.text = "Multipler: x" + currentMulti;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get_multiText_14();
		int32_t* L_1 = __this->get_address_of_currentMulti_10();
		String_t* L_2;
		L_2 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_1, /*hidden argument*/NULL);
		String_t* L_3;
		L_3 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral4D2110161D78FB7F59434B3E566205F3A31E899F, L_2, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_3);
		// }
		return;
	}
}
// System.Void GameManager::NormalHit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_NormalHit_mE7A795F0901EEA4D0DEEFFFC43313D880A5D00F8 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	{
		// currentScore += scorePerNote * currentMulti;
		int32_t L_0 = __this->get_currentScore_7();
		int32_t L_1 = __this->get_scorePerNote_8();
		int32_t L_2 = __this->get_currentMulti_10();
		__this->set_currentScore_7(((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_1, (int32_t)L_2)))));
		// NoteHit();
		GameManager_NoteHit_m0DC9EFC72076871721F3BCB8752F3B759BEA2CD2(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameManager::PerfectHit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_PerfectHit_mB67E61EA3E8B72831F89C43212495DB68F2E4172 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	{
		// currentScore += scorePerPerfectNote * currentMulti;
		int32_t L_0 = __this->get_currentScore_7();
		int32_t L_1 = __this->get_scorePerPerfectNote_9();
		int32_t L_2 = __this->get_currentMulti_10();
		__this->set_currentScore_7(((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_1, (int32_t)L_2)))));
		// NoteHit();
		GameManager_NoteHit_m0DC9EFC72076871721F3BCB8752F3B759BEA2CD2(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager__ctor_mE8666F6D0CA9C31E16B719F79780DC4B0245B64D (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
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
// System.Void InvertCreator::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvertCreator_Start_mA9EC99377A96E3EEAC83F43BEFB3647EE5D4A986 (InvertCreator_t73F06C8608898BB962DB7AFF980F9AA9630506FA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m98D387B909AC36B37BF964576557C064222B3C79_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// rT = GetComponent<RectTransform>();
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_0;
		L_0 = Component_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m98D387B909AC36B37BF964576557C064222B3C79(__this, /*hidden argument*/Component_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m98D387B909AC36B37BF964576557C064222B3C79_RuntimeMethod_var);
		__this->set_rT_8(L_0);
		// StartCoroutine(startCount());
		RuntimeObject* L_1;
		L_1 = InvertCreator_startCount_mA202309E51B575B2413E8E2164A59088EAD7AF8D(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_2;
		L_2 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_1, /*hidden argument*/NULL);
		// delayEnd = false;
		__this->set_delayEnd_9((bool)0);
		// timer = 0;
		__this->set_timer_10((0.0f));
		// currentSize = 1;
		__this->set_currentSize_6((1.0f));
		// }
		return;
	}
}
// System.Void InvertCreator::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvertCreator_Update_mF29948425E6E3C67F095D7291DAA803C370C876D (InvertCreator_t73F06C8608898BB962DB7AFF980F9AA9630506FA * __this, const RuntimeMethod* method)
{
	{
		// if(delayEnd)
		bool L_0 = __this->get_delayEnd_9();
		if (!L_0)
		{
			goto IL_0081;
		}
	}
	{
		// if (timer > maxTimer && rT.localScale.x <= maxSize)
		float L_1 = __this->get_timer_10();
		float L_2 = __this->get_maxTimer_4();
		if ((!(((float)L_1) > ((float)L_2))))
		{
			goto IL_006f;
		}
	}
	{
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_3 = __this->get_rT_8();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_3, /*hidden argument*/NULL);
		float L_5 = L_4.get_x_2();
		float L_6 = __this->get_maxSize_5();
		if ((!(((float)L_5) <= ((float)L_6))))
		{
			goto IL_006f;
		}
	}
	{
		// timer = 0;
		__this->set_timer_10((0.0f));
		// currentSize += 1.5f;
		float L_7 = __this->get_currentSize_6();
		__this->set_currentSize_6(((float)il2cpp_codegen_add((float)L_7, (float)(1.5f))));
		// rT.localScale = new Vector3 (currentSize, currentSize, currentSize);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_8 = __this->get_rT_8();
		float L_9 = __this->get_currentSize_6();
		float L_10 = __this->get_currentSize_6();
		float L_11 = __this->get_currentSize_6();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), L_9, L_10, L_11, /*hidden argument*/NULL);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_8, L_12, /*hidden argument*/NULL);
		// }
		goto IL_0081;
	}

IL_006f:
	{
		// timer += Time.deltaTime;
		float L_13 = __this->get_timer_10();
		float L_14;
		L_14 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_timer_10(((float)il2cpp_codegen_add((float)L_13, (float)L_14)));
	}

IL_0081:
	{
		// if(rT.localScale.x == maxSize)
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_15 = __this->get_rT_8();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16;
		L_16 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_15, /*hidden argument*/NULL);
		float L_17 = L_16.get_x_2();
		float L_18 = __this->get_maxSize_5();
		if ((!(((float)L_17) == ((float)L_18))))
		{
			goto IL_00d1;
		}
	}
	{
		// timer = 0;
		__this->set_timer_10((0.0f));
		// currentSize = 1.5f;
		__this->set_currentSize_6((1.5f));
		// rT.localScale = new Vector3(currentSize, currentSize, currentSize);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_19 = __this->get_rT_8();
		float L_20 = __this->get_currentSize_6();
		float L_21 = __this->get_currentSize_6();
		float L_22 = __this->get_currentSize_6();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_23), L_20, L_21, L_22, /*hidden argument*/NULL);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_19, L_23, /*hidden argument*/NULL);
	}

IL_00d1:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator InvertCreator::startCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InvertCreator_startCount_mA202309E51B575B2413E8E2164A59088EAD7AF8D (InvertCreator_t73F06C8608898BB962DB7AFF980F9AA9630506FA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CstartCountU3Ed__9_tC6AEADF32799B25FD8FC3FAE295448A88287AB6D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CstartCountU3Ed__9_tC6AEADF32799B25FD8FC3FAE295448A88287AB6D * L_0 = (U3CstartCountU3Ed__9_tC6AEADF32799B25FD8FC3FAE295448A88287AB6D *)il2cpp_codegen_object_new(U3CstartCountU3Ed__9_tC6AEADF32799B25FD8FC3FAE295448A88287AB6D_il2cpp_TypeInfo_var);
		U3CstartCountU3Ed__9__ctor_mA2E09348D1A944907445AB986E8D86F94CE78CC7(L_0, 0, /*hidden argument*/NULL);
		U3CstartCountU3Ed__9_tC6AEADF32799B25FD8FC3FAE295448A88287AB6D * L_1 = L_0;
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void InvertCreator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvertCreator__ctor_mCAF7A6CE9F6EE8B1779B588DCD3062AE93E872B8 (InvertCreator_t73F06C8608898BB962DB7AFF980F9AA9630506FA * __this, const RuntimeMethod* method)
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
// System.Void Lane::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lane_Start_mAF3EDA561F50597E480E918EFC3CD85135AFC421 (Lane_t286B164399771EA0ED4119258145C46B5AFBD3CF * __this, const RuntimeMethod* method)
{
	{
		// option = 0;
		__this->set_option_13(0);
		// }
		return;
	}
}
// System.Void Lane::SetTimeStamps(Melanchall.DryWetMidi.Interaction.Note[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lane_SetTimeStamps_mFCD9EEF3C1C7BCBBE563F12740F06ED78FA6FC42 (Lane_t286B164399771EA0ED4119258145C46B5AFBD3CF * __this, NoteU5BU5D_tCBBDF8452DE17E526D80118C9E6926262C9BD7E9* ___array0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m56E93B74F5254C198272F09C8E4B09483184B929_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SongManager_t0B58391B2DFB12045E717021CF4CF7EE474665A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeConverter_ConvertTo_TisMetricTimeSpan_t6BCD0FA647C5BC5289D584F4CF72AC69127E588D_m94362943FAEE201DEBF356CA08FC89AF1EAF8EBA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	NoteU5BU5D_tCBBDF8452DE17E526D80118C9E6926262C9BD7E9* V_0 = NULL;
	int32_t V_1 = 0;
	Note_t72FA32C1F792DB6998277D23822C6FBBF619808C * V_2 = NULL;
	MetricTimeSpan_t6BCD0FA647C5BC5289D584F4CF72AC69127E588D * V_3 = NULL;
	{
		// foreach (var note in array)
		NoteU5BU5D_tCBBDF8452DE17E526D80118C9E6926262C9BD7E9* L_0 = ___array0;
		V_0 = L_0;
		V_1 = 0;
		goto IL_0068;
	}

IL_0006:
	{
		// foreach (var note in array)
		NoteU5BU5D_tCBBDF8452DE17E526D80118C9E6926262C9BD7E9* L_1 = V_0;
		int32_t L_2 = V_1;
		int32_t L_3 = L_2;
		Note_t72FA32C1F792DB6998277D23822C6FBBF619808C * L_4 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = L_4;
		// if (note.NoteName == noteRestriction)
		Note_t72FA32C1F792DB6998277D23822C6FBBF619808C * L_5 = V_2;
		int32_t L_6;
		L_6 = Note_get_NoteName_m39956BA754C289AE99BE52A21891F6C9595EBEBF(L_5, /*hidden argument*/NULL);
		int32_t L_7 = __this->get_noteRestriction_4();
		if ((!(((uint32_t)L_6) == ((uint32_t)L_7))))
		{
			goto IL_0064;
		}
	}
	{
		// var metricTimeSpan = TimeConverter.ConvertTo<MetricTimeSpan>(note.Time, SongManager.midiFile.GetTempoMap());
		Note_t72FA32C1F792DB6998277D23822C6FBBF619808C * L_8 = V_2;
		int64_t L_9;
		L_9 = Note_get_Time_m2DC52518A81B561040A026D35641400C9BB93D52(L_8, /*hidden argument*/NULL);
		MidiFile_t00456CC0D22B31D61780718A31F002EFC5082774 * L_10 = ((SongManager_t0B58391B2DFB12045E717021CF4CF7EE474665A3_StaticFields*)il2cpp_codegen_static_fields_for(SongManager_t0B58391B2DFB12045E717021CF4CF7EE474665A3_il2cpp_TypeInfo_var))->get_midiFile_14();
		TempoMap_t2C66560BA5D33AACE8AB672141C4228C04142D5A * L_11;
		L_11 = TempoMapManagingUtilities_GetTempoMap_m4004D524AA5FE6B4507145A161BB3A1F3AB02BD6(L_10, /*hidden argument*/NULL);
		MetricTimeSpan_t6BCD0FA647C5BC5289D584F4CF72AC69127E588D * L_12;
		L_12 = TimeConverter_ConvertTo_TisMetricTimeSpan_t6BCD0FA647C5BC5289D584F4CF72AC69127E588D_m94362943FAEE201DEBF356CA08FC89AF1EAF8EBA(L_9, L_11, /*hidden argument*/TimeConverter_ConvertTo_TisMetricTimeSpan_t6BCD0FA647C5BC5289D584F4CF72AC69127E588D_m94362943FAEE201DEBF356CA08FC89AF1EAF8EBA_RuntimeMethod_var);
		V_3 = L_12;
		// timeStamps.Add((double)metricTimeSpan.Minutes * 60f + metricTimeSpan.Seconds + (double)metricTimeSpan.Milliseconds / 1000f);
		List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC * L_13 = __this->get_timeStamps_8();
		MetricTimeSpan_t6BCD0FA647C5BC5289D584F4CF72AC69127E588D * L_14 = V_3;
		int32_t L_15;
		L_15 = MetricTimeSpan_get_Minutes_mCA5183F51EF86229800D7B1990D4C60E24D4DC04(L_14, /*hidden argument*/NULL);
		MetricTimeSpan_t6BCD0FA647C5BC5289D584F4CF72AC69127E588D * L_16 = V_3;
		int32_t L_17;
		L_17 = MetricTimeSpan_get_Seconds_mF0D3E03E0484715655AD54147FE753ACE5195641(L_16, /*hidden argument*/NULL);
		MetricTimeSpan_t6BCD0FA647C5BC5289D584F4CF72AC69127E588D * L_18 = V_3;
		int32_t L_19;
		L_19 = MetricTimeSpan_get_Milliseconds_mCFC12277E4AE8EEEB2633FC9B5ACB26488B3F0EA(L_18, /*hidden argument*/NULL);
		List_1_Add_m56E93B74F5254C198272F09C8E4B09483184B929(L_13, ((double)il2cpp_codegen_add((double)((double)il2cpp_codegen_add((double)((double)il2cpp_codegen_multiply((double)((double)((double)L_15)), (double)(60.0))), (double)((double)((double)L_17)))), (double)((double)((double)((double)((double)L_19))/(double)(1000.0))))), /*hidden argument*/List_1_Add_m56E93B74F5254C198272F09C8E4B09483184B929_RuntimeMethod_var);
	}

IL_0064:
	{
		int32_t L_20 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1));
	}

IL_0068:
	{
		// foreach (var note in array)
		int32_t L_21 = V_1;
		NoteU5BU5D_tCBBDF8452DE17E526D80118C9E6926262C9BD7E9* L_22 = V_0;
		if ((((int32_t)L_21) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_22)->max_length))))))
		{
			goto IL_0006;
		}
	}
	{
		// StartCoroutine(WaittoSwicth());
		RuntimeObject* L_23;
		L_23 = Lane_WaittoSwicth_mFF60727E063849D9D620C72CD0D30D0B53C4AC3F(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_24;
		L_24 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_23, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Lane::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lane_Update_mC90108FD4EB0D04E8CF079BC73BB932546BFC1DB (Lane_t286B164399771EA0ED4119258145C46B5AFBD3CF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisNoteObject_tB227B82DE6D9050A93DC7A2F5A32C79C696F0973_m8B9AB498238C48116AD36E6695809EC83C985244_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mFFF48FBBEC231046FE2B8DB9D222FABF7CFDA6AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mC1A91036A8488F4B39DA566C71D9631B796DCBE2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m31A9E37299AA6C7637D3CB1E55556B22883D2A06_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mA97FC7588319092C5157A79FA19233846EAC0820_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SongManager_t0B58391B2DFB12045E717021CF4CF7EE474665A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7B5058A935046849B2F1B8D279BA1332E8A54599);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAAD7E53D5D473B0C6A1EDDD7ACD1B7BB79B3BEDD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB28922D4CBB047742711F74389D967A03809C34C);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_0 = NULL;
	double V_1 = 0.0;
	double V_2 = 0.0;
	double V_3 = 0.0;
	{
		// if (spawnIndex < timeStamps.Count)
		int32_t L_0 = __this->get_spawnIndex_11();
		List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC * L_1 = __this->get_timeStamps_8();
		int32_t L_2;
		L_2 = List_1_get_Count_mC1A91036A8488F4B39DA566C71D9631B796DCBE2_inline(L_1, /*hidden argument*/List_1_get_Count_mC1A91036A8488F4B39DA566C71D9631B796DCBE2_RuntimeMethod_var);
		if ((((int32_t)L_0) >= ((int32_t)L_2)))
		{
			goto IL_008c;
		}
	}
	{
		// if (SongManager.GetAudioSourceTime() >= timeStamps[spawnIndex] - SongManager.Instance.noteTime)
		double L_3;
		L_3 = SongManager_GetAudioSourceTime_m26D5B6F69E4377F3EAA9E79CE33F4360A852B01D(/*hidden argument*/NULL);
		List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC * L_4 = __this->get_timeStamps_8();
		int32_t L_5 = __this->get_spawnIndex_11();
		double L_6;
		L_6 = List_1_get_Item_m31A9E37299AA6C7637D3CB1E55556B22883D2A06_inline(L_4, L_5, /*hidden argument*/List_1_get_Item_m31A9E37299AA6C7637D3CB1E55556B22883D2A06_RuntimeMethod_var);
		SongManager_t0B58391B2DFB12045E717021CF4CF7EE474665A3 * L_7 = ((SongManager_t0B58391B2DFB12045E717021CF4CF7EE474665A3_StaticFields*)il2cpp_codegen_static_fields_for(SongManager_t0B58391B2DFB12045E717021CF4CF7EE474665A3_il2cpp_TypeInfo_var))->get_Instance_4();
		float L_8 = L_7->get_noteTime_11();
		if ((!(((double)L_3) >= ((double)((double)il2cpp_codegen_subtract((double)L_6, (double)((double)((double)L_8))))))))
		{
			goto IL_008c;
		}
	}
	{
		// var note = Instantiate(notePrefab[option], transform);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_9 = __this->get_notePrefab_6();
		int32_t L_10 = __this->get_option_13();
		int32_t L_11 = L_10;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12 = (L_9)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_11));
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_13;
		L_13 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14;
		L_14 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8(L_12, L_13, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8_RuntimeMethod_var);
		V_0 = L_14;
		// notes.Add(note.GetComponent<NoteObject>());
		List_1_t30C93A65DA86A6C517E439B0040B2AE67DE85112 * L_15 = __this->get_notes_7();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_16 = V_0;
		NoteObject_tB227B82DE6D9050A93DC7A2F5A32C79C696F0973 * L_17;
		L_17 = GameObject_GetComponent_TisNoteObject_tB227B82DE6D9050A93DC7A2F5A32C79C696F0973_m8B9AB498238C48116AD36E6695809EC83C985244(L_16, /*hidden argument*/GameObject_GetComponent_TisNoteObject_tB227B82DE6D9050A93DC7A2F5A32C79C696F0973_m8B9AB498238C48116AD36E6695809EC83C985244_RuntimeMethod_var);
		List_1_Add_mFFF48FBBEC231046FE2B8DB9D222FABF7CFDA6AE(L_15, L_17, /*hidden argument*/List_1_Add_mFFF48FBBEC231046FE2B8DB9D222FABF7CFDA6AE_RuntimeMethod_var);
		// note.GetComponent<NoteObject>().assignedTime = (float)timeStamps[spawnIndex];
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_18 = V_0;
		NoteObject_tB227B82DE6D9050A93DC7A2F5A32C79C696F0973 * L_19;
		L_19 = GameObject_GetComponent_TisNoteObject_tB227B82DE6D9050A93DC7A2F5A32C79C696F0973_m8B9AB498238C48116AD36E6695809EC83C985244(L_18, /*hidden argument*/GameObject_GetComponent_TisNoteObject_tB227B82DE6D9050A93DC7A2F5A32C79C696F0973_m8B9AB498238C48116AD36E6695809EC83C985244_RuntimeMethod_var);
		List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC * L_20 = __this->get_timeStamps_8();
		int32_t L_21 = __this->get_spawnIndex_11();
		double L_22;
		L_22 = List_1_get_Item_m31A9E37299AA6C7637D3CB1E55556B22883D2A06_inline(L_20, L_21, /*hidden argument*/List_1_get_Item_m31A9E37299AA6C7637D3CB1E55556B22883D2A06_RuntimeMethod_var);
		L_19->set_assignedTime_5(((float)((float)L_22)));
		// spawnIndex++;
		int32_t L_23 = __this->get_spawnIndex_11();
		__this->set_spawnIndex_11(((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1)));
	}

IL_008c:
	{
		// if (inputIndex < timeStamps.Count)
		int32_t L_24 = __this->get_inputIndex_12();
		List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC * L_25 = __this->get_timeStamps_8();
		int32_t L_26;
		L_26 = List_1_get_Count_mC1A91036A8488F4B39DA566C71D9631B796DCBE2_inline(L_25, /*hidden argument*/List_1_get_Count_mC1A91036A8488F4B39DA566C71D9631B796DCBE2_RuntimeMethod_var);
		if ((((int32_t)L_24) >= ((int32_t)L_26)))
		{
			goto IL_0199;
		}
	}
	{
		// double timeStamp = timeStamps[inputIndex];
		List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC * L_27 = __this->get_timeStamps_8();
		int32_t L_28 = __this->get_inputIndex_12();
		double L_29;
		L_29 = List_1_get_Item_m31A9E37299AA6C7637D3CB1E55556B22883D2A06_inline(L_27, L_28, /*hidden argument*/List_1_get_Item_m31A9E37299AA6C7637D3CB1E55556B22883D2A06_RuntimeMethod_var);
		V_1 = L_29;
		// double marginOfError = SongManager.Instance.marginOfError;
		SongManager_t0B58391B2DFB12045E717021CF4CF7EE474665A3 * L_30 = ((SongManager_t0B58391B2DFB12045E717021CF4CF7EE474665A3_StaticFields*)il2cpp_codegen_static_fields_for(SongManager_t0B58391B2DFB12045E717021CF4CF7EE474665A3_il2cpp_TypeInfo_var))->get_Instance_4();
		double L_31 = L_30->get_marginOfError_8();
		V_2 = L_31;
		// double audioTime = SongManager.GetAudioSourceTime() - (SongManager.Instance.inputDelayInMilliseconds / 1000.0);
		double L_32;
		L_32 = SongManager_GetAudioSourceTime_m26D5B6F69E4377F3EAA9E79CE33F4360A852B01D(/*hidden argument*/NULL);
		SongManager_t0B58391B2DFB12045E717021CF4CF7EE474665A3 * L_33 = ((SongManager_t0B58391B2DFB12045E717021CF4CF7EE474665A3_StaticFields*)il2cpp_codegen_static_fields_for(SongManager_t0B58391B2DFB12045E717021CF4CF7EE474665A3_il2cpp_TypeInfo_var))->get_Instance_4();
		int32_t L_34 = L_33->get_inputDelayInMilliseconds_9();
		V_3 = ((double)il2cpp_codegen_subtract((double)L_32, (double)((double)((double)((double)((double)L_34))/(double)(1000.0)))));
		// if (Input.GetKeyDown(input))
		int32_t L_35 = __this->get_input_5();
		bool L_36;
		L_36 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(L_35, /*hidden argument*/NULL);
		if (!L_36)
		{
			goto IL_0165;
		}
	}
	{
		// if (Math.Abs(audioTime - timeStamp) < marginOfError)
		double L_37 = V_3;
		double L_38 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		double L_39;
		L_39 = fabs(((double)il2cpp_codegen_subtract((double)L_37, (double)L_38)));
		double L_40 = V_2;
		if ((!(((double)L_39) < ((double)L_40))))
		{
			goto IL_013e;
		}
	}
	{
		// Hit();
		Lane_Hit_m9B70538FFEE33B0D99ABB3F1843B7C3BA7E8F81C(__this, /*hidden argument*/NULL);
		// print($"Hit on {inputIndex} note");
		int32_t L_41 = __this->get_inputIndex_12();
		int32_t L_42 = L_41;
		RuntimeObject * L_43 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_42);
		String_t* L_44;
		L_44 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteral7B5058A935046849B2F1B8D279BA1332E8A54599, L_43, /*hidden argument*/NULL);
		MonoBehaviour_print_m4F113B89EC1C221CAC6EC64365E6DAD0AF86F090(L_44, /*hidden argument*/NULL);
		// Destroy(notes[inputIndex].gameObject);
		List_1_t30C93A65DA86A6C517E439B0040B2AE67DE85112 * L_45 = __this->get_notes_7();
		int32_t L_46 = __this->get_inputIndex_12();
		NoteObject_tB227B82DE6D9050A93DC7A2F5A32C79C696F0973 * L_47;
		L_47 = List_1_get_Item_mA97FC7588319092C5157A79FA19233846EAC0820_inline(L_45, L_46, /*hidden argument*/List_1_get_Item_mA97FC7588319092C5157A79FA19233846EAC0820_RuntimeMethod_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_48;
		L_48 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_47, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_48, /*hidden argument*/NULL);
		// inputIndex++;
		int32_t L_49 = __this->get_inputIndex_12();
		__this->set_inputIndex_12(((int32_t)il2cpp_codegen_add((int32_t)L_49, (int32_t)1)));
		// }
		goto IL_0165;
	}

IL_013e:
	{
		// print($"Hit inaccurate on {inputIndex} note with {Math.Abs(audioTime - timeStamp)} delay");
		int32_t L_50 = __this->get_inputIndex_12();
		int32_t L_51 = L_50;
		RuntimeObject * L_52 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_51);
		double L_53 = V_3;
		double L_54 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		double L_55;
		L_55 = fabs(((double)il2cpp_codegen_subtract((double)L_53, (double)L_54)));
		double L_56 = L_55;
		RuntimeObject * L_57 = Box(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var, &L_56);
		String_t* L_58;
		L_58 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66(_stringLiteralAAD7E53D5D473B0C6A1EDDD7ACD1B7BB79B3BEDD, L_52, L_57, /*hidden argument*/NULL);
		MonoBehaviour_print_m4F113B89EC1C221CAC6EC64365E6DAD0AF86F090(L_58, /*hidden argument*/NULL);
	}

IL_0165:
	{
		// if (timeStamp + marginOfError <= audioTime)
		double L_59 = V_1;
		double L_60 = V_2;
		double L_61 = V_3;
		if ((!(((double)((double)il2cpp_codegen_add((double)L_59, (double)L_60))) <= ((double)L_61))))
		{
			goto IL_0199;
		}
	}
	{
		// Miss();
		Lane_Miss_m9DB4EFE35069C31DB938E50E601402A3898CCE07(__this, /*hidden argument*/NULL);
		// print($"Missed {inputIndex} note");
		int32_t L_62 = __this->get_inputIndex_12();
		int32_t L_63 = L_62;
		RuntimeObject * L_64 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_63);
		String_t* L_65;
		L_65 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteralB28922D4CBB047742711F74389D967A03809C34C, L_64, /*hidden argument*/NULL);
		MonoBehaviour_print_m4F113B89EC1C221CAC6EC64365E6DAD0AF86F090(L_65, /*hidden argument*/NULL);
		// inputIndex++;
		int32_t L_66 = __this->get_inputIndex_12();
		__this->set_inputIndex_12(((int32_t)il2cpp_codegen_add((int32_t)L_66, (int32_t)1)));
	}

IL_0199:
	{
		// }
		return;
	}
}
// System.Void Lane::Hit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lane_Hit_m9B70538FFEE33B0D99ABB3F1843B7C3BA7E8F81C (Lane_t286B164399771EA0ED4119258145C46B5AFBD3CF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ScoreManager.Hit();
		ScoreManager_Hit_mDE10830F41216D35EC449F36401BFF25A782D475(/*hidden argument*/NULL);
		// Instantiate(hitEffect);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_hitEffect_9();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33(L_0, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Lane::Miss()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lane_Miss_m9DB4EFE35069C31DB938E50E601402A3898CCE07 (Lane_t286B164399771EA0ED4119258145C46B5AFBD3CF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ScoreManager.Miss();
		ScoreManager_Miss_m87DE88C42203D03B267D97755D51E38591B69318(/*hidden argument*/NULL);
		// Instantiate(missEffect);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_missEffect_10();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33(L_0, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Collections.IEnumerator Lane::WaittoSwicth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Lane_WaittoSwicth_mFF60727E063849D9D620C72CD0D30D0B53C4AC3F (Lane_t286B164399771EA0ED4119258145C46B5AFBD3CF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CWaittoSwicthU3Ed__15_t615CB7E544E6313578445BF522D046CCFE0D1DC8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CWaittoSwicthU3Ed__15_t615CB7E544E6313578445BF522D046CCFE0D1DC8 * L_0 = (U3CWaittoSwicthU3Ed__15_t615CB7E544E6313578445BF522D046CCFE0D1DC8 *)il2cpp_codegen_object_new(U3CWaittoSwicthU3Ed__15_t615CB7E544E6313578445BF522D046CCFE0D1DC8_il2cpp_TypeInfo_var);
		U3CWaittoSwicthU3Ed__15__ctor_mAAE9DF1461A62C7F7181C4EC7A103E2D37B291F0(L_0, 0, /*hidden argument*/NULL);
		U3CWaittoSwicthU3Ed__15_t615CB7E544E6313578445BF522D046CCFE0D1DC8 * L_1 = L_0;
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void Lane::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lane__ctor_mE318703673D6AFB97234C2071FF41498C532A075 (Lane_t286B164399771EA0ED4119258145C46B5AFBD3CF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m096216F17BF757CF4C7F937E038E1F8D5DD330E1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mA0CE4C11D163EF853E9E6A0FD3C75486EF3A0F31_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t30C93A65DA86A6C517E439B0040B2AE67DE85112_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// List<NoteObject> notes = new List<NoteObject>();
		List_1_t30C93A65DA86A6C517E439B0040B2AE67DE85112 * L_0 = (List_1_t30C93A65DA86A6C517E439B0040B2AE67DE85112 *)il2cpp_codegen_object_new(List_1_t30C93A65DA86A6C517E439B0040B2AE67DE85112_il2cpp_TypeInfo_var);
		List_1__ctor_m096216F17BF757CF4C7F937E038E1F8D5DD330E1(L_0, /*hidden argument*/List_1__ctor_m096216F17BF757CF4C7F937E038E1F8D5DD330E1_RuntimeMethod_var);
		__this->set_notes_7(L_0);
		// public List<double> timeStamps = new List<double>();
		List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC * L_1 = (List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC *)il2cpp_codegen_object_new(List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC_il2cpp_TypeInfo_var);
		List_1__ctor_mA0CE4C11D163EF853E9E6A0FD3C75486EF3A0F31(L_1, /*hidden argument*/List_1__ctor_mA0CE4C11D163EF853E9E6A0FD3C75486EF3A0F31_RuntimeMethod_var);
		__this->set_timeStamps_8(L_1);
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
// System.Void Menu::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Menu_Start_m50A1B94A03D9E9BE1E2B69E931A1E02943BB2F36 (Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Menu::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Menu_Update_mDF23A59FAEDA72A8B115C4C3CF2ACCAFC6B415AD (Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Menu::LoadGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Menu_LoadGame_m42B03F92D192E00C57E3B7A79F1E49C9090ED972 (Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3F86111F44D66C543B732847E04E3C2A5B38BB3D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("Main");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteral3F86111F44D66C543B732847E04E3C2A5B38BB3D, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Menu::QuitGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Menu_QuitGame_mC0A307F2681D0D684232694A10404FAAA8269A7A (Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6 * __this, const RuntimeMethod* method)
{
	{
		// Application.Quit();
		Application_Quit_m8D720E5092786C2EE32310D85FE61C253D3B1F2A(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Menu::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Menu__ctor_m7EE9043A2E9DD126B6F69DD8AE3BC9CBDF6E2134 (Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6 * __this, const RuntimeMethod* method)
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
// System.Void NoteObject::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoteObject_Start_m1152423213673AAE047F156806FE2A47BC2B7041 (NoteObject_tB227B82DE6D9050A93DC7A2F5A32C79C696F0973 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// timeInstantiated = SongManager.GetAudioSourceTime();
		double L_0;
		L_0 = SongManager_GetAudioSourceTime_m26D5B6F69E4377F3EAA9E79CE33F4360A852B01D(/*hidden argument*/NULL);
		__this->set_timeInstantiated_4(L_0);
		// sR = GetComponent<SpriteRenderer>();
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_1;
		L_1 = Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491(__this, /*hidden argument*/Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491_RuntimeMethod_var);
		__this->set_sR_6(L_1);
		// }
		return;
	}
}
// System.Void NoteObject::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoteObject_Update_mBA960C4B040BA044041C17240390F15CF5B1CA68 (NoteObject_tB227B82DE6D9050A93DC7A2F5A32C79C696F0973 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SongManager_t0B58391B2DFB12045E717021CF4CF7EE474665A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// double timeSinceInstantiated = SongManager.GetAudioSourceTime() - timeInstantiated;
		double L_0;
		L_0 = SongManager_GetAudioSourceTime_m26D5B6F69E4377F3EAA9E79CE33F4360A852B01D(/*hidden argument*/NULL);
		double L_1 = __this->get_timeInstantiated_4();
		// float t = (float)(timeSinceInstantiated / (SongManager.Instance.noteTime * 2));
		SongManager_t0B58391B2DFB12045E717021CF4CF7EE474665A3 * L_2 = ((SongManager_t0B58391B2DFB12045E717021CF4CF7EE474665A3_StaticFields*)il2cpp_codegen_static_fields_for(SongManager_t0B58391B2DFB12045E717021CF4CF7EE474665A3_il2cpp_TypeInfo_var))->get_Instance_4();
		float L_3 = L_2->get_noteTime_11();
		V_0 = ((float)((float)((double)((double)((double)il2cpp_codegen_subtract((double)L_0, (double)L_1))/(double)((double)((double)((float)il2cpp_codegen_multiply((float)L_3, (float)(2.0f)))))))));
		// if (t > 1)
		float L_4 = V_0;
		if ((!(((float)L_4) > ((float)(1.0f)))))
		{
			goto IL_0034;
		}
	}
	{
		// Destroy(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_5, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0034:
	{
		// transform.localPosition = Vector3.Lerp(Vector3.up * SongManager.Instance.noteSpawnY, Vector3.up * SongManager.Instance.noteDespawnY, t);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50(/*hidden argument*/NULL);
		SongManager_t0B58391B2DFB12045E717021CF4CF7EE474665A3 * L_8 = ((SongManager_t0B58391B2DFB12045E717021CF4CF7EE474665A3_StaticFields*)il2cpp_codegen_static_fields_for(SongManager_t0B58391B2DFB12045E717021CF4CF7EE474665A3_il2cpp_TypeInfo_var))->get_Instance_4();
		float L_9 = L_8->get_noteSpawnY_12();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		L_10 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_7, L_9, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		L_11 = Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50(/*hidden argument*/NULL);
		SongManager_t0B58391B2DFB12045E717021CF4CF7EE474665A3 * L_12 = ((SongManager_t0B58391B2DFB12045E717021CF4CF7EE474665A3_StaticFields*)il2cpp_codegen_static_fields_for(SongManager_t0B58391B2DFB12045E717021CF4CF7EE474665A3_il2cpp_TypeInfo_var))->get_Instance_4();
		float L_13;
		L_13 = SongManager_get_noteDespawnY_mD49CE11BAB953C4CAC13636EBE37C831F43A11E4(L_12, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14;
		L_14 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_11, L_13, /*hidden argument*/NULL);
		float L_15 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16;
		L_16 = Vector3_Lerp_m8E095584FFA10CF1D3EABCD04F4C83FB82EC5524_inline(L_10, L_14, L_15, /*hidden argument*/NULL);
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_6, L_16, /*hidden argument*/NULL);
		// GetComponent<SpriteRenderer>().enabled = true;
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_17;
		L_17 = Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491(__this, /*hidden argument*/Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491_RuntimeMethod_var);
		Renderer_set_enabled_mFFBA418C428C1B2B151C77B879DD10C393D9D95B(L_17, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void NoteObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoteObject__ctor_m981FBAE239EF87D8B067EE55CB282231B4C021E8 (NoteObject_tB227B82DE6D9050A93DC7A2F5A32C79C696F0973 * __this, const RuntimeMethod* method)
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
// System.Void ScoreManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreManager_Start_mD3AD35C8B826532687C5600F2BF465093D6D1F91 (ScoreManager_t52E31A532CA8B702090279B85180CF575D6FE113 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScoreManager_t52E31A532CA8B702090279B85180CF575D6FE113_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Instance = this;
		((ScoreManager_t52E31A532CA8B702090279B85180CF575D6FE113_StaticFields*)il2cpp_codegen_static_fields_for(ScoreManager_t52E31A532CA8B702090279B85180CF575D6FE113_il2cpp_TypeInfo_var))->set_Instance_4(__this);
		// comboScore = 0;
		((ScoreManager_t52E31A532CA8B702090279B85180CF575D6FE113_StaticFields*)il2cpp_codegen_static_fields_for(ScoreManager_t52E31A532CA8B702090279B85180CF575D6FE113_il2cpp_TypeInfo_var))->set_comboScore_6(0);
		// }
		return;
	}
}
// System.Void ScoreManager::Hit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreManager_Hit_mDE10830F41216D35EC449F36401BFF25A782D475 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScoreManager_t52E31A532CA8B702090279B85180CF575D6FE113_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// comboScore += 1;
		int32_t L_0 = ((ScoreManager_t52E31A532CA8B702090279B85180CF575D6FE113_StaticFields*)il2cpp_codegen_static_fields_for(ScoreManager_t52E31A532CA8B702090279B85180CF575D6FE113_il2cpp_TypeInfo_var))->get_comboScore_6();
		((ScoreManager_t52E31A532CA8B702090279B85180CF575D6FE113_StaticFields*)il2cpp_codegen_static_fields_for(ScoreManager_t52E31A532CA8B702090279B85180CF575D6FE113_il2cpp_TypeInfo_var))->set_comboScore_6(((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)1)));
		// Instance.hitSFX.Play();
		ScoreManager_t52E31A532CA8B702090279B85180CF575D6FE113 * L_1 = ((ScoreManager_t52E31A532CA8B702090279B85180CF575D6FE113_StaticFields*)il2cpp_codegen_static_fields_for(ScoreManager_t52E31A532CA8B702090279B85180CF575D6FE113_il2cpp_TypeInfo_var))->get_Instance_4();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_2 = L_1->get_hitSFX_5();
		AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1(L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ScoreManager::Miss()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreManager_Miss_m87DE88C42203D03B267D97755D51E38591B69318 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScoreManager_t52E31A532CA8B702090279B85180CF575D6FE113_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// comboScore = 0;
		((ScoreManager_t52E31A532CA8B702090279B85180CF575D6FE113_StaticFields*)il2cpp_codegen_static_fields_for(ScoreManager_t52E31A532CA8B702090279B85180CF575D6FE113_il2cpp_TypeInfo_var))->set_comboScore_6(0);
		// }
		return;
	}
}
// System.Void ScoreManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreManager_Update_m77B6F3EB450BA678FBB01E50C4A6C6A611FB20CD (ScoreManager_t52E31A532CA8B702090279B85180CF575D6FE113 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void ScoreManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreManager__ctor_m638A240D34643E8AB9D17553622C1C9354348354 (ScoreManager_t52E31A532CA8B702090279B85180CF575D6FE113 * __this, const RuntimeMethod* method)
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
// System.Single SongManager::get_noteDespawnY()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SongManager_get_noteDespawnY_mD49CE11BAB953C4CAC13636EBE37C831F43A11E4 (SongManager_t0B58391B2DFB12045E717021CF4CF7EE474665A3 * __this, const RuntimeMethod* method)
{
	{
		// return noteTapY - (noteSpawnY - noteTapY);
		float L_0 = __this->get_noteTapY_13();
		float L_1 = __this->get_noteSpawnY_12();
		float L_2 = __this->get_noteTapY_13();
		return ((float)il2cpp_codegen_subtract((float)L_0, (float)((float)il2cpp_codegen_subtract((float)L_1, (float)L_2))));
	}
}
// System.Void SongManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SongManager_Start_m196A8003876931ED7AC21708915925166E29CD13 (SongManager_t0B58391B2DFB12045E717021CF4CF7EE474665A3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SongManager_t0B58391B2DFB12045E717021CF4CF7EE474665A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3AE148F4539A6130C80EF45C5441F068ADBF8C8C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA493FF06F94D0907E2F1797D03C4EB68CE5751F2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Instance = this;
		((SongManager_t0B58391B2DFB12045E717021CF4CF7EE474665A3_StaticFields*)il2cpp_codegen_static_fields_for(SongManager_t0B58391B2DFB12045E717021CF4CF7EE474665A3_il2cpp_TypeInfo_var))->set_Instance_4(__this);
		// if (Application.streamingAssetsPath.StartsWith("http://") || Application.streamingAssetsPath.StartsWith("https://"))
		String_t* L_0;
		L_0 = Application_get_streamingAssetsPath_mA1FBABB08D7A4590A468C7CD940CD442B58C91E1(/*hidden argument*/NULL);
		bool L_1;
		L_1 = String_StartsWith_mDE2FF98CAFFD13F88EDEB6C40158DDF840BFCF12(L_0, _stringLiteral3AE148F4539A6130C80EF45C5441F068ADBF8C8C, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0028;
		}
	}
	{
		String_t* L_2;
		L_2 = Application_get_streamingAssetsPath_mA1FBABB08D7A4590A468C7CD940CD442B58C91E1(/*hidden argument*/NULL);
		bool L_3;
		L_3 = String_StartsWith_mDE2FF98CAFFD13F88EDEB6C40158DDF840BFCF12(L_2, _stringLiteralA493FF06F94D0907E2F1797D03C4EB68CE5751F2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0036;
		}
	}

IL_0028:
	{
		// StartCoroutine(ReadFromWebsite());
		RuntimeObject* L_4;
		L_4 = SongManager_ReadFromWebsite_mD046ED04FD70A8A3712BD20D1950D1C19ABF1640(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_5;
		L_5 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_4, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0036:
	{
		// ReadFromFile();
		SongManager_ReadFromFile_m5A7905DC4C1EED361E23EE3B7C3E151915B6CD1E(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator SongManager::ReadFromWebsite()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SongManager_ReadFromWebsite_mD046ED04FD70A8A3712BD20D1950D1C19ABF1640 (SongManager_t0B58391B2DFB12045E717021CF4CF7EE474665A3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CReadFromWebsiteU3Ed__14_tAB16D26B298F15A356098B5CCAE0BF31AFD65381_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CReadFromWebsiteU3Ed__14_tAB16D26B298F15A356098B5CCAE0BF31AFD65381 * L_0 = (U3CReadFromWebsiteU3Ed__14_tAB16D26B298F15A356098B5CCAE0BF31AFD65381 *)il2cpp_codegen_object_new(U3CReadFromWebsiteU3Ed__14_tAB16D26B298F15A356098B5CCAE0BF31AFD65381_il2cpp_TypeInfo_var);
		U3CReadFromWebsiteU3Ed__14__ctor_m5B88C0DAF5E18E047C4C8A8B17F8042BC92E6414(L_0, 0, /*hidden argument*/NULL);
		U3CReadFromWebsiteU3Ed__14_tAB16D26B298F15A356098B5CCAE0BF31AFD65381 * L_1 = L_0;
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void SongManager::ReadFromFile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SongManager_ReadFromFile_m5A7905DC4C1EED361E23EE3B7C3E151915B6CD1E (SongManager_t0B58391B2DFB12045E717021CF4CF7EE474665A3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SongManager_t0B58391B2DFB12045E717021CF4CF7EE474665A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// midiFile = MidiFile.Read(Application.streamingAssetsPath + "/" + fileLocation);
		String_t* L_0;
		L_0 = Application_get_streamingAssetsPath_mA1FBABB08D7A4590A468C7CD940CD442B58C91E1(/*hidden argument*/NULL);
		String_t* L_1 = __this->get_fileLocation_10();
		String_t* L_2;
		L_2 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(L_0, _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1, L_1, /*hidden argument*/NULL);
		MidiFile_t00456CC0D22B31D61780718A31F002EFC5082774 * L_3;
		L_3 = MidiFile_Read_m825698659B2915325D7BE38E5570E56646208412(L_2, (ReadingSettings_tF4A87F7B3EBDAE1FC80442C1C6A71B0B017D35DB *)NULL, /*hidden argument*/NULL);
		((SongManager_t0B58391B2DFB12045E717021CF4CF7EE474665A3_StaticFields*)il2cpp_codegen_static_fields_for(SongManager_t0B58391B2DFB12045E717021CF4CF7EE474665A3_il2cpp_TypeInfo_var))->set_midiFile_14(L_3);
		// GetDataFromMidi();
		SongManager_GetDataFromMidi_m42A78881AC2E5E02EEF1697CDD27B1BE28E12EC1(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SongManager::GetDataFromMidi()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SongManager_GetDataFromMidi_m42A78881AC2E5E02EEF1697CDD27B1BE28E12EC1 (SongManager_t0B58391B2DFB12045E717021CF4CF7EE474665A3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_tF9459207527CC5D861D0B1742C5726D60F066545_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NoteU5BU5D_tCBBDF8452DE17E526D80118C9E6926262C9BD7E9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SongManager_t0B58391B2DFB12045E717021CF4CF7EE474665A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral562DF94FE022C3EDB334BE693F96C1F437F4CDC2);
		s_Il2CppMethodInitialized = true;
	}
	NoteU5BU5D_tCBBDF8452DE17E526D80118C9E6926262C9BD7E9* V_0 = NULL;
	LaneU5BU5D_t0CF8D81AFD60F36B05B27E64BBBC911D131D4F35* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// var notes = midiFile.GetNotes();
		MidiFile_t00456CC0D22B31D61780718A31F002EFC5082774 * L_0 = ((SongManager_t0B58391B2DFB12045E717021CF4CF7EE474665A3_StaticFields*)il2cpp_codegen_static_fields_for(SongManager_t0B58391B2DFB12045E717021CF4CF7EE474665A3_il2cpp_TypeInfo_var))->get_midiFile_14();
		RuntimeObject* L_1;
		L_1 = NotesManagingUtilities_GetNotes_m3F1D23DBC668EA7D6AE40A472D16BD69D307BAF4(L_0, (NoteDetectionSettings_tBBDCB0CE0E95324BD3141AD2A42FFD977A1B858B *)NULL, /*hidden argument*/NULL);
		// var array = new Melanchall.DryWetMidi.Interaction.Note[notes.Count];
		RuntimeObject* L_2 = L_1;
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<Melanchall.DryWetMidi.Interaction.Note>::get_Count() */, ICollection_1_tF9459207527CC5D861D0B1742C5726D60F066545_il2cpp_TypeInfo_var, L_2);
		NoteU5BU5D_tCBBDF8452DE17E526D80118C9E6926262C9BD7E9* L_4 = (NoteU5BU5D_tCBBDF8452DE17E526D80118C9E6926262C9BD7E9*)(NoteU5BU5D_tCBBDF8452DE17E526D80118C9E6926262C9BD7E9*)SZArrayNew(NoteU5BU5D_tCBBDF8452DE17E526D80118C9E6926262C9BD7E9_il2cpp_TypeInfo_var, (uint32_t)L_3);
		V_0 = L_4;
		// notes.CopyTo(array, 0);
		NoteU5BU5D_tCBBDF8452DE17E526D80118C9E6926262C9BD7E9* L_5 = V_0;
		InterfaceActionInvoker2< NoteU5BU5D_tCBBDF8452DE17E526D80118C9E6926262C9BD7E9*, int32_t >::Invoke(5 /* System.Void System.Collections.Generic.ICollection`1<Melanchall.DryWetMidi.Interaction.Note>::CopyTo(!0[],System.Int32) */, ICollection_1_tF9459207527CC5D861D0B1742C5726D60F066545_il2cpp_TypeInfo_var, L_2, L_5, 0);
		// foreach (var lane in lanes) lane.SetTimeStamps(array);
		LaneU5BU5D_t0CF8D81AFD60F36B05B27E64BBBC911D131D4F35* L_6 = __this->get_lanes_6();
		V_1 = L_6;
		V_2 = 0;
		goto IL_0036;
	}

IL_0029:
	{
		// foreach (var lane in lanes) lane.SetTimeStamps(array);
		LaneU5BU5D_t0CF8D81AFD60F36B05B27E64BBBC911D131D4F35* L_7 = V_1;
		int32_t L_8 = V_2;
		int32_t L_9 = L_8;
		Lane_t286B164399771EA0ED4119258145C46B5AFBD3CF * L_10 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9));
		// foreach (var lane in lanes) lane.SetTimeStamps(array);
		NoteU5BU5D_tCBBDF8452DE17E526D80118C9E6926262C9BD7E9* L_11 = V_0;
		Lane_SetTimeStamps_mFCD9EEF3C1C7BCBBE563F12740F06ED78FA6FC42(L_10, L_11, /*hidden argument*/NULL);
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_0036:
	{
		// foreach (var lane in lanes) lane.SetTimeStamps(array);
		int32_t L_13 = V_2;
		LaneU5BU5D_t0CF8D81AFD60F36B05B27E64BBBC911D131D4F35* L_14 = V_1;
		if ((((int32_t)L_13) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_0029;
		}
	}
	{
		// Invoke(nameof(StartSong), songDelayInSeconds);
		float L_15 = __this->get_songDelayInSeconds_7();
		MonoBehaviour_Invoke_m4AAB759653B1C6FB0653527F4DDC72D1E9162CC4(__this, _stringLiteral562DF94FE022C3EDB334BE693F96C1F437F4CDC2, L_15, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SongManager::StartSong()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SongManager_StartSong_m9402137FF6AEDF408EF7F4C2186EECA31765C484 (SongManager_t0B58391B2DFB12045E717021CF4CF7EE474665A3 * __this, const RuntimeMethod* method)
{
	{
		// audioSource.Play();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_0 = __this->get_audioSource_5();
		AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Double SongManager::GetAudioSourceTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double SongManager_GetAudioSourceTime_m26D5B6F69E4377F3EAA9E79CE33F4360A852B01D (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SongManager_t0B58391B2DFB12045E717021CF4CF7EE474665A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return (double)Instance.audioSource.timeSamples / Instance.audioSource.clip.frequency;
		SongManager_t0B58391B2DFB12045E717021CF4CF7EE474665A3 * L_0 = ((SongManager_t0B58391B2DFB12045E717021CF4CF7EE474665A3_StaticFields*)il2cpp_codegen_static_fields_for(SongManager_t0B58391B2DFB12045E717021CF4CF7EE474665A3_il2cpp_TypeInfo_var))->get_Instance_4();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_1 = L_0->get_audioSource_5();
		int32_t L_2;
		L_2 = AudioSource_get_timeSamples_m2D16DA78011B58C24BCA679B44D2BF832DFCA0BE(L_1, /*hidden argument*/NULL);
		SongManager_t0B58391B2DFB12045E717021CF4CF7EE474665A3 * L_3 = ((SongManager_t0B58391B2DFB12045E717021CF4CF7EE474665A3_StaticFields*)il2cpp_codegen_static_fields_for(SongManager_t0B58391B2DFB12045E717021CF4CF7EE474665A3_il2cpp_TypeInfo_var))->get_Instance_4();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_4 = L_3->get_audioSource_5();
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_5;
		L_5 = AudioSource_get_clip_mE4454E38D2C0A4C8CC780A435FC1DBD4D47D16DC(L_4, /*hidden argument*/NULL);
		int32_t L_6;
		L_6 = AudioClip_get_frequency_m5346F253EE3761A2535B20E0E27B6AB0B875BFCD(L_5, /*hidden argument*/NULL);
		return ((double)((double)((double)((double)L_2))/(double)((double)((double)L_6))));
	}
}
// System.Void SongManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SongManager_Update_mEF044DAFFA041D9C7C389BFFEF0B11973E234CC4 (SongManager_t0B58391B2DFB12045E717021CF4CF7EE474665A3 * __this, const RuntimeMethod* method)
{
	{
		// if(!audioSource.isPlaying)
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_0 = __this->get_audioSource_5();
		bool L_1;
		L_1 = AudioSource_get_isPlaying_mEA69477C77D542971F7B454946EF25DFBE0AF6A8(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_001a;
		}
	}
	{
		// StartCoroutine(WaitLoad());
		RuntimeObject* L_2;
		L_2 = SongManager_WaitLoad_m5AAEA987E46291D4096E75F4233D9F996D5EB3AD(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_3;
		L_3 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_2, /*hidden argument*/NULL);
	}

IL_001a:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator SongManager::WaitLoad()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SongManager_WaitLoad_m5AAEA987E46291D4096E75F4233D9F996D5EB3AD (SongManager_t0B58391B2DFB12045E717021CF4CF7EE474665A3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CWaitLoadU3Ed__20_t055F386818B09FF1C73268153A9C10D8A79A4BE8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CWaitLoadU3Ed__20_t055F386818B09FF1C73268153A9C10D8A79A4BE8 * L_0 = (U3CWaitLoadU3Ed__20_t055F386818B09FF1C73268153A9C10D8A79A4BE8 *)il2cpp_codegen_object_new(U3CWaitLoadU3Ed__20_t055F386818B09FF1C73268153A9C10D8A79A4BE8_il2cpp_TypeInfo_var);
		U3CWaitLoadU3Ed__20__ctor_m0A6746A6693964894277CFD95530183A5F291FFC(L_0, 0, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void SongManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SongManager__ctor_m7D2100888FB02B53A573131690A143CF65389668 (SongManager_t0B58391B2DFB12045E717021CF4CF7EE474665A3 * __this, const RuntimeMethod* method)
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
// System.Void WallScript::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WallScript_Update_m9E8F3E980EF06C3E76CE1CD658CD5F2F86B93D8C (WallScript_t36D3BD898C2E4F038846DC27F799DD591852A7B9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// transform.Translate(0f, 0f, -speed * Time.deltaTime, Space.World);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		float L_1 = __this->get_speed_4();
		float L_2;
		L_2 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Transform_Translate_m22737F202DE67AAAAC408ADE91BD44F5BAF3DD6B(L_0, (0.0f), (0.0f), ((float)il2cpp_codegen_multiply((float)((-L_1)), (float)L_2)), 0, /*hidden argument*/NULL);
		// Destroy(this.gameObject, 20f);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_mAAAA103F4911E9FA18634BF9605C28559F5E2AC7(L_3, (20.0f), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void WallScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WallScript__ctor_mFFD1E2C4BA68861B72140CE40C62CB6D453D1129 (WallScript_t36D3BD898C2E4F038846DC27F799DD591852A7B9 * __this, const RuntimeMethod* method)
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
// System.Void BackgroundMover/<WallSpawn>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWallSpawnU3Ed__6__ctor_m0F2481D9D9A2286B867A899EAD364E261A9E4392 (U3CWallSpawnU3Ed__6_tAF3991F444558EB25A917E5E64C0654A3288B8C3 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void BackgroundMover/<WallSpawn>d__6::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWallSpawnU3Ed__6_System_IDisposable_Dispose_mCDB19D567A65697EB59FA26E12319C69EAA366AE (U3CWallSpawnU3Ed__6_tAF3991F444558EB25A917E5E64C0654A3288B8C3 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean BackgroundMover/<WallSpawn>d__6::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CWallSpawnU3Ed__6_MoveNext_mDF9BCCEE9A9785FF8421D942F2874F228CDA94D2 (U3CWallSpawnU3Ed__6_tAF3991F444558EB25A917E5E64C0654A3288B8C3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	BackgroundMover_tCB967D07193551E3830EBA987419287E3598C848 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		BackgroundMover_tCB967D07193551E3830EBA987419287E3598C848 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_00a6;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->set_U3CU3E1__state_0((-1));
		// var l_Pos = l_Spawner.gameObject.transform.position;
		BackgroundMover_tCB967D07193551E3830EBA987419287E3598C848 * L_4 = V_1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = L_4->get_l_Spawner_6();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6;
		L_6 = GameObject_get_gameObject_mD5FFECF7C3AC5039E847DF7A8842478539B701D6(L_5, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_6, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_7, /*hidden argument*/NULL);
		__this->set_U3Cl_PosU3E5__2_3(L_8);
		// var l_Rot = l_Spawner.gameObject.transform.rotation;
		BackgroundMover_tCB967D07193551E3830EBA987419287E3598C848 * L_9 = V_1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10 = L_9->get_l_Spawner_6();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11;
		L_11 = GameObject_get_gameObject_mD5FFECF7C3AC5039E847DF7A8842478539B701D6(L_10, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12;
		L_12 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_11, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_13;
		L_13 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_12, /*hidden argument*/NULL);
		__this->set_U3Cl_RotU3E5__3_4(L_13);
		// var r_Pos = r_Spawner.gameObject.transform.position;
		BackgroundMover_tCB967D07193551E3830EBA987419287E3598C848 * L_14 = V_1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_15 = L_14->get_r_Spawner_7();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_16;
		L_16 = GameObject_get_gameObject_mD5FFECF7C3AC5039E847DF7A8842478539B701D6(L_15, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_17;
		L_17 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_16, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18;
		L_18 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_17, /*hidden argument*/NULL);
		__this->set_U3Cr_PosU3E5__4_5(L_18);
		// var r_Rot = r_Spawner.gameObject.transform.rotation;
		BackgroundMover_tCB967D07193551E3830EBA987419287E3598C848 * L_19 = V_1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_20 = L_19->get_r_Spawner_7();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_21;
		L_21 = GameObject_get_gameObject_mD5FFECF7C3AC5039E847DF7A8842478539B701D6(L_20, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_22;
		L_22 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_21, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_23;
		L_23 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_22, /*hidden argument*/NULL);
		__this->set_U3Cr_RotU3E5__5_6(L_23);
		// yield return new WaitForSeconds(4.25f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_24 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_24, (4.25f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_24);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_00a6:
	{
		__this->set_U3CU3E1__state_0((-1));
		// GameObject l_Wall = Instantiate(l_Background, l_Pos, l_Rot);
		BackgroundMover_tCB967D07193551E3830EBA987419287E3598C848 * L_25 = V_1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_26 = L_25->get_l_Background_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_27 = __this->get_U3Cl_PosU3E5__2_3();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_28 = __this->get_U3Cl_RotU3E5__3_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_29;
		L_29 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_26, L_27, L_28, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		// GameObject r_Wall = Instantiate(r_Background, r_Pos, r_Rot);
		BackgroundMover_tCB967D07193551E3830EBA987419287E3598C848 * L_30 = V_1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_31 = L_30->get_r_Background_5();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_32 = __this->get_U3Cr_PosU3E5__4_5();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_33 = __this->get_U3Cr_RotU3E5__5_6();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_34;
		L_34 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_31, L_32, L_33, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		// StartCoroutine(WallSpawn());
		BackgroundMover_tCB967D07193551E3830EBA987419287E3598C848 * L_35 = V_1;
		BackgroundMover_tCB967D07193551E3830EBA987419287E3598C848 * L_36 = V_1;
		RuntimeObject* L_37;
		L_37 = BackgroundMover_WallSpawn_mEE2E9B936BF318D7C5D656E9DC43B2FB18AF4023(L_36, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_38;
		L_38 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(L_35, L_37, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object BackgroundMover/<WallSpawn>d__6::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CWallSpawnU3Ed__6_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m44A41CAC5497F78C85901C1020B5B965103836AE (U3CWallSpawnU3Ed__6_tAF3991F444558EB25A917E5E64C0654A3288B8C3 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void BackgroundMover/<WallSpawn>d__6::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWallSpawnU3Ed__6_System_Collections_IEnumerator_Reset_mAB4175A0E1E33E80F08ED3E58BF1EF5B378B3E5C (U3CWallSpawnU3Ed__6_tAF3991F444558EB25A917E5E64C0654A3288B8C3 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CWallSpawnU3Ed__6_System_Collections_IEnumerator_Reset_mAB4175A0E1E33E80F08ED3E58BF1EF5B378B3E5C_RuntimeMethod_var)));
	}
}
// System.Object BackgroundMover/<WallSpawn>d__6::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CWallSpawnU3Ed__6_System_Collections_IEnumerator_get_Current_mB4078AEA0CFA39F6450CAE775668BCD5AF9A239C (U3CWallSpawnU3Ed__6_tAF3991F444558EB25A917E5E64C0654A3288B8C3 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void DemoScript/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m41AE59F091A30ACDDA842EBB8662E3DE849E348B (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tDE021ECD8EACE49080A257681D29E16DCF3F53F2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tDE021ECD8EACE49080A257681D29E16DCF3F53F2 * L_0 = (U3CU3Ec_tDE021ECD8EACE49080A257681D29E16DCF3F53F2 *)il2cpp_codegen_object_new(U3CU3Ec_tDE021ECD8EACE49080A257681D29E16DCF3F53F2_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m4119CE4D8758DADE144C4E60372D6CA940FF7125(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tDE021ECD8EACE49080A257681D29E16DCF3F53F2_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDE021ECD8EACE49080A257681D29E16DCF3F53F2_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void DemoScript/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m4119CE4D8758DADE144C4E60372D6CA940FF7125 (U3CU3Ec_tDE021ECD8EACE49080A257681D29E16DCF3F53F2 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean DemoScript/<>c::<InitializeOutputDevice>b__5_0(Melanchall.DryWetMidi.Multimedia.OutputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CInitializeOutputDeviceU3Eb__5_0_m5D283EA583758841FC457054573656CC139FB89D (U3CU3Ec_tDE021ECD8EACE49080A257681D29E16DCF3F53F2 * __this, OutputDevice_t7A9B57531DCA6BF309413A7FACE2F48E261EC9BB * ___d0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral51B6E42767E2559991968046FCE0D8D5A1EC7385);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!allOutputDevices.Any(d => d.Name == OutputDeviceName))
		OutputDevice_t7A9B57531DCA6BF309413A7FACE2F48E261EC9BB * L_0 = ___d0;
		String_t* L_1;
		L_1 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String Melanchall.DryWetMidi.Multimedia.MidiDevice::get_Name() */, L_0);
		bool L_2;
		L_2 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_1, _stringLiteral51B6E42767E2559991968046FCE0D8D5A1EC7385, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.String DemoScript/<>c::<InitializeOutputDevice>b__5_1(Melanchall.DryWetMidi.Multimedia.OutputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CInitializeOutputDeviceU3Eb__5_1_m862ED9491FD0F5DFDB10D2F3FD9FABD9000294EC (U3CU3Ec_tDE021ECD8EACE49080A257681D29E16DCF3F53F2 * __this, OutputDevice_t7A9B57531DCA6BF309413A7FACE2F48E261EC9BB * ___d0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8A8EFDA91C6C257127F8C8D526FAD7E7552766AA);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var allDevicesList = string.Join(Environment.NewLine, allOutputDevices.Select(d => $"  {d.Name}"));
		OutputDevice_t7A9B57531DCA6BF309413A7FACE2F48E261EC9BB * L_0 = ___d0;
		String_t* L_1;
		L_1 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String Melanchall.DryWetMidi.Multimedia.MidiDevice::get_Name() */, L_0);
		String_t* L_2;
		L_2 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral8A8EFDA91C6C257127F8C8D526FAD7E7552766AA, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.String DemoScript/<>c::<LogNotes>b__11_0(Melanchall.DryWetMidi.Interaction.Note)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CLogNotesU3Eb__11_0_m10BE402BA8F7E139F2D13E03C5DF314C7AA6B7EB (U3CU3Ec_tDE021ECD8EACE49080A257681D29E16DCF3F53F2 * __this, Note_t72FA32C1F792DB6998277D23822C6FBBF619808C * ___n0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE05C614872D9A74C4883A60014465F36ECD733C5);
		s_Il2CppMethodInitialized = true;
	}
	{
		// .AppendLine(string.Join(Environment.NewLine, e.Notes.Select(n => $"  {n}")))
		Note_t72FA32C1F792DB6998277D23822C6FBBF619808C * L_0 = ___n0;
		String_t* L_1;
		L_1 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteralE05C614872D9A74C4883A60014465F36ECD733C5, L_0, /*hidden argument*/NULL);
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
// System.Void InvertCreator/<startCount>d__9::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CstartCountU3Ed__9__ctor_mA2E09348D1A944907445AB986E8D86F94CE78CC7 (U3CstartCountU3Ed__9_tC6AEADF32799B25FD8FC3FAE295448A88287AB6D * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void InvertCreator/<startCount>d__9::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CstartCountU3Ed__9_System_IDisposable_Dispose_mFBE3B9F6A97D8B70BCC85DDD1D99406086D03642 (U3CstartCountU3Ed__9_tC6AEADF32799B25FD8FC3FAE295448A88287AB6D * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean InvertCreator/<startCount>d__9::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CstartCountU3Ed__9_MoveNext_m94DAC671DFF90E5B1333AC464DC55E6B6E879DF2 (U3CstartCountU3Ed__9_tC6AEADF32799B25FD8FC3FAE295448A88287AB6D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	InvertCreator_t73F06C8608898BB962DB7AFF980F9AA9630506FA * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		InvertCreator_t73F06C8608898BB962DB7AFF980F9AA9630506FA * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0039;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return new WaitForSeconds(startTime);
		InvertCreator_t73F06C8608898BB962DB7AFF980F9AA9630506FA * L_4 = V_1;
		int32_t L_5 = L_4->get_startTime_7();
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_6 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_6, ((float)((float)L_5)), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_6);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0039:
	{
		__this->set_U3CU3E1__state_0((-1));
		// delayEnd = true;
		InvertCreator_t73F06C8608898BB962DB7AFF980F9AA9630506FA * L_7 = V_1;
		L_7->set_delayEnd_9((bool)1);
		// }
		return (bool)0;
	}
}
// System.Object InvertCreator/<startCount>d__9::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CstartCountU3Ed__9_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mD8EB5FB81CD913CC84A11ED6AF2199F69558038A (U3CstartCountU3Ed__9_tC6AEADF32799B25FD8FC3FAE295448A88287AB6D * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void InvertCreator/<startCount>d__9::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CstartCountU3Ed__9_System_Collections_IEnumerator_Reset_m60AB1316E62AEF3E7602BAE64A5886A0DEC2393F (U3CstartCountU3Ed__9_tC6AEADF32799B25FD8FC3FAE295448A88287AB6D * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CstartCountU3Ed__9_System_Collections_IEnumerator_Reset_m60AB1316E62AEF3E7602BAE64A5886A0DEC2393F_RuntimeMethod_var)));
	}
}
// System.Object InvertCreator/<startCount>d__9::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CstartCountU3Ed__9_System_Collections_IEnumerator_get_Current_mC6A47D9BC3E7212C23B00972B4EB48CF058E757C (U3CstartCountU3Ed__9_tC6AEADF32799B25FD8FC3FAE295448A88287AB6D * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void Lane/<WaittoSwicth>d__15::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaittoSwicthU3Ed__15__ctor_mAAE9DF1461A62C7F7181C4EC7A103E2D37B291F0 (U3CWaittoSwicthU3Ed__15_t615CB7E544E6313578445BF522D046CCFE0D1DC8 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Lane/<WaittoSwicth>d__15::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaittoSwicthU3Ed__15_System_IDisposable_Dispose_mB53C3BC816C3B4430747E3D9643E8FDB601FC257 (U3CWaittoSwicthU3Ed__15_t615CB7E544E6313578445BF522D046CCFE0D1DC8 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Lane/<WaittoSwicth>d__15::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CWaittoSwicthU3Ed__15_MoveNext_m2B6114EF3697F77C00E17EF1E5D84A7CA54A9784 (U3CWaittoSwicthU3Ed__15_t615CB7E544E6313578445BF522D046CCFE0D1DC8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Lane_t286B164399771EA0ED4119258145C46B5AFBD3CF * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		Lane_t286B164399771EA0ED4119258145C46B5AFBD3CF * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0037;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return new WaitForSeconds(150);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_4 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_4, (150.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_4);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0037:
	{
		__this->set_U3CU3E1__state_0((-1));
		// option = 1;
		Lane_t286B164399771EA0ED4119258145C46B5AFBD3CF * L_5 = V_1;
		L_5->set_option_13(1);
		// }
		return (bool)0;
	}
}
// System.Object Lane/<WaittoSwicth>d__15::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CWaittoSwicthU3Ed__15_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mC9721A3B6EF62ECF147BB2B2F09B26F9D24BE0DE (U3CWaittoSwicthU3Ed__15_t615CB7E544E6313578445BF522D046CCFE0D1DC8 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Lane/<WaittoSwicth>d__15::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaittoSwicthU3Ed__15_System_Collections_IEnumerator_Reset_m603B14382F8630B2D356C1885C2A7A652FD4AF27 (U3CWaittoSwicthU3Ed__15_t615CB7E544E6313578445BF522D046CCFE0D1DC8 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CWaittoSwicthU3Ed__15_System_Collections_IEnumerator_Reset_m603B14382F8630B2D356C1885C2A7A652FD4AF27_RuntimeMethod_var)));
	}
}
// System.Object Lane/<WaittoSwicth>d__15::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CWaittoSwicthU3Ed__15_System_Collections_IEnumerator_get_Current_mA0E52C8A502F20E1C255BF4666BC0A2671EDB4E0 (U3CWaittoSwicthU3Ed__15_t615CB7E544E6313578445BF522D046CCFE0D1DC8 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void SongManager/<ReadFromWebsite>d__14::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReadFromWebsiteU3Ed__14__ctor_m5B88C0DAF5E18E047C4C8A8B17F8042BC92E6414 (U3CReadFromWebsiteU3Ed__14_tAB16D26B298F15A356098B5CCAE0BF31AFD65381 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void SongManager/<ReadFromWebsite>d__14::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReadFromWebsiteU3Ed__14_System_IDisposable_Dispose_mE82E3B9BD9D2E225E8BEB095379BA27849D07C7D (U3CReadFromWebsiteU3Ed__14_tAB16D26B298F15A356098B5CCAE0BF31AFD65381 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_001a;
		}
	}

IL_0010:
	{
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		IL2CPP_LEAVE(0x1A, FINALLY_0013);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0013;
	}

FINALLY_0013:
	{ // begin finally (depth: 1)
		U3CReadFromWebsiteU3Ed__14_U3CU3Em__Finally1_mE2265F4C6339F67116ECAC8366FB1B34BBE5059A(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(19)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(19)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x1A, IL_001a)
	}

IL_001a:
	{
		return;
	}
}
// System.Boolean SongManager/<ReadFromWebsite>d__14::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CReadFromWebsiteU3Ed__14_MoveNext_m4629EE7F48ECCBE8DB53C953D8471D174CB84D8E (U3CReadFromWebsiteU3Ed__14_tAB16D26B298F15A356098B5CCAE0BF31AFD65381 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SongManager_t0B58391B2DFB12045E717021CF4CF7EE474665A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	SongManager_t0B58391B2DFB12045E717021CF4CF7EE474665A3 * V_2 = NULL;
	MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 4> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_0 = __this->get_U3CU3E1__state_0();
			V_1 = L_0;
			SongManager_t0B58391B2DFB12045E717021CF4CF7EE474665A3 * L_1 = __this->get_U3CU3E4__this_2();
			V_2 = L_1;
			int32_t L_2 = V_1;
			if (!L_2)
			{
				goto IL_001c;
			}
		}

IL_0011:
		{
			int32_t L_3 = V_1;
			if ((((int32_t)L_3) == ((int32_t)1)))
			{
				goto IL_006a;
			}
		}

IL_0015:
		{
			V_0 = (bool)0;
			goto IL_00ea;
		}

IL_001c:
		{
			__this->set_U3CU3E1__state_0((-1));
			// using (UnityWebRequest www = UnityWebRequest.Get(Application.streamingAssetsPath + "/" + fileLocation))
			String_t* L_4;
			L_4 = Application_get_streamingAssetsPath_mA1FBABB08D7A4590A468C7CD940CD442B58C91E1(/*hidden argument*/NULL);
			SongManager_t0B58391B2DFB12045E717021CF4CF7EE474665A3 * L_5 = V_2;
			String_t* L_6 = L_5->get_fileLocation_10();
			String_t* L_7;
			L_7 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(L_4, _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1, L_6, /*hidden argument*/NULL);
			UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_8;
			L_8 = UnityWebRequest_Get_m9C24DB3E8BED0B0886F28DCD982A4741A9903B1A(L_7, /*hidden argument*/NULL);
			__this->set_U3CwwwU3E5__2_3(L_8);
			__this->set_U3CU3E1__state_0(((int32_t)-3));
			// yield return www.SendWebRequest();
			UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_9 = __this->get_U3CwwwU3E5__2_3();
			UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396 * L_10;
			L_10 = UnityWebRequest_SendWebRequest_m990921023F56ECB8FF8C118894A317EB6E2F5B50(L_9, /*hidden argument*/NULL);
			__this->set_U3CU3E2__current_1(L_10);
			__this->set_U3CU3E1__state_0(1);
			V_0 = (bool)1;
			goto IL_00ea;
		}

IL_006a:
		{
			__this->set_U3CU3E1__state_0(((int32_t)-3));
			// if (www.isNetworkError || www.isHttpError)
			UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_11 = __this->get_U3CwwwU3E5__2_3();
			bool L_12;
			L_12 = UnityWebRequest_get_isNetworkError_m0126D38DA9B39159CB12F8DE0C3962A4BEEE5C03(L_11, /*hidden argument*/NULL);
			if (L_12)
			{
				goto IL_008c;
			}
		}

IL_007f:
		{
			UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_13 = __this->get_U3CwwwU3E5__2_3();
			bool L_14;
			L_14 = UnityWebRequest_get_isHttpError_m23ADCBE1CF082A940EF6AA75A15051583228B616(L_13, /*hidden argument*/NULL);
			if (!L_14)
			{
				goto IL_009e;
			}
		}

IL_008c:
		{
			// Debug.LogError(www.error);
			UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_15 = __this->get_U3CwwwU3E5__2_3();
			String_t* L_16;
			L_16 = UnityWebRequest_get_error_m32B69D2365C1FE2310B5936C7C295B71A92CC2B4(L_15, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
			Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(L_16, /*hidden argument*/NULL);
			// }
			goto IL_00d2;
		}

IL_009e:
		{
			// byte[] results = www.downloadHandler.data;
			UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_17 = __this->get_U3CwwwU3E5__2_3();
			DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * L_18;
			L_18 = UnityWebRequest_get_downloadHandler_mCE0A0C53A63419FE5AE25915AFB36EABE294C732(L_17, /*hidden argument*/NULL);
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_19;
			L_19 = DownloadHandler_get_data_m3AE551AAE6BF21279435D386E76EA7084CC037D3(L_18, /*hidden argument*/NULL);
			// using (var stream = new MemoryStream(results))
			MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_20 = (MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C *)il2cpp_codegen_object_new(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C_il2cpp_TypeInfo_var);
			MemoryStream__ctor_m3E041ADD3DB7EA42E7DB56FE862097819C02B9C2(L_20, L_19, /*hidden argument*/NULL);
			V_3 = L_20;
		}

IL_00b4:
		try
		{ // begin try (depth: 2)
			// midiFile = MidiFile.Read(stream);
			MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_21 = V_3;
			MidiFile_t00456CC0D22B31D61780718A31F002EFC5082774 * L_22;
			L_22 = MidiFile_Read_mF259700CFF64DFEB3BA1C871837F7039DA4D8CCF(L_21, (ReadingSettings_tF4A87F7B3EBDAE1FC80442C1C6A71B0B017D35DB *)NULL, /*hidden argument*/NULL);
			((SongManager_t0B58391B2DFB12045E717021CF4CF7EE474665A3_StaticFields*)il2cpp_codegen_static_fields_for(SongManager_t0B58391B2DFB12045E717021CF4CF7EE474665A3_il2cpp_TypeInfo_var))->set_midiFile_14(L_22);
			// GetDataFromMidi();
			SongManager_t0B58391B2DFB12045E717021CF4CF7EE474665A3 * L_23 = V_2;
			SongManager_GetDataFromMidi_m42A78881AC2E5E02EEF1697CDD27B1BE28E12EC1(L_23, /*hidden argument*/NULL);
			// }
			IL2CPP_LEAVE(0xD2, FINALLY_00c8);
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_00c8;
		}

FINALLY_00c8:
		{ // begin finally (depth: 2)
			{
				MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_24 = V_3;
				if (!L_24)
				{
					goto IL_00d1;
				}
			}

IL_00cb:
			{
				MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_25 = V_3;
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_25);
			}

IL_00d1:
			{
				IL2CPP_END_FINALLY(200)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(200)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_JUMP_TBL(0xD2, IL_00d2)
		}

IL_00d2:
		{
			// }
			U3CReadFromWebsiteU3Ed__14_U3CU3Em__Finally1_mE2265F4C6339F67116ECAC8366FB1B34BBE5059A(__this, /*hidden argument*/NULL);
			__this->set_U3CwwwU3E5__2_3((UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E *)NULL);
			// }
			V_0 = (bool)0;
			goto IL_00ea;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FAULT_00e3;
	}

FAULT_00e3:
	{ // begin fault (depth: 1)
		U3CReadFromWebsiteU3Ed__14_System_IDisposable_Dispose_mE82E3B9BD9D2E225E8BEB095379BA27849D07C7D(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(227)
	} // end fault
	IL2CPP_CLEANUP(227)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00ea:
	{
		bool L_26 = V_0;
		return L_26;
	}
}
// System.Void SongManager/<ReadFromWebsite>d__14::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReadFromWebsiteU3Ed__14_U3CU3Em__Finally1_mE2265F4C6339F67116ECAC8366FB1B34BBE5059A (U3CReadFromWebsiteU3Ed__14_tAB16D26B298F15A356098B5CCAE0BF31AFD65381 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_U3CU3E1__state_0((-1));
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_0 = __this->get_U3CwwwU3E5__2_3();
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_1 = __this->get_U3CwwwU3E5__2_3();
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_1);
	}

IL_001a:
	{
		return;
	}
}
// System.Object SongManager/<ReadFromWebsite>d__14::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CReadFromWebsiteU3Ed__14_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m176B18FA408CF7722B4B8757F67FA6B3C1BF035A (U3CReadFromWebsiteU3Ed__14_tAB16D26B298F15A356098B5CCAE0BF31AFD65381 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void SongManager/<ReadFromWebsite>d__14::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReadFromWebsiteU3Ed__14_System_Collections_IEnumerator_Reset_m42B5C509AFFC21AD25832880EDD2D6AAA794BD53 (U3CReadFromWebsiteU3Ed__14_tAB16D26B298F15A356098B5CCAE0BF31AFD65381 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CReadFromWebsiteU3Ed__14_System_Collections_IEnumerator_Reset_m42B5C509AFFC21AD25832880EDD2D6AAA794BD53_RuntimeMethod_var)));
	}
}
// System.Object SongManager/<ReadFromWebsite>d__14::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CReadFromWebsiteU3Ed__14_System_Collections_IEnumerator_get_Current_m2B226BECB3444B5A06F1B776D84D69C723B81FB8 (U3CReadFromWebsiteU3Ed__14_tAB16D26B298F15A356098B5CCAE0BF31AFD65381 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void SongManager/<WaitLoad>d__20::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitLoadU3Ed__20__ctor_m0A6746A6693964894277CFD95530183A5F291FFC (U3CWaitLoadU3Ed__20_t055F386818B09FF1C73268153A9C10D8A79A4BE8 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void SongManager/<WaitLoad>d__20::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitLoadU3Ed__20_System_IDisposable_Dispose_mB99C130D8F5D06C58297FB1306A2EE1EEAA157A7 (U3CWaitLoadU3Ed__20_t055F386818B09FF1C73268153A9C10D8A79A4BE8 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean SongManager/<WaitLoad>d__20::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CWaitLoadU3Ed__20_MoveNext_m4354E8CE71B03BEA897817F5F9E66F4917F5131F (U3CWaitLoadU3Ed__20_t055F386818B09FF1C73268153A9C10D8A79A4BE8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C10E47675493434D04CD8025C8303AF94F7BA5A);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0030;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return new WaitForSeconds(2);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_3 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_3, (2.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_3);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0030:
	{
		__this->set_U3CU3E1__state_0((-1));
		// SceneManager.LoadScene("Menu");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteral0C10E47675493434D04CD8025C8303AF94F7BA5A, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object SongManager/<WaitLoad>d__20::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CWaitLoadU3Ed__20_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mAAFA335CBC6C7E7AB14154043B9A1190DE2066A8 (U3CWaitLoadU3Ed__20_t055F386818B09FF1C73268153A9C10D8A79A4BE8 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void SongManager/<WaitLoad>d__20::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitLoadU3Ed__20_System_Collections_IEnumerator_Reset_m9DCB03235C065C1B53CAB44084FA0EE8401ECD2A (U3CWaitLoadU3Ed__20_t055F386818B09FF1C73268153A9C10D8A79A4BE8 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CWaitLoadU3Ed__20_System_Collections_IEnumerator_Reset_m9DCB03235C065C1B53CAB44084FA0EE8401ECD2A_RuntimeMethod_var)));
	}
}
// System.Object SongManager/<WaitLoad>d__20::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CWaitLoadU3Ed__20_System_Collections_IEnumerator_get_Current_m32915863A63F0EEE249CE87D729737F020D0C0A6 (U3CWaitLoadU3Ed__20_t055F386818B09FF1C73268153A9C10D8A79A4BE8 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		float L_2 = ___z2;
		__this->set_z_4(L_2);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_subtract((float)L_1, (float)L_3)), ((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)), ((float)il2cpp_codegen_subtract((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Playback_set_Loop_mF1C603EB64A9D4AAF140CD55822A230F018476CA_inline (Playback_t57195DC933DF811AF3EF953E136F4B9610C70D3A * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CLoopU3Ek__BackingField_26(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* NotesEventArgs_get_Notes_mF2A186B97E400BA5CB9AB3ECC3D201E3097B2C61_inline (NotesEventArgs_t32257D581DB8C05FAFF967215383C081CEAF9195 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = __this->get_U3CNotesU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		float L_2 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___a0;
		float L_4 = L_3.get_y_3();
		float L_5 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a0;
		float L_7 = L_6.get_z_4();
		float L_8 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), ((float)il2cpp_codegen_multiply((float)L_7, (float)L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_Lerp_m8E095584FFA10CF1D3EABCD04F4C83FB82EC5524_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, float ___t2, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___t2;
		float L_1;
		L_1 = Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C(L_0, /*hidden argument*/NULL);
		___t2 = L_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___a0;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___b1;
		float L_5 = L_4.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a0;
		float L_7 = L_6.get_x_2();
		float L_8 = ___t2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9 = ___a0;
		float L_10 = L_9.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11 = ___b1;
		float L_12 = L_11.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = ___a0;
		float L_14 = L_13.get_y_3();
		float L_15 = ___t2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16 = ___a0;
		float L_17 = L_16.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18 = ___b1;
		float L_19 = L_18.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20 = ___a0;
		float L_21 = L_20.get_z_4();
		float L_22 = ___t2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_23), ((float)il2cpp_codegen_add((float)L_3, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)), (float)L_8)))), ((float)il2cpp_codegen_add((float)L_10, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_12, (float)L_14)), (float)L_15)))), ((float)il2cpp_codegen_add((float)L_17, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_19, (float)L_21)), (float)L_22)))), /*hidden argument*/NULL);
		V_0 = L_23;
		goto IL_0053;
	}

IL_0053:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24 = V_0;
		return L_24;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mC1A91036A8488F4B39DA566C71D9631B796DCBE2_gshared_inline (List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double List_1_get_Item_m31A9E37299AA6C7637D3CB1E55556B22883D2A06_gshared_inline (List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
	}

IL_000e:
	{
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2 = (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)__this->get__items_1();
		int32_t L_3 = ___index0;
		double L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)L_2, (int32_t)L_3);
		return (double)L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
	}

IL_000e:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get__items_1();
		int32_t L_3 = ___index0;
		RuntimeObject * L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_2, (int32_t)L_3);
		return (RuntimeObject *)L_4;
	}
}
