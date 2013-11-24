#pragma once
#include <stdlib.h>
#include <stdint.h>

typedef size_t GType;
typedef void *GVaClosureMarshal;
unsigned int _array_length(void* _array);

typedef struct _GArray GArray;
struct _GArray { uint8_t _data[16]; };
typedef uint32_t GAsciiType;
typedef struct _GAsyncQueue GAsyncQueue;
struct _GAsyncQueue {};
typedef struct _GBookmarkFile GBookmarkFile;
struct _GBookmarkFile {};
typedef uint32_t GBookmarkFileError;
typedef struct _GByteArray GByteArray;
struct _GByteArray { uint8_t _data[16]; };
typedef struct _GBytes GBytes;
struct _GBytes {};
typedef struct _GChecksum GChecksum;
struct _GChecksum {};
typedef uint32_t GChecksumType;
typedef void* GChildWatchFunc;
typedef void* GCompareDataFunc;
typedef void* GCompareFunc;
typedef struct _GCond GCond;
struct _GCond { uint8_t _data[16]; };
typedef uint32_t GConvertError;
typedef struct _GData GData;
struct _GData {};
typedef void* GDataForeachFunc;
typedef struct _GDate GDate;
struct _GDate { uint8_t _data[24]; };
typedef uint32_t GDateDMY;
typedef uint32_t GDateMonth;
typedef struct _GDateTime GDateTime;
struct _GDateTime {};
typedef uint32_t GDateWeekday;
typedef struct _GDebugKey GDebugKey;
struct _GDebugKey { uint8_t _data[16]; };
typedef void* GDestroyNotify;
typedef struct _GDir GDir;
struct _GDir {};
typedef struct _GDoubleIEEE754 GDoubleIEEE754;
struct _GDoubleIEEE754 { uint8_t _data[8]; };
typedef void* GEqualFunc;
typedef struct _GError GError;
struct _GError { uint8_t _data[16]; };
typedef uint32_t GErrorType;
typedef uint32_t GFileError;
typedef uint32_t GFileTest;
typedef struct _GFloatIEEE754 GFloatIEEE754;
struct _GFloatIEEE754 { uint8_t _data[4]; };
typedef uint32_t GFormatSizeFlags;
typedef void* GFreeFunc;
typedef void* GFunc;
typedef void* GHFunc;
typedef void* GHRFunc;
typedef void* GHashFunc;
typedef struct _GHashTable GHashTable;
struct _GHashTable {};
typedef struct _GHashTableIter GHashTableIter;
struct _GHashTableIter { uint8_t _data[40]; };
typedef struct _GHmac GHmac;
struct _GHmac {};
typedef struct _GHook GHook;
struct _GHook { uint8_t _data[64]; };
typedef void* GHookCheckFunc;
typedef void* GHookCheckMarshaller;
typedef void* GHookCompareFunc;
typedef void* GHookFinalizeFunc;
typedef void* GHookFindFunc;
typedef uint32_t GHookFlagMask;
typedef void* GHookFunc;
typedef struct _GHookList GHookList;
struct _GHookList { uint8_t _data[56]; };
typedef void* GHookMarshaller;
typedef struct _GIConv GIConv;
struct _GIConv {};
typedef struct _GIOChannel GIOChannel;
struct _GIOChannel { uint8_t _data[136]; };
typedef uint32_t GIOChannelError;
typedef uint32_t GIOCondition;
typedef uint32_t GIOError;
typedef uint32_t GIOFlags;
typedef void* GIOFunc;
typedef struct _GIOFuncs GIOFuncs;
struct _GIOFuncs { uint8_t _data[64]; };
typedef uint32_t GIOStatus;
typedef struct _GKeyFile GKeyFile;
struct _GKeyFile {};
typedef uint32_t GKeyFileError;
typedef uint32_t GKeyFileFlags;
typedef struct _GList GList;
struct _GList { uint8_t _data[24]; };
typedef void* GLogFunc;
typedef int32_t GLogLevelFlags;
typedef struct _GMainContext GMainContext;
struct _GMainContext {};
typedef struct _GMainLoop GMainLoop;
struct _GMainLoop {};
typedef struct _GMappedFile GMappedFile;
struct _GMappedFile {};
typedef uint32_t GMarkupCollectType;
typedef uint32_t GMarkupError;
typedef struct _GMarkupParseContext GMarkupParseContext;
struct _GMarkupParseContext {};
typedef uint32_t GMarkupParseFlags;
typedef struct _GMarkupParser GMarkupParser;
struct _GMarkupParser { uint8_t _data[40]; };
typedef struct _GMatchInfo GMatchInfo;
struct _GMatchInfo {};
typedef struct _GMemVTable GMemVTable;
struct _GMemVTable { uint8_t _data[48]; };
typedef struct _GMutex GMutex;
struct _GMutex { uint8_t _data[8]; };
typedef struct _GNode GNode;
struct _GNode { uint8_t _data[40]; };
typedef void* GNodeForeachFunc;
typedef void* GNodeTraverseFunc;
typedef uint32_t GNormalizeMode;
typedef struct _GOnce GOnce;
struct _GOnce { uint8_t _data[16]; };
typedef uint32_t GOnceStatus;
typedef uint32_t GOptionArg;
typedef void* GOptionArgFunc;
typedef struct _GOptionContext GOptionContext;
struct _GOptionContext {};
typedef struct _GOptionEntry GOptionEntry;
struct _GOptionEntry { uint8_t _data[48]; };
typedef uint32_t GOptionError;
typedef void* GOptionErrorFunc;
typedef uint32_t GOptionFlags;
typedef struct _GOptionGroup GOptionGroup;
struct _GOptionGroup {};
typedef void* GOptionParseFunc;
typedef struct _GPatternSpec GPatternSpec;
struct _GPatternSpec {};
typedef struct _GPollFD GPollFD;
struct _GPollFD { uint8_t _data[8]; };
typedef void* GPollFunc;
typedef void* GPrintFunc;
typedef struct _GPrivate GPrivate;
struct _GPrivate { uint8_t _data[32]; };
typedef struct _GPtrArray GPtrArray;
struct _GPtrArray { uint8_t _data[16]; };
typedef struct _GQueue GQueue;
struct _GQueue { uint8_t _data[24]; };
typedef struct _GRWLock GRWLock;
struct _GRWLock { uint8_t _data[16]; };
typedef struct _GRand GRand;
struct _GRand {};
typedef struct _GRecMutex GRecMutex;
struct _GRecMutex { uint8_t _data[16]; };
typedef struct _GRegex GRegex;
struct _GRegex {};
typedef uint32_t GRegexCompileFlags;
typedef uint32_t GRegexError;
typedef void* GRegexEvalCallback;
typedef uint32_t GRegexMatchFlags;
typedef struct _GSList GSList;
struct _GSList { uint8_t _data[16]; };
typedef struct _GScanner GScanner;
struct _GScanner { uint8_t _data[144]; };
typedef struct _GScannerConfig GScannerConfig;
struct _GScannerConfig { uint8_t _data[128]; };
typedef void* GScannerMsgFunc;
typedef uint32_t GSeekType;
typedef struct _GSequence GSequence;
struct _GSequence {};
typedef struct _GSequenceIter GSequenceIter;
struct _GSequenceIter {};
typedef void* GSequenceIterCompareFunc;
typedef uint32_t GShellError;
typedef uint32_t GSliceConfig;
typedef struct _GSource GSource;
struct _GSource { uint8_t _data[96]; };
typedef struct _GSourceCallbackFuncs GSourceCallbackFuncs;
struct _GSourceCallbackFuncs { uint8_t _data[24]; };
typedef void* GSourceDummyMarshal;
typedef void* GSourceFunc;
typedef struct _GSourceFuncs GSourceFuncs;
struct _GSourceFuncs { uint8_t _data[48]; };
typedef struct _GSourcePrivate GSourcePrivate;
struct _GSourcePrivate {};
typedef void* GSpawnChildSetupFunc;
typedef uint32_t GSpawnError;
typedef uint32_t GSpawnFlags;
typedef struct _GStatBuf GStatBuf;
struct _GStatBuf {};
typedef struct _GString GString;
struct _GString { uint8_t _data[24]; };
typedef struct _GStringChunk GStringChunk;
struct _GStringChunk {};
typedef struct _GTestCase GTestCase;
struct _GTestCase {};
typedef struct _GTestConfig GTestConfig;
struct _GTestConfig { uint8_t _data[24]; };
typedef void* GTestDataFunc;
typedef void* GTestFixtureFunc;
typedef void* GTestFunc;
typedef struct _GTestLogBuffer GTestLogBuffer;
struct _GTestLogBuffer { uint8_t _data[16]; };
typedef void* GTestLogFatalFunc;
typedef struct _GTestLogMsg GTestLogMsg;
struct _GTestLogMsg { uint8_t _data[32]; };
typedef uint32_t GTestLogType;
typedef struct _GTestSuite GTestSuite;
struct _GTestSuite {};
typedef uint32_t GTestTrapFlags;
typedef struct _GThread GThread;
struct _GThread {};
typedef uint32_t GThreadError;
typedef struct _GThreadPool GThreadPool;
struct _GThreadPool { uint8_t _data[24]; };
typedef uint32_t GTimeType;
typedef struct _GTimeVal GTimeVal;
struct _GTimeVal { uint8_t _data[16]; };
typedef struct _GTimeZone GTimeZone;
struct _GTimeZone {};
typedef struct _GTimer GTimer;
struct _GTimer {};
typedef uint32_t GTokenType;
typedef struct _GTokenValue GTokenValue;
struct _GTokenValue { uint8_t _data[8]; };
typedef void* GTranslateFunc;
typedef struct _GTrashStack GTrashStack;
struct _GTrashStack { uint8_t _data[8]; };
typedef uint32_t GTraverseFlags;
typedef void* GTraverseFunc;
typedef uint32_t GTraverseType;
typedef struct _GTree GTree;
struct _GTree {};
typedef uint32_t GUnicodeBreakType;
typedef int32_t GUnicodeScript;
typedef uint32_t GUnicodeType;
typedef void* GUnixFDSourceFunc;
typedef uint32_t GUserDirectory;
typedef struct _GVariant GVariant;
struct _GVariant {};
typedef struct _GVariantBuilder GVariantBuilder;
struct _GVariantBuilder { uint8_t _data[128]; };
typedef uint32_t GVariantClass;
typedef uint32_t GVariantParseError;
typedef struct _GVariantType GVariantType;
struct _GVariantType {};
typedef void* GVoidFunc;
typedef void* GBaseFinalizeFunc;
typedef void* GBaseInitFunc;
typedef struct _GBinding GBinding;
typedef uint32_t GBindingFlags;
typedef void* GBindingTransformFunc;
typedef void* GBoxedFreeFunc;
typedef struct _GCClosure GCClosure;
typedef void* GCallback;
typedef void* GClassFinalizeFunc;
typedef void* GClassInitFunc;
typedef struct _GClosure GClosure;
typedef void* GClosureMarshal;
typedef void* GClosureNotify;
typedef struct _GClosureNotifyData GClosureNotifyData;
typedef uint32_t GConnectFlags;
typedef struct _GEnumClass GEnumClass;
typedef struct _GEnumValue GEnumValue;
typedef struct _GFlagsClass GFlagsClass;
typedef struct _GFlagsValue GFlagsValue;
typedef struct _GInitiallyUnowned GInitiallyUnowned;
typedef struct _GInitiallyUnownedClass GInitiallyUnownedClass;
typedef void* GInstanceInitFunc;
typedef void* GInterfaceFinalizeFunc;
typedef struct _GInterfaceInfo GInterfaceInfo;
typedef void* GInterfaceInitFunc;
typedef struct _GObject GObject;
typedef struct _GObjectClass GObjectClass;
typedef struct _GObjectConstructParam GObjectConstructParam;
typedef void* GObjectFinalizeFunc;
typedef void* GObjectGetPropertyFunc;
typedef void* GObjectSetPropertyFunc;
typedef uint32_t GParamFlags;
typedef struct _GParamSpec GParamSpec;
typedef struct _GParamSpecBoolean GParamSpecBoolean;
typedef struct _GParamSpecBoxed GParamSpecBoxed;
typedef struct _GParamSpecChar GParamSpecChar;
typedef struct _GParamSpecClass GParamSpecClass;
typedef struct _GParamSpecDouble GParamSpecDouble;
typedef struct _GParamSpecEnum GParamSpecEnum;
typedef struct _GParamSpecFlags GParamSpecFlags;
typedef struct _GParamSpecFloat GParamSpecFloat;
typedef struct _GParamSpecGType GParamSpecGType;
typedef struct _GParamSpecInt GParamSpecInt;
typedef struct _GParamSpecInt64 GParamSpecInt64;
typedef struct _GParamSpecLong GParamSpecLong;
typedef struct _GParamSpecObject GParamSpecObject;
typedef struct _GParamSpecOverride GParamSpecOverride;
typedef struct _GParamSpecParam GParamSpecParam;
typedef struct _GParamSpecPointer GParamSpecPointer;
typedef struct _GParamSpecPool GParamSpecPool;
typedef struct _GParamSpecString GParamSpecString;
typedef struct _GParamSpecTypeInfo GParamSpecTypeInfo;
typedef struct _GParamSpecUChar GParamSpecUChar;
typedef struct _GParamSpecUInt GParamSpecUInt;
typedef struct _GParamSpecUInt64 GParamSpecUInt64;
typedef struct _GParamSpecULong GParamSpecULong;
typedef struct _GParamSpecUnichar GParamSpecUnichar;
typedef struct _GParamSpecValueArray GParamSpecValueArray;
typedef struct _GParamSpecVariant GParamSpecVariant;
typedef struct _GParameter GParameter;
typedef void* GSignalAccumulator;
typedef void* GSignalEmissionHook;
typedef uint32_t GSignalFlags;
typedef struct _GSignalInvocationHint GSignalInvocationHint;
typedef uint32_t GSignalMatchType;
typedef struct _GSignalQuery GSignalQuery;
typedef void* GToggleNotify;
typedef struct _GTypeCValue GTypeCValue;
typedef struct _GTypeClass GTypeClass;
typedef void* GTypeClassCacheFunc;
typedef uint32_t GTypeDebugFlags;
typedef uint32_t GTypeFlags;
typedef uint32_t GTypeFundamentalFlags;
typedef struct _GTypeFundamentalInfo GTypeFundamentalInfo;
typedef struct _GTypeInfo GTypeInfo;
typedef struct _GTypeInstance GTypeInstance;
typedef struct _GTypeInterface GTypeInterface;
typedef void* GTypeInterfaceCheckFunc;
typedef struct _GTypeModule GTypeModule;
typedef struct _GTypeModuleClass GTypeModuleClass;
typedef struct _GTypePlugin GTypePlugin;
typedef struct _GTypePluginClass GTypePluginClass;
typedef void* GTypePluginCompleteInterfaceInfo;
typedef void* GTypePluginCompleteTypeInfo;
typedef void* GTypePluginUnuse;
typedef void* GTypePluginUse;
typedef struct _GTypeQuery GTypeQuery;
typedef struct _GTypeValueTable GTypeValueTable;
typedef struct _GValue GValue;
typedef struct _GValueArray GValueArray;
typedef void* GValueTransform;
typedef void* GWeakNotify;
typedef struct _GWeakRef GWeakRef;
typedef struct _G_Value__data__union G_Value__data__union;
extern GBindingFlags g_binding_get_flags(GBinding*);
extern GObject* g_binding_get_source(GBinding*);
extern char* g_binding_get_source_property(GBinding*);
extern GObject* g_binding_get_target(GBinding*);
extern char* g_binding_get_target_property(GBinding*);
extern GType g_binding_get_type();
extern void g_cclosure_marshal_BOOLEAN__BOXED_BOXED(GClosure*, GValue*, uint32_t, GValue*, void*, void*);
extern void g_cclosure_marshal_BOOLEAN__FLAGS(GClosure*, GValue*, uint32_t, GValue*, void*, void*);
extern void g_cclosure_marshal_STRING__OBJECT_POINTER(GClosure*, GValue*, uint32_t, GValue*, void*, void*);
extern void g_cclosure_marshal_VOID__BOOLEAN(GClosure*, GValue*, uint32_t, GValue*, void*, void*);
extern void g_cclosure_marshal_VOID__BOXED(GClosure*, GValue*, uint32_t, GValue*, void*, void*);
extern void g_cclosure_marshal_VOID__CHAR(GClosure*, GValue*, uint32_t, GValue*, void*, void*);
extern void g_cclosure_marshal_VOID__DOUBLE(GClosure*, GValue*, uint32_t, GValue*, void*, void*);
extern void g_cclosure_marshal_VOID__ENUM(GClosure*, GValue*, uint32_t, GValue*, void*, void*);
extern void g_cclosure_marshal_VOID__FLAGS(GClosure*, GValue*, uint32_t, GValue*, void*, void*);
extern void g_cclosure_marshal_VOID__FLOAT(GClosure*, GValue*, uint32_t, GValue*, void*, void*);
extern void g_cclosure_marshal_VOID__INT(GClosure*, GValue*, uint32_t, GValue*, void*, void*);
extern void g_cclosure_marshal_VOID__LONG(GClosure*, GValue*, uint32_t, GValue*, void*, void*);
extern void g_cclosure_marshal_VOID__OBJECT(GClosure*, GValue*, uint32_t, GValue*, void*, void*);
extern void g_cclosure_marshal_VOID__PARAM(GClosure*, GValue*, uint32_t, GValue*, void*, void*);
extern void g_cclosure_marshal_VOID__POINTER(GClosure*, GValue*, uint32_t, GValue*, void*, void*);
extern void g_cclosure_marshal_VOID__STRING(GClosure*, GValue*, uint32_t, GValue*, void*, void*);
extern void g_cclosure_marshal_VOID__UCHAR(GClosure*, GValue*, uint32_t, GValue*, void*, void*);
extern void g_cclosure_marshal_VOID__UINT(GClosure*, GValue*, uint32_t, GValue*, void*, void*);
extern void g_cclosure_marshal_VOID__UINT_POINTER(GClosure*, GValue*, uint32_t, GValue*, void*, void*);
extern void g_cclosure_marshal_VOID__ULONG(GClosure*, GValue*, uint32_t, GValue*, void*, void*);
extern void g_cclosure_marshal_VOID__VARIANT(GClosure*, GValue*, uint32_t, GValue*, void*, void*);
extern void g_cclosure_marshal_VOID__VOID(GClosure*, GValue*, uint32_t, GValue*, void*, void*);
extern void g_cclosure_marshal_generic(GClosure*, GValue*, uint32_t, GValue*, void*, void*);
extern GClosure* g_closure_new_object(uint32_t, GObject*);
extern GClosure* g_closure_new_simple(uint32_t, void*);
extern void g_closure_invalidate(GClosure*);
extern void g_closure_invoke(GClosure*, GValue*, uint32_t, GValue*, void*);
extern GClosure* g_closure_ref(GClosure*);
extern void g_closure_sink(GClosure*);
extern void g_closure_unref(GClosure*);
extern GType g_initially_unowned_get_type();
extern GObject* g_object_newv(GType, uint32_t, GParameter*);
extern uint64_t g_object_compat_control(uint64_t, void*);
extern GParamSpec* g_object_interface_find_property(void*, char*);
extern void g_object_interface_install_property(void*, GParamSpec*);
extern GParamSpec** g_object_interface_list_properties(void*, uint32_t*);
extern GBinding* g_object_bind_property(GObject*, char*, GObject*, char*, GBindingFlags);
extern GBinding* g_object_bind_property_with_closures(GObject*, char*, GObject*, char*, GBindingFlags, GClosure*, GClosure*);
extern void g_object_force_floating(GObject*);
extern void g_object_freeze_notify(GObject*);
extern void* g_object_get_data(GObject*, char*);
extern void g_object_get_property(GObject*, char*, GValue*);
extern void* g_object_get_qdata(GObject*, uint32_t);
extern int g_object_is_floating(GObject*);
extern void g_object_notify(GObject*, char*);
extern void g_object_notify_by_pspec(GObject*, GParamSpec*);
extern GObject* g_object_ref(GObject*);
extern GObject* g_object_ref_sink(GObject*);
extern int g_object_replace_data(GObject*, char*, void*, void*, GDestroyNotify, GDestroyNotify*);
extern int g_object_replace_qdata(GObject*, uint32_t, void*, void*, GDestroyNotify, GDestroyNotify*);
extern void g_object_run_dispose(GObject*);
extern void g_object_set_data(GObject*, char*, void*);
extern void g_object_set_property(GObject*, char*, GValue*);
extern void* g_object_steal_data(GObject*, char*);
extern void* g_object_steal_qdata(GObject*, uint32_t);
extern void g_object_thaw_notify(GObject*);
extern void g_object_unref(GObject*);
extern void g_object_watch_closure(GObject*, GClosure*);
extern GType g_object_get_type();
extern GParamSpec* g_object_class_find_property(GObjectClass*, char*);
extern void g_object_class_install_properties(GObjectClass*, uint32_t, GParamSpec**);
extern void g_object_class_install_property(GObjectClass*, uint32_t, GParamSpec*);
extern GParamSpec** g_object_class_list_properties(GObjectClass*, uint32_t*);
extern void g_object_class_override_property(GObjectClass*, uint32_t, char*);
extern char* g_param_spec_get_blurb(GParamSpec*);
extern char* g_param_spec_get_name(GParamSpec*);
extern char* g_param_spec_get_nick(GParamSpec*);
extern void* g_param_spec_get_qdata(GParamSpec*, uint32_t);
extern GParamSpec* g_param_spec_get_redirect_target(GParamSpec*);
extern void g_param_spec_set_qdata(GParamSpec*, uint32_t, void*);
extern void g_param_spec_sink(GParamSpec*);
extern void* g_param_spec_steal_qdata(GParamSpec*, uint32_t);
extern GType intern();
extern GType intern();
extern GType intern();
extern GType intern();
extern GType intern();
extern GType intern();
extern GType intern();
extern GType intern();
extern GType intern();
extern GType intern();
extern GType intern();
extern GType intern();
extern GType intern();
extern GType intern();
extern GType intern();
extern GType intern();
extern void g_param_spec_pool_insert(GParamSpecPool*, GParamSpec*, GType);
extern GParamSpec** g_param_spec_pool_list(GParamSpecPool*, GType, uint32_t*);
extern GList* g_param_spec_pool_list_owned(GParamSpecPool*, GType);
extern GParamSpec* g_param_spec_pool_lookup(GParamSpecPool*, char*, GType, int);
extern void g_param_spec_pool_remove(GParamSpecPool*, GParamSpec*);
extern GParamSpecPool* g_param_spec_pool_new(int);
extern GType intern();
extern GType intern();
extern GType intern();
extern GType intern();
extern GType intern();
extern GType intern();
extern GType intern();
extern GType intern();
extern GTypeClass* g_type_class_peek_parent(GTypeClass*);
extern void g_type_class_unref(GTypeClass*);
extern void g_type_class_add_private(void*, uint64_t);
extern GTypeClass* g_type_class_peek(GType);
extern GTypeClass* g_type_class_peek_static(GType);
extern GTypeClass* g_type_class_ref(GType);
extern GTypeInterface* g_type_interface_peek_parent(GTypeInterface*);
extern void g_type_interface_add_prerequisite(GType, GType);
extern GTypePlugin* g_type_interface_get_plugin(GType, GType);
extern GTypeInterface* g_type_interface_peek(GTypeClass*, GType);
extern GType* g_type_interface_prerequisites(GType, uint32_t*);
extern void g_type_module_add_interface(GTypeModule*, GType, GType, GInterfaceInfo*);
extern GType g_type_module_register_enum(GTypeModule*, char*, GEnumValue*);
extern GType g_type_module_register_flags(GTypeModule*, char*, GFlagsValue*);
extern GType g_type_module_register_type(GTypeModule*, GType, char*, GTypeInfo*, GTypeFlags);
extern void g_type_module_set_name(GTypeModule*, char*);
extern void g_type_module_unuse(GTypeModule*);
extern int g_type_module_use(GTypeModule*);
extern GType g_type_module_get_type();
extern void g_type_plugin_complete_interface_info(GTypePlugin*, GType, GType, GInterfaceInfo*);
extern void g_type_plugin_complete_type_info(GTypePlugin*, GType, GTypeInfo*, GTypeValueTable*);
extern void g_type_plugin_unuse(GTypePlugin*);
extern void g_type_plugin_use(GTypePlugin*);
extern GType g_type_plugin_get_type();
extern void g_value_copy(GValue*, GValue*);
extern GObject* g_value_dup_object(GValue*);
extern char* g_value_dup_string(GValue*);
extern GVariant* g_value_dup_variant(GValue*);
extern int g_value_fits_pointer(GValue*);
extern int g_value_get_boolean(GValue*);
extern void* g_value_get_boxed(GValue*);
extern int8_t g_value_get_char(GValue*);
extern double g_value_get_double(GValue*);
extern int32_t g_value_get_enum(GValue*);
extern uint32_t g_value_get_flags(GValue*);
extern float g_value_get_float(GValue*);
extern GType g_value_get_gtype(GValue*);
extern int32_t g_value_get_int(GValue*);
extern int64_t g_value_get_int64(GValue*);
extern int64_t g_value_get_long(GValue*);
extern GObject* g_value_get_object(GValue*);
extern GParamSpec* g_value_get_param(GValue*);
extern void* g_value_get_pointer(GValue*);
extern int8_t g_value_get_schar(GValue*);
extern char* g_value_get_string(GValue*);
extern uint8_t g_value_get_uchar(GValue*);
extern uint32_t g_value_get_uint(GValue*);
extern uint64_t g_value_get_uint64(GValue*);
extern uint64_t g_value_get_ulong(GValue*);
extern GVariant* g_value_get_variant(GValue*);
extern GValue* g_value_init(GValue*, GType);
extern void* g_value_peek_pointer(GValue*);
extern GValue* g_value_reset(GValue*);
extern void g_value_set_boolean(GValue*, int);
extern void g_value_set_boxed(GValue*, void*);
extern void g_value_set_boxed_take_ownership(GValue*, void*);
extern void g_value_set_char(GValue*, int8_t);
extern void g_value_set_double(GValue*, double);
extern void g_value_set_enum(GValue*, int32_t);
extern void g_value_set_flags(GValue*, uint32_t);
extern void g_value_set_float(GValue*, float);
extern void g_value_set_gtype(GValue*, GType);
extern void g_value_set_instance(GValue*, void*);
extern void g_value_set_int(GValue*, int32_t);
extern void g_value_set_int64(GValue*, int64_t);
extern void g_value_set_long(GValue*, int64_t);
extern void g_value_set_object(GValue*, GObject*);
extern void g_value_set_param(GValue*, GParamSpec*);
extern void g_value_set_pointer(GValue*, void*);
extern void g_value_set_schar(GValue*, int8_t);
extern void g_value_set_static_boxed(GValue*, void*);
extern void g_value_set_static_string(GValue*, char*);
extern void g_value_set_string(GValue*, char*);
extern void g_value_set_string_take_ownership(GValue*, char*);
extern void g_value_set_uchar(GValue*, uint8_t);
extern void g_value_set_uint(GValue*, uint32_t);
extern void g_value_set_uint64(GValue*, uint64_t);
extern void g_value_set_ulong(GValue*, uint64_t);
extern void g_value_set_variant(GValue*, GVariant*);
extern void g_value_take_boxed(GValue*, void*);
extern void g_value_take_string(GValue*, char*);
extern void g_value_take_variant(GValue*, GVariant*);
extern int g_value_transform(GValue*, GValue*);
extern void g_value_unset(GValue*);
extern int g_value_type_compatible(GType, GType);
extern int g_value_type_transformable(GType, GType);
extern GValueArray* g_value_array_new(uint32_t);
extern GValueArray* g_value_array_append(GValueArray*, GValue*);
extern GValueArray* g_value_array_copy(GValueArray*);
extern void g_value_array_free(GValueArray*);
extern GValue* g_value_array_get_nth(GValueArray*, uint32_t);
extern GValueArray* g_value_array_insert(GValueArray*, uint32_t, GValue*);
extern GValueArray* g_value_array_prepend(GValueArray*, GValue*);
extern GValueArray* g_value_array_remove(GValueArray*, uint32_t);
extern GValueArray* g_value_array_sort_with_data(GValueArray*, GCompareDataFunc, void*);
extern void g_boxed_free(GType, void*);
extern void g_enum_complete_type_info(GType, GTypeInfo*, GEnumValue*);
extern GType g_enum_register_static(char*, GEnumValue*);
extern void g_flags_complete_type_info(GType, GTypeInfo*, GFlagsValue*);
extern GType g_flags_register_static(char*, GFlagsValue*);
extern GType g_gtype_get_type();
extern GParamSpec* g_param_spec_boolean(char*, char*, char*, int, GParamFlags);
extern GParamSpec* g_param_spec_boxed(char*, char*, char*, GType, GParamFlags);
extern GParamSpec* g_param_spec_char(char*, char*, char*, int8_t, int8_t, int8_t, GParamFlags);
extern GParamSpec* g_param_spec_double(char*, char*, char*, double, double, double, GParamFlags);
extern GParamSpec* g_param_spec_enum(char*, char*, char*, GType, int32_t, GParamFlags);
extern GParamSpec* g_param_spec_flags(char*, char*, char*, GType, uint32_t, GParamFlags);
extern GParamSpec* g_param_spec_float(char*, char*, char*, float, float, float, GParamFlags);
extern GParamSpec* g_param_spec_gtype(char*, char*, char*, GType, GParamFlags);
extern GParamSpec* g_param_spec_int(char*, char*, char*, int32_t, int32_t, int32_t, GParamFlags);
extern GParamSpec* g_param_spec_int64(char*, char*, char*, int64_t, int64_t, int64_t, GParamFlags);
extern GParamSpec* g_param_spec_long(char*, char*, char*, int64_t, int64_t, int64_t, GParamFlags);
extern GParamSpec* g_param_spec_object(char*, char*, char*, GType, GParamFlags);
extern GParamSpec* g_param_spec_param(char*, char*, char*, GType, GParamFlags);
extern GParamSpec* g_param_spec_pointer(char*, char*, char*, GParamFlags);
extern GParamSpec* g_param_spec_string(char*, char*, char*, char*, GParamFlags);
extern GParamSpec* g_param_spec_uchar(char*, char*, char*, uint8_t, uint8_t, uint8_t, GParamFlags);
extern GParamSpec* g_param_spec_uint(char*, char*, char*, uint32_t, uint32_t, uint32_t, GParamFlags);
extern GParamSpec* g_param_spec_uint64(char*, char*, char*, uint64_t, uint64_t, uint64_t, GParamFlags);
extern GParamSpec* g_param_spec_ulong(char*, char*, char*, uint64_t, uint64_t, uint64_t, GParamFlags);
extern GParamSpec* g_param_spec_unichar(char*, char*, char*, uint32_t, GParamFlags);
extern GParamSpec* g_param_spec_variant(char*, char*, char*, GVariantType*, GVariant*, GParamFlags);
extern GType g_param_type_register_static(char*, GParamSpecTypeInfo*);
extern int g_param_value_convert(GParamSpec*, GValue*, GValue*, int);
extern int g_param_value_defaults(GParamSpec*, GValue*);
extern void g_param_value_set_default(GParamSpec*, GValue*);
extern int g_param_value_validate(GParamSpec*, GValue*);
extern int32_t g_param_values_cmp(GParamSpec*, GValue*, GValue*);
extern GType g_pointer_type_register_static(char*);
extern int g_signal_accumulator_first_wins(GSignalInvocationHint*, GValue*, GValue*, void*);
extern int g_signal_accumulator_true_handled(GSignalInvocationHint*, GValue*, GValue*, void*);
extern uint64_t g_signal_add_emission_hook(uint32_t, uint32_t, GSignalEmissionHook, void*, GDestroyNotify);
extern void g_signal_chain_from_overridden(GValue*, GValue*);
extern uint64_t g_signal_connect_closure(void*, char*, GClosure*, int);
extern uint64_t g_signal_connect_closure_by_id(void*, uint32_t, uint32_t, GClosure*, int);
extern void g_signal_emitv(GValue*, uint32_t, uint32_t, GValue*);
extern GSignalInvocationHint* g_signal_get_invocation_hint(void*);
extern void g_signal_handler_block(void*, uint64_t);
extern void g_signal_handler_disconnect(void*, uint64_t);
extern uint64_t g_signal_handler_find(void*, GSignalMatchType, uint32_t, uint32_t, GClosure*, void*, void*);
extern int g_signal_handler_is_connected(void*, uint64_t);
extern void g_signal_handler_unblock(void*, uint64_t);
extern uint32_t g_signal_handlers_block_matched(void*, GSignalMatchType, uint32_t, uint32_t, GClosure*, void*, void*);
extern void g_signal_handlers_destroy(void*);
extern uint32_t g_signal_handlers_disconnect_matched(void*, GSignalMatchType, uint32_t, uint32_t, GClosure*, void*, void*);
extern uint32_t g_signal_handlers_unblock_matched(void*, GSignalMatchType, uint32_t, uint32_t, GClosure*, void*, void*);
extern int g_signal_has_handler_pending(void*, uint32_t, uint32_t, int);
extern uint32_t* g_signal_list_ids(GType, uint32_t*);
extern uint32_t g_signal_lookup(char*, GType);
extern char* g_signal_name(uint32_t);
extern void g_signal_override_class_closure(uint32_t, GType, GClosure*);
extern int g_signal_parse_name(char*, GType, uint32_t*, uint32_t*, int);
extern void g_signal_query(uint32_t, GSignalQuery*);
extern void g_signal_remove_emission_hook(uint32_t, uint64_t);
extern void g_signal_set_va_marshaller(uint32_t, GType, GVaClosureMarshal);
extern void g_signal_stop_emission(void*, uint32_t, uint32_t);
extern void g_signal_stop_emission_by_name(void*, char*);
extern GClosure* g_signal_type_cclosure_new(GType, uint32_t);
extern void g_source_set_closure(GSource*, GClosure*);
extern void g_source_set_dummy_callback(GSource*);
extern char* g_strdup_value_contents(GValue*);
extern void g_type_add_class_private(GType, uint64_t);
extern void g_type_add_interface_dynamic(GType, GType, GTypePlugin*);
extern void g_type_add_interface_static(GType, GType, GInterfaceInfo*);
extern int g_type_check_class_is_a(GTypeClass*, GType);
extern int g_type_check_instance(GTypeInstance*);
extern int g_type_check_instance_is_a(GTypeInstance*, GType);
extern int g_type_check_is_value_type(GType);
extern int g_type_check_value(GValue*);
extern int g_type_check_value_holds(GValue*, GType);
extern GType* g_type_children(GType, uint32_t*);
extern GTypeInterface* g_type_default_interface_peek(GType);
extern GTypeInterface* g_type_default_interface_ref(GType);
extern void g_type_default_interface_unref(GTypeInterface*);
extern uint32_t g_type_depth(GType);
extern void g_type_ensure(GType);
extern void g_type_free_instance(GTypeInstance*);
extern GType g_type_from_name(char*);
extern GType g_type_fundamental(GType);
extern GType g_type_fundamental_next();
extern GTypePlugin* g_type_get_plugin(GType);
extern void* g_type_get_qdata(GType, uint32_t);
extern uint32_t g_type_get_type_registration_serial();
extern void g_type_init();
extern void g_type_init_with_debug_flags(GTypeDebugFlags);
extern GType* g_type_interfaces(GType, uint32_t*);
extern int g_type_is_a(GType, GType);
extern char* g_type_name(GType);
extern char* g_type_name_from_class(GTypeClass*);
extern char* g_type_name_from_instance(GTypeInstance*);
extern GType g_type_next_base(GType, GType);
extern GType g_type_parent(GType);
extern uint32_t g_type_qname(GType);
extern void g_type_query(GType, GTypeQuery*);
extern GType g_type_register_dynamic(GType, char*, GTypePlugin*, GTypeFlags);
extern GType g_type_register_fundamental(GType, char*, GTypeInfo*, GTypeFundamentalInfo*, GTypeFlags);
extern GType g_type_register_static(GType, char*, GTypeInfo*, GTypeFlags);
extern void g_type_set_qdata(GType, uint32_t, void*);
extern int g_type_test_flags(GType, uint32_t);
struct _GCClosure { uint8_t _data[72]; };
struct _GClosure { uint8_t _data[64]; };
struct _GClosureNotifyData { uint8_t _data[16]; };
struct _GEnumClass { uint8_t _data[32]; };
struct _GEnumValue { uint8_t _data[24]; };
struct _GFlagsClass { uint8_t _data[24]; };
struct _GFlagsValue { uint8_t _data[24]; };
struct _GInitiallyUnownedClass { uint8_t _data[136]; };
struct _GInterfaceInfo { uint8_t _data[24]; };
struct _GObjectClass { uint8_t _data[136]; };
struct _GObjectConstructParam { uint8_t _data[16]; };
struct _GParamSpecClass { uint8_t _data[80]; };
struct _GParamSpecPool {};
struct _GParamSpecTypeInfo { uint8_t _data[56]; };
struct _GParameter { uint8_t _data[32]; };
struct _GSignalInvocationHint { uint8_t _data[12]; };
struct _GSignalQuery { uint8_t _data[56]; };
struct _GTypeCValue { uint8_t _data[8]; };
struct _GTypeClass { uint8_t _data[8]; };
struct _GTypeFundamentalInfo { uint8_t _data[4]; };
struct _GTypeInfo { uint8_t _data[72]; };
struct _GTypeInstance { uint8_t _data[8]; };
struct _GTypeInterface { uint8_t _data[16]; };
struct _GTypeModuleClass { uint8_t _data[184]; };
struct _GTypePluginClass { uint8_t _data[48]; };
struct _GTypeQuery { uint8_t _data[24]; };
struct _GTypeValueTable { uint8_t _data[64]; };
struct _GValue { uint8_t _data[24]; };
struct _GValueArray { uint8_t _data[24]; };
struct _GWeakRef {};
struct _G_Value__data__union { uint8_t _data[8]; };
