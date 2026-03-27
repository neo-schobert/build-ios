#include "pch-cpp.hpp"





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

struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IUserIdentifierProvider_t37955FEADD673B2F4333F6D756F9F9BEC3486E41;
struct InstallationId_tA5712B394172DB4DBA3B5F9A67D5522D37E2B873;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct String_t;
struct UnityAdsIdentifier_t8D3A8D6DB9A1FB469E2E7F3D58B30C3D0D71DA56;
struct UnityAnalyticsIdentifier_tAB8DD85C666D878FC108C324E10DF6528B5BDA5D;
struct UnityEngineIdentifier_t1EB294A627497D2103614B8365E7861F72E0DA83;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnity_Services_Core_Device[];
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IUserIdentifierProvider_t37955FEADD673B2F4333F6D756F9F9BEC3486E41_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAdsIdentifier_t8D3A8D6DB9A1FB469E2E7F3D58B30C3D0D71DA56_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAnalyticsIdentifier_tAB8DD85C666D878FC108C324E10DF6528B5BDA5D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityEngineIdentifier_t1EB294A627497D2103614B8365E7861F72E0DA83_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral20353326ACF03BB4112F3080DBCA0AC47DBC7BB2;
IL2CPP_EXTERN_C String_t* _stringLiteral9802A0C242B6B1F11EC74461BB2DF09CE62B8035;
IL2CPP_EXTERN_C String_t* _stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6;
IL2CPP_EXTERN_C String_t* _stringLiteralECBE14D0ACE36FACE92343327DF7DFEC932523A5;
IL2CPP_EXTERN_C const RuntimeMethod* InstallationId_CreateIdentifier_mC089486FCD96983C9186689C41D1D75E36EFB90C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InstallationId_GenerateGuid_m7220D8C5AE5B4DCA4F4C01A6F921FF66C23E855A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InstallationId_GetOrCreateIdentifier_mB808E735A25CB3357E33337F9A4B737DDAB6B40F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InstallationId_ReadIdentifierFromFile_m126AF7B4F947DBB382AA8848D51FEA52C91C3E7C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InstallationId_WriteIdentifierToFile_m67273AD8773FDBEE468B0BB7F502B3383AB9A6C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InstallationId__ctor_mD8E8D5B7A72C54F2517D33F9F2C89FA708CC6BF7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NSUserDefaults_GetString_mA77E63188B222653CB1C8AA0B0CB089F7EE0690E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NSUserDefaults_SetString_m0BFB3A66E345CE80C080620675028FDE686166F0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityAdsIdentifier__ctor_mFD5085EB0AD902D689B820D13D697CE640E2E7B8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityAdsIdentifier_get_IdentifierForInstallIos_m510AD72EA3847591D1F1AE3214FE4E81A258092E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityAdsIdentifier_get_UserId_m4E41B6AEB6405B6BFA7D4E52FE3F66478A18D90A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityAdsIdentifier_set_IdentifierForInstallIos_mD9D71B7910AA0380D1C5E9445A04B6E812C5F835_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityAdsIdentifier_set_UserId_mA2519CC19694D24C35D6E2E72B79E2CE34DACA4F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityAnalyticsIdentifier__ctor_mE19B73CB1414B5AC0619E8EF1366C0164B06D14B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityAnalyticsIdentifier_get_UserId_m15964ABDB88E2D752C471143ED9C5A32017989CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityAnalyticsIdentifier_set_UserId_m2751FA3CB0A777DAC8AA56ECBE8945EED55CAC3C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEngineIdentifier__ctor_m805AEF091D20B8DEFC5CDA619D586C380B1C00CA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEngineIdentifier_get_UserId_m34135DB2F190D05C1B89D8BA6BC2344C8F18C796_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEngineIdentifier_set_UserId_mCA38EC3A0364B91D605849C3390177F6006B0E99_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Guid_t_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* InstallationId_tA5712B394172DB4DBA3B5F9A67D5522D37E2B873_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* UnityAdsIdentifier_t8D3A8D6DB9A1FB469E2E7F3D58B30C3D0D71DA56_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* UnityAnalyticsIdentifier_tAB8DD85C666D878FC108C324E10DF6528B5BDA5D_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* UnityEngineIdentifier_t1EB294A627497D2103614B8365E7861F72E0DA83_0_0_0_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct U3CModuleU3E_tC6F3BE26E8DBB3B8108F8360B026950D37DAF754 
{
};
struct InstallationId_tA5712B394172DB4DBA3B5F9A67D5522D37E2B873  : public RuntimeObject
{
	String_t* ___Identifier;
	RuntimeObject* ___UnityAdsIdentifierProvider;
	RuntimeObject* ___UnityAnalyticsIdentifierProvider;
	RuntimeObject* ___UnityEngineIdentifierProvider;
};
struct NSUserDefaults_t518A0A24332EC9EC2361F2C04C06166E301FF25C  : public RuntimeObject
{
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct UnityAdsIdentifier_t8D3A8D6DB9A1FB469E2E7F3D58B30C3D0D71DA56  : public RuntimeObject
{
};
struct UnityAnalyticsIdentifier_tAB8DD85C666D878FC108C324E10DF6528B5BDA5D  : public RuntimeObject
{
};
struct UnityEngineIdentifier_t1EB294A627497D2103614B8365E7861F72E0DA83  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Guid_t 
{
	int32_t ____a;
	int16_t ____b;
	int16_t ____c;
	uint8_t ____d;
	uint8_t ____e;
	uint8_t ____f;
	uint8_t ____g;
	uint8_t ____h;
	uint8_t ____i;
	uint8_t ____j;
	uint8_t ____k;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};
struct Exception_t  : public RuntimeObject
{
	String_t* ____className;
	String_t* ____message;
	RuntimeObject* ____data;
	Exception_t* ____innerException;
	String_t* ____helpURL;
	RuntimeObject* ____stackTrace;
	String_t* ____stackTraceString;
	String_t* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	RuntimeObject* ____dynamicMethods;
	int32_t ____HResult;
	String_t* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_pinvoke
{
	char* ____className;
	char* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_pinvoke* ____innerException;
	char* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	char* ____stackTraceString;
	char* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	char* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className;
	Il2CppChar* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_com* ____innerException;
	Il2CppChar* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	Il2CppChar* ____stackTraceString;
	Il2CppChar* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	Il2CppChar* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	String_t* ____paramName;
};
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct Guid_t_StaticFields
{
	Guid_t ___Empty;
};
struct Exception_t_StaticFields
{
	RuntimeObject* ___s_EDILock;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif



IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAdsIdentifier__ctor_mFD5085EB0AD902D689B820D13D697CE640E2E7B8 (UnityAdsIdentifier_t8D3A8D6DB9A1FB469E2E7F3D58B30C3D0D71DA56* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAnalyticsIdentifier__ctor_mE19B73CB1414B5AC0619E8EF1366C0164B06D14B (UnityAnalyticsIdentifier_tAB8DD85C666D878FC108C324E10DF6528B5BDA5D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEngineIdentifier__ctor_m805AEF091D20B8DEFC5CDA619D586C380B1C00CA (UnityEngineIdentifier_t1EB294A627497D2103614B8365E7861F72E0DA83* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InstallationId_CreateIdentifier_mC089486FCD96983C9186689C41D1D75E36EFB90C (InstallationId_tA5712B394172DB4DBA3B5F9A67D5522D37E2B873* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* InstallationId_ReadIdentifierFromFile_m126AF7B4F947DBB382AA8848D51FEA52C91C3E7C (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InstallationId_WriteIdentifierToFile_m67273AD8773FDBEE468B0BB7F502B3383AB9A6C4 (String_t* ___0_identifier, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* InstallationId_GenerateGuid_m7220D8C5AE5B4DCA4F4C01A6F921FF66C23E855A (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlayerPrefs_GetString_mA4C9F842BF77E5572AB20EA087C7048F870D02AE (String_t* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetString_mF4F457C81BB75F0213547C6287BA36E15E1F0256 (String_t* ___0_key, String_t* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_Save_m82567E045D69C838112EA204B60C144D4C1EA3AE (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Guid_t Guid_NewGuid_m1F4894E8DC089811D6252148AD5858E58D43A7BD (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Guid_ToString_m2BFFD5FA726E03FA707AAFCCF065896C46D5290C (Guid_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NSUserDefaults_UserDefaultsGetString_m92C7603D4E38B141A88AC3E2B87B1DF1600A06A8 (String_t* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NSUserDefaults_UserDefaultsSetString_m6D339E36904A6238646E398703ED1CB13D09BA83 (String_t* ___0_key, String_t* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityAdsIdentifier_get_IdentifierForInstallIos_m510AD72EA3847591D1F1AE3214FE4E81A258092E (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAdsIdentifier_set_IdentifierForInstallIos_mD9D71B7910AA0380D1C5E9445A04B6E812C5F835 (String_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NSUserDefaults_GetString_mA77E63188B222653CB1C8AA0B0CB089F7EE0690E (String_t* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NSUserDefaults_SetString_m0BFB3A66E345CE80C080620675028FDE686166F0 (String_t* ___0_key, String_t* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Identifiers_get_installationId_mD3ECC6BF716CA29158D977D82861214A105AA6B9 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C char* DEFAULT_CALL UOCPUserDefaultsGetString(char*);
IL2CPP_EXTERN_C void DEFAULT_CALL UOCPUserDefaultsSetString(char*, char*);
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
// Method Definition Index: 139879
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InstallationId__ctor_mD8E8D5B7A72C54F2517D33F9F2C89FA708CC6BF7 (InstallationId_tA5712B394172DB4DBA3B5F9A67D5522D37E2B873* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InstallationId__ctor_mD8E8D5B7A72C54F2517D33F9F2C89FA708CC6BF7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InstallationId_tA5712B394172DB4DBA3B5F9A67D5522D37E2B873_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAdsIdentifier_t8D3A8D6DB9A1FB469E2E7F3D58B30C3D0D71DA56_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAnalyticsIdentifier_tAB8DD85C666D878FC108C324E10DF6528B5BDA5D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEngineIdentifier_t1EB294A627497D2103614B8365E7861F72E0DA83_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, InstallationId__ctor_mD8E8D5B7A72C54F2517D33F9F2C89FA708CC6BF7_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 0));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 1));
	{
		//<source_info:./Library/PackageCache/com.unity.services.core@8ba50f624741/Runtime/Device/InstallationId.cs:17>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 2));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 3));
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 3));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 4));
		//<source_info:./Library/PackageCache/com.unity.services.core@8ba50f624741/Runtime/Device/InstallationId.cs:19>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 5));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 6));
		UnityAdsIdentifier_t8D3A8D6DB9A1FB469E2E7F3D58B30C3D0D71DA56* L_0 = (UnityAdsIdentifier_t8D3A8D6DB9A1FB469E2E7F3D58B30C3D0D71DA56*)il2cpp_codegen_object_new(UnityAdsIdentifier_t8D3A8D6DB9A1FB469E2E7F3D58B30C3D0D71DA56_il2cpp_TypeInfo_var);
		UnityAdsIdentifier__ctor_mFD5085EB0AD902D689B820D13D697CE640E2E7B8(L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 6));
		__this->___UnityAdsIdentifierProvider = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___UnityAdsIdentifierProvider), (void*)L_0);
		//<source_info:./Library/PackageCache/com.unity.services.core@8ba50f624741/Runtime/Device/InstallationId.cs:20>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 7));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 8));
		UnityAnalyticsIdentifier_tAB8DD85C666D878FC108C324E10DF6528B5BDA5D* L_1 = (UnityAnalyticsIdentifier_tAB8DD85C666D878FC108C324E10DF6528B5BDA5D*)il2cpp_codegen_object_new(UnityAnalyticsIdentifier_tAB8DD85C666D878FC108C324E10DF6528B5BDA5D_il2cpp_TypeInfo_var);
		UnityAnalyticsIdentifier__ctor_mE19B73CB1414B5AC0619E8EF1366C0164B06D14B(L_1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 8));
		__this->___UnityAnalyticsIdentifierProvider = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___UnityAnalyticsIdentifierProvider), (void*)L_1);
		//<source_info:./Library/PackageCache/com.unity.services.core@8ba50f624741/Runtime/Device/InstallationId.cs:21>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 9));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 10));
		UnityEngineIdentifier_t1EB294A627497D2103614B8365E7861F72E0DA83* L_2 = (UnityEngineIdentifier_t1EB294A627497D2103614B8365E7861F72E0DA83*)il2cpp_codegen_object_new(UnityEngineIdentifier_t1EB294A627497D2103614B8365E7861F72E0DA83_il2cpp_TypeInfo_var);
		UnityEngineIdentifier__ctor_m805AEF091D20B8DEFC5CDA619D586C380B1C00CA(L_2, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 10));
		__this->___UnityEngineIdentifierProvider = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___UnityEngineIdentifierProvider), (void*)L_2);
		//<source_info:./Library/PackageCache/com.unity.services.core@8ba50f624741/Runtime/Device/InstallationId.cs:22>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 11));
		return;
	}
}
// Method Definition Index: 139880
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* InstallationId_GetOrCreateIdentifier_mB808E735A25CB3357E33337F9A4B737DDAB6B40F (InstallationId_tA5712B394172DB4DBA3B5F9A67D5522D37E2B873* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InstallationId_GetOrCreateIdentifier_mB808E735A25CB3357E33337F9A4B737DDAB6B40F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InstallationId_tA5712B394172DB4DBA3B5F9A67D5522D37E2B873_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	String_t* V_1 = NULL;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, InstallationId_GetOrCreateIdentifier_mB808E735A25CB3357E33337F9A4B737DDAB6B40F_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 12));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 13));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 14));
		//<source_info:./Library/PackageCache/com.unity.services.core@8ba50f624741/Runtime/Device/InstallationId.cs:26>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 15));
		String_t* L_0 = __this->___Identifier;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 16));
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 16));
		V_0 = L_1;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 17));
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.services.core@8ba50f624741/Runtime/Device/InstallationId.cs:27>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 18));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 19));
		InstallationId_CreateIdentifier_mC089486FCD96983C9186689C41D1D75E36EFB90C(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 19));
	}

IL_0017:
	{
		//<source_info:./Library/PackageCache/com.unity.services.core@8ba50f624741/Runtime/Device/InstallationId.cs:29>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 20));
		String_t* L_3 = __this->___Identifier;
		V_1 = L_3;
		goto IL_0020;
	}

IL_0020:
	{
		//<source_info:./Library/PackageCache/com.unity.services.core@8ba50f624741/Runtime/Device/InstallationId.cs:30>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 21));
		String_t* L_4 = V_1;
		return L_4;
	}
}
// Method Definition Index: 139881
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InstallationId_CreateIdentifier_mC089486FCD96983C9186689C41D1D75E36EFB90C (InstallationId_tA5712B394172DB4DBA3B5F9A67D5522D37E2B873* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUserIdentifierProvider_t37955FEADD673B2F4333F6D756F9F9BEC3486E41_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InstallationId_CreateIdentifier_mC089486FCD96983C9186689C41D1D75E36EFB90C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InstallationId_tA5712B394172DB4DBA3B5F9A67D5522D37E2B873_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1), (&V_2));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, InstallationId_CreateIdentifier_mC089486FCD96983C9186689C41D1D75E36EFB90C_RuntimeMethod_var, methodExecutionContextThis, NULL, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 22));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 23));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 24));
		//<source_info:./Library/PackageCache/com.unity.services.core@8ba50f624741/Runtime/Device/InstallationId.cs:34>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 25));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 26));
		String_t* L_0;
		L_0 = InstallationId_ReadIdentifierFromFile_m126AF7B4F947DBB382AA8848D51FEA52C91C3E7C(NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 26));
		__this->___Identifier = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Identifier), (void*)L_0);
		//<source_info:./Library/PackageCache/com.unity.services.core@8ba50f624741/Runtime/Device/InstallationId.cs:35>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 27));
		String_t* L_1 = __this->___Identifier;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 28));
		bool L_2;
		L_2 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 28));
		V_3 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 29));
		bool L_3 = V_3;
		if (!L_3)
		{
			goto IL_0024;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 30));
		//<source_info:./Library/PackageCache/com.unity.services.core@8ba50f624741/Runtime/Device/InstallationId.cs:37>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 31));
		goto IL_00fd;
	}

IL_0024:
	{
		//<source_info:./Library/PackageCache/com.unity.services.core@8ba50f624741/Runtime/Device/InstallationId.cs:40>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 32));
		RuntimeObject* L_4 = __this->___UnityEngineIdentifierProvider;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 33));
		NullCheck(L_4);
		String_t* L_5;
		L_5 = InterfaceFuncInvoker0< String_t* >::Invoke(0, IUserIdentifierProvider_t37955FEADD673B2F4333F6D756F9F9BEC3486E41_il2cpp_TypeInfo_var, L_4);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 33));
		V_0 = L_5;
		//<source_info:./Library/PackageCache/com.unity.services.core@8ba50f624741/Runtime/Device/InstallationId.cs:41>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 34));
		String_t* L_6 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 35));
		bool L_7;
		L_7 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_6, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 35));
		V_4 = (bool)((((int32_t)L_7) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 36));
		bool L_8 = V_4;
		if (!L_8)
		{
			goto IL_0058;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 37));
		//<source_info:./Library/PackageCache/com.unity.services.core@8ba50f624741/Runtime/Device/InstallationId.cs:43>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 38));
		String_t* L_9 = V_0;
		__this->___Identifier = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Identifier), (void*)L_9);
		//<source_info:./Library/PackageCache/com.unity.services.core@8ba50f624741/Runtime/Device/InstallationId.cs:44>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 39));
		String_t* L_10 = __this->___Identifier;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 40));
		InstallationId_WriteIdentifierToFile_m67273AD8773FDBEE468B0BB7F502B3383AB9A6C4(L_10, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 40));
		//<source_info:./Library/PackageCache/com.unity.services.core@8ba50f624741/Runtime/Device/InstallationId.cs:45>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 41));
		goto IL_00fd;
	}

IL_0058:
	{
		//<source_info:./Library/PackageCache/com.unity.services.core@8ba50f624741/Runtime/Device/InstallationId.cs:48>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 42));
		RuntimeObject* L_11 = __this->___UnityAnalyticsIdentifierProvider;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 43));
		NullCheck(L_11);
		String_t* L_12;
		L_12 = InterfaceFuncInvoker0< String_t* >::Invoke(0, IUserIdentifierProvider_t37955FEADD673B2F4333F6D756F9F9BEC3486E41_il2cpp_TypeInfo_var, L_11);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 43));
		V_1 = L_12;
		//<source_info:./Library/PackageCache/com.unity.services.core@8ba50f624741/Runtime/Device/InstallationId.cs:49>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 44));
		RuntimeObject* L_13 = __this->___UnityAdsIdentifierProvider;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 45));
		NullCheck(L_13);
		String_t* L_14;
		L_14 = InterfaceFuncInvoker0< String_t* >::Invoke(0, IUserIdentifierProvider_t37955FEADD673B2F4333F6D756F9F9BEC3486E41_il2cpp_TypeInfo_var, L_13);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 45));
		V_2 = L_14;
		//<source_info:./Library/PackageCache/com.unity.services.core@8ba50f624741/Runtime/Device/InstallationId.cs:51>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 46));
		String_t* L_15 = V_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 47));
		bool L_16;
		L_16 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_15, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 47));
		V_5 = (bool)((((int32_t)L_16) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 48));
		bool L_17 = V_5;
		if (!L_17)
		{
			goto IL_008a;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 49));
		//<source_info:./Library/PackageCache/com.unity.services.core@8ba50f624741/Runtime/Device/InstallationId.cs:53>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 50));
		String_t* L_18 = V_1;
		__this->___Identifier = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Identifier), (void*)L_18);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 51));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 52));
		goto IL_00b1;
	}

IL_008a:
	{
		//<source_info:./Library/PackageCache/com.unity.services.core@8ba50f624741/Runtime/Device/InstallationId.cs:55>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 53));
		String_t* L_19 = V_2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 54));
		bool L_20;
		L_20 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_19, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 54));
		V_6 = (bool)((((int32_t)L_20) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 55));
		bool L_21 = V_6;
		if (!L_21)
		{
			goto IL_00a4;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 56));
		//<source_info:./Library/PackageCache/com.unity.services.core@8ba50f624741/Runtime/Device/InstallationId.cs:57>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 57));
		String_t* L_22 = V_2;
		__this->___Identifier = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Identifier), (void*)L_22);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 58));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 59));
		goto IL_00b1;
	}

IL_00a4:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 60));
		//<source_info:./Library/PackageCache/com.unity.services.core@8ba50f624741/Runtime/Device/InstallationId.cs:61>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 61));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 62));
		String_t* L_23;
		L_23 = InstallationId_GenerateGuid_m7220D8C5AE5B4DCA4F4C01A6F921FF66C23E855A(NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 62));
		__this->___Identifier = L_23;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Identifier), (void*)L_23);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 63));
	}

IL_00b1:
	{
		//<source_info:./Library/PackageCache/com.unity.services.core@8ba50f624741/Runtime/Device/InstallationId.cs:64>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 64));
		String_t* L_24 = __this->___Identifier;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 65));
		InstallationId_WriteIdentifierToFile_m67273AD8773FDBEE468B0BB7F502B3383AB9A6C4(L_24, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 65));
		//<source_info:./Library/PackageCache/com.unity.services.core@8ba50f624741/Runtime/Device/InstallationId.cs:66>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 66));
		String_t* L_25 = V_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 67));
		bool L_26;
		L_26 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_25, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 67));
		V_7 = L_26;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 68));
		bool L_27 = V_7;
		if (!L_27)
		{
			goto IL_00dd;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 69));
		//<source_info:./Library/PackageCache/com.unity.services.core@8ba50f624741/Runtime/Device/InstallationId.cs:68>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 70));
		RuntimeObject* L_28 = __this->___UnityAnalyticsIdentifierProvider;
		String_t* L_29 = __this->___Identifier;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 71));
		NullCheck(L_28);
		InterfaceActionInvoker1< String_t* >::Invoke(1, IUserIdentifierProvider_t37955FEADD673B2F4333F6D756F9F9BEC3486E41_il2cpp_TypeInfo_var, L_28, L_29);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 71));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 72));
	}

IL_00dd:
	{
		//<source_info:./Library/PackageCache/com.unity.services.core@8ba50f624741/Runtime/Device/InstallationId.cs:71>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 73));
		String_t* L_30 = V_2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 74));
		bool L_31;
		L_31 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_30, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 74));
		V_8 = L_31;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 75));
		bool L_32 = V_8;
		if (!L_32)
		{
			goto IL_00fd;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 76));
		//<source_info:./Library/PackageCache/com.unity.services.core@8ba50f624741/Runtime/Device/InstallationId.cs:73>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 77));
		RuntimeObject* L_33 = __this->___UnityAdsIdentifierProvider;
		String_t* L_34 = __this->___Identifier;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 78));
		NullCheck(L_33);
		InterfaceActionInvoker1< String_t* >::Invoke(1, IUserIdentifierProvider_t37955FEADD673B2F4333F6D756F9F9BEC3486E41_il2cpp_TypeInfo_var, L_33, L_34);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 78));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 79));
	}

IL_00fd:
	{
		//<source_info:./Library/PackageCache/com.unity.services.core@8ba50f624741/Runtime/Device/InstallationId.cs:75>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 80));
		return;
	}
}
// Method Definition Index: 139882
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* InstallationId_ReadIdentifierFromFile_m126AF7B4F947DBB382AA8848D51FEA52C91C3E7C (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InstallationId_ReadIdentifierFromFile_m126AF7B4F947DBB382AA8848D51FEA52C91C3E7C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9802A0C242B6B1F11EC74461BB2DF09CE62B8035);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, InstallationId_ReadIdentifierFromFile_m126AF7B4F947DBB382AA8848D51FEA52C91C3E7C_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 81));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 82));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 83));
		//<source_info:./Library/PackageCache/com.unity.services.core@8ba50f624741/Runtime/Device/InstallationId.cs:79>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 84));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 85));
		String_t* L_0;
		L_0 = PlayerPrefs_GetString_mA4C9F842BF77E5572AB20EA087C7048F870D02AE(_stringLiteral9802A0C242B6B1F11EC74461BB2DF09CE62B8035, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 85));
		V_0 = L_0;
		goto IL_000e;
	}

IL_000e:
	{
		//<source_info:./Library/PackageCache/com.unity.services.core@8ba50f624741/Runtime/Device/InstallationId.cs:80>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 86));
		String_t* L_1 = V_0;
		return L_1;
	}
}
// Method Definition Index: 139883
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InstallationId_WriteIdentifierToFile_m67273AD8773FDBEE468B0BB7F502B3383AB9A6C4 (String_t* ___0_identifier, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InstallationId_WriteIdentifierToFile_m67273AD8773FDBEE468B0BB7F502B3383AB9A6C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9802A0C242B6B1F11EC74461BB2DF09CE62B8035);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_identifier));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, InstallationId_WriteIdentifierToFile_m67273AD8773FDBEE468B0BB7F502B3383AB9A6C4_RuntimeMethod_var, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 87));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 88));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 89));
		//<source_info:./Library/PackageCache/com.unity.services.core@8ba50f624741/Runtime/Device/InstallationId.cs:84>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 90));
		String_t* L_0 = ___0_identifier;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 91));
		PlayerPrefs_SetString_mF4F457C81BB75F0213547C6287BA36E15E1F0256(_stringLiteral9802A0C242B6B1F11EC74461BB2DF09CE62B8035, L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 91));
		//<source_info:./Library/PackageCache/com.unity.services.core@8ba50f624741/Runtime/Device/InstallationId.cs:85>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 92));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 93));
		PlayerPrefs_Save_m82567E045D69C838112EA204B60C144D4C1EA3AE(NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 93));
		//<source_info:./Library/PackageCache/com.unity.services.core@8ba50f624741/Runtime/Device/InstallationId.cs:86>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 94));
		return;
	}
}
// Method Definition Index: 139884
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* InstallationId_GenerateGuid_m7220D8C5AE5B4DCA4F4C01A6F921FF66C23E855A (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Guid_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InstallationId_GenerateGuid_m7220D8C5AE5B4DCA4F4C01A6F921FF66C23E855A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Guid_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, InstallationId_GenerateGuid_m7220D8C5AE5B4DCA4F4C01A6F921FF66C23E855A_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 95));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 96));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 97));
		//<source_info:./Library/PackageCache/com.unity.services.core@8ba50f624741/Runtime/Device/InstallationId.cs:90>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 98));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 99));
		Guid_t L_0;
		L_0 = Guid_NewGuid_m1F4894E8DC089811D6252148AD5858E58D43A7BD(NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 99));
		V_0 = L_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 100));
		String_t* L_1;
		L_1 = Guid_ToString_m2BFFD5FA726E03FA707AAFCCF065896C46D5290C((&V_0), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 100));
		V_1 = L_1;
		goto IL_0017;
	}

IL_0017:
	{
		//<source_info:./Library/PackageCache/com.unity.services.core@8ba50f624741/Runtime/Device/InstallationId.cs:91>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 101));
		String_t* L_2 = V_1;
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
// Method Definition Index: 139887
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NSUserDefaults_GetString_mA77E63188B222653CB1C8AA0B0CB089F7EE0690E (String_t* ___0_key, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NSUserDefaults_GetString_mA77E63188B222653CB1C8AA0B0CB089F7EE0690E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	String_t* V_1 = NULL;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_key));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, NSUserDefaults_GetString_mA77E63188B222653CB1C8AA0B0CB089F7EE0690E_RuntimeMethod_var, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 102));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 103));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 104));
		//<source_info:./Library/PackageCache/com.unity.services.core@8ba50f624741/Runtime/Device/UserIdProviders/NSUserDefaults.cs:11>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 105));
		String_t* L_0 = ___0_key;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 106));
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 106));
		V_0 = L_1;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 107));
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 108));
		//<source_info:./Library/PackageCache/com.unity.services.core@8ba50f624741/Runtime/Device/UserIdProviders/NSUserDefaults.cs:13>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 109));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 110));
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_3 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6)), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 110));
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NSUserDefaults_GetString_mA77E63188B222653CB1C8AA0B0CB089F7EE0690E_RuntimeMethod_var)));
	}

IL_0017:
	{
		//<source_info:./Library/PackageCache/com.unity.services.core@8ba50f624741/Runtime/Device/UserIdProviders/NSUserDefaults.cs:15>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 111));
		String_t* L_4 = ___0_key;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 112));
		String_t* L_5;
		L_5 = NSUserDefaults_UserDefaultsGetString_m92C7603D4E38B141A88AC3E2B87B1DF1600A06A8(L_4, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 112));
		V_1 = L_5;
		goto IL_0020;
	}

IL_0020:
	{
		//<source_info:./Library/PackageCache/com.unity.services.core@8ba50f624741/Runtime/Device/UserIdProviders/NSUserDefaults.cs:16>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 113));
		String_t* L_6 = V_1;
		return L_6;
	}
}
// Method Definition Index: 139888
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NSUserDefaults_SetString_m0BFB3A66E345CE80C080620675028FDE686166F0 (String_t* ___0_key, String_t* ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NSUserDefaults_SetString_m0BFB3A66E345CE80C080620675028FDE686166F0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_key), (&___1_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, NSUserDefaults_SetString_m0BFB3A66E345CE80C080620675028FDE686166F0_RuntimeMethod_var, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 114));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 115));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 116));
		//<source_info:./Library/PackageCache/com.unity.services.core@8ba50f624741/Runtime/Device/UserIdProviders/NSUserDefaults.cs:20>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 117));
		String_t* L_0 = ___0_key;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 118));
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 118));
		V_0 = L_1;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 119));
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 120));
		//<source_info:./Library/PackageCache/com.unity.services.core@8ba50f624741/Runtime/Device/UserIdProviders/NSUserDefaults.cs:22>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 121));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 122));
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_3 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6)), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 122));
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NSUserDefaults_SetString_m0BFB3A66E345CE80C080620675028FDE686166F0_RuntimeMethod_var)));
	}

IL_0017:
	{
		//<source_info:./Library/PackageCache/com.unity.services.core@8ba50f624741/Runtime/Device/UserIdProviders/NSUserDefaults.cs:24>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 123));
		String_t* L_4 = ___0_key;
		String_t* L_5 = ___1_value;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 124));
		NSUserDefaults_UserDefaultsSetString_m6D339E36904A6238646E398703ED1CB13D09BA83(L_4, L_5, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 124));
		//<source_info:./Library/PackageCache/com.unity.services.core@8ba50f624741/Runtime/Device/UserIdProviders/NSUserDefaults.cs:25>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 125));
		return;
	}
}
// Method Definition Index: 139889
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NSUserDefaults_UserDefaultsGetString_m92C7603D4E38B141A88AC3E2B87B1DF1600A06A8 (String_t* ___0_key, const RuntimeMethod* method) 
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) (char*);

	char* ____0_key_marshaled = NULL;
	____0_key_marshaled = il2cpp_codegen_marshal_string(___0_key);

	char* returnValue = reinterpret_cast<PInvokeFunc>(UOCPUserDefaultsGetString)(____0_key_marshaled);

	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	il2cpp_codegen_marshal_free(____0_key_marshaled);
	____0_key_marshaled = NULL;

	return _returnValue_unmarshaled;
}
// Method Definition Index: 139890
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NSUserDefaults_UserDefaultsSetString_m6D339E36904A6238646E398703ED1CB13D09BA83 (String_t* ___0_key, String_t* ___1_value, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, char*);

	char* ____0_key_marshaled = NULL;
	____0_key_marshaled = il2cpp_codegen_marshal_string(___0_key);

	char* ____1_value_marshaled = NULL;
	____1_value_marshaled = il2cpp_codegen_marshal_string(___1_value);

	reinterpret_cast<PInvokeFunc>(UOCPUserDefaultsSetString)(____0_key_marshaled, ____1_value_marshaled);

	il2cpp_codegen_marshal_free(____0_key_marshaled);
	____0_key_marshaled = NULL;

	il2cpp_codegen_marshal_free(____1_value_marshaled);
	____1_value_marshaled = NULL;

}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 139891
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityAdsIdentifier_get_UserId_m4E41B6AEB6405B6BFA7D4E52FE3F66478A18D90A (UnityAdsIdentifier_t8D3A8D6DB9A1FB469E2E7F3D58B30C3D0D71DA56* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAdsIdentifier_get_UserId_m4E41B6AEB6405B6BFA7D4E52FE3F66478A18D90A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAdsIdentifier_t8D3A8D6DB9A1FB469E2E7F3D58B30C3D0D71DA56_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, UnityAdsIdentifier_get_UserId_m4E41B6AEB6405B6BFA7D4E52FE3F66478A18D90A_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 126));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 127));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 128));
		//<source_info:./Library/PackageCache/com.unity.services.core@8ba50f624741/Runtime/Device/UserIdProviders/UnityAdsIdentifier.cs:19>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 129));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 130));
		String_t* L_0;
		L_0 = UnityAdsIdentifier_get_IdentifierForInstallIos_m510AD72EA3847591D1F1AE3214FE4E81A258092E(NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 130));
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		//<source_info:./Library/PackageCache/com.unity.services.core@8ba50f624741/Runtime/Device/UserIdProviders/UnityAdsIdentifier.cs:23>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 131));
		String_t* L_1 = V_0;
		return L_1;
	}
}
// Method Definition Index: 139892
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAdsIdentifier_set_UserId_mA2519CC19694D24C35D6E2E72B79E2CE34DACA4F (UnityAdsIdentifier_t8D3A8D6DB9A1FB469E2E7F3D58B30C3D0D71DA56* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAdsIdentifier_set_UserId_mA2519CC19694D24C35D6E2E72B79E2CE34DACA4F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAdsIdentifier_t8D3A8D6DB9A1FB469E2E7F3D58B30C3D0D71DA56_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, UnityAdsIdentifier_set_UserId_mA2519CC19694D24C35D6E2E72B79E2CE34DACA4F_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 132));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 133));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 134));
		//<source_info:./Library/PackageCache/com.unity.services.core@8ba50f624741/Runtime/Device/UserIdProviders/UnityAdsIdentifier.cs:29>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 135));
		String_t* L_0 = ___0_value;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 136));
		UnityAdsIdentifier_set_IdentifierForInstallIos_mD9D71B7910AA0380D1C5E9445A04B6E812C5F835(L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 136));
		//<source_info:./Library/PackageCache/com.unity.services.core@8ba50f624741/Runtime/Device/UserIdProviders/UnityAdsIdentifier.cs:31>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 137));
		return;
	}
}
// Method Definition Index: 139893
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityAdsIdentifier_get_IdentifierForInstallIos_m510AD72EA3847591D1F1AE3214FE4E81A258092E (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAdsIdentifier_get_IdentifierForInstallIos_m510AD72EA3847591D1F1AE3214FE4E81A258092E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralECBE14D0ACE36FACE92343327DF7DFEC932523A5);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, UnityAdsIdentifier_get_IdentifierForInstallIos_m510AD72EA3847591D1F1AE3214FE4E81A258092E_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 138));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 139));
	{
		//<source_info:./Library/PackageCache/com.unity.services.core@8ba50f624741/Runtime/Device/UserIdProviders/UnityAdsIdentifier.cs:44>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 140));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 141));
		String_t* L_0;
		L_0 = NSUserDefaults_GetString_mA77E63188B222653CB1C8AA0B0CB089F7EE0690E(_stringLiteralECBE14D0ACE36FACE92343327DF7DFEC932523A5, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 141));
		return L_0;
	}
}
// Method Definition Index: 139894
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAdsIdentifier_set_IdentifierForInstallIos_mD9D71B7910AA0380D1C5E9445A04B6E812C5F835 (String_t* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAdsIdentifier_set_IdentifierForInstallIos_mD9D71B7910AA0380D1C5E9445A04B6E812C5F835_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralECBE14D0ACE36FACE92343327DF7DFEC932523A5);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, UnityAdsIdentifier_set_IdentifierForInstallIos_mD9D71B7910AA0380D1C5E9445A04B6E812C5F835_RuntimeMethod_var, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 142));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 143));
	{
		//<source_info:./Library/PackageCache/com.unity.services.core@8ba50f624741/Runtime/Device/UserIdProviders/UnityAdsIdentifier.cs:45>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 144));
		String_t* L_0 = ___0_value;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 145));
		NSUserDefaults_SetString_m0BFB3A66E345CE80C080620675028FDE686166F0(_stringLiteralECBE14D0ACE36FACE92343327DF7DFEC932523A5, L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 145));
		return;
	}
}
// Method Definition Index: 139895
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAdsIdentifier__ctor_mFD5085EB0AD902D689B820D13D697CE640E2E7B8 (UnityAdsIdentifier_t8D3A8D6DB9A1FB469E2E7F3D58B30C3D0D71DA56* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAdsIdentifier__ctor_mFD5085EB0AD902D689B820D13D697CE640E2E7B8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, UnityAdsIdentifier__ctor_mFD5085EB0AD902D689B820D13D697CE640E2E7B8_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// Method Definition Index: 139896
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityAnalyticsIdentifier_get_UserId_m15964ABDB88E2D752C471143ED9C5A32017989CE (UnityAnalyticsIdentifier_tAB8DD85C666D878FC108C324E10DF6528B5BDA5D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAnalyticsIdentifier_get_UserId_m15964ABDB88E2D752C471143ED9C5A32017989CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAnalyticsIdentifier_tAB8DD85C666D878FC108C324E10DF6528B5BDA5D_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral20353326ACF03BB4112F3080DBCA0AC47DBC7BB2);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, UnityAnalyticsIdentifier_get_UserId_m15964ABDB88E2D752C471143ED9C5A32017989CE_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 146));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 147));
	{
		//<source_info:./Library/PackageCache/com.unity.services.core@8ba50f624741/Runtime/Device/UserIdProviders/UnityAnalyticsIdentifier.cs:12>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 148));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 149));
		String_t* L_0;
		L_0 = PlayerPrefs_GetString_mA4C9F842BF77E5572AB20EA087C7048F870D02AE(_stringLiteral20353326ACF03BB4112F3080DBCA0AC47DBC7BB2, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 149));
		return L_0;
	}
}
// Method Definition Index: 139897
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAnalyticsIdentifier_set_UserId_m2751FA3CB0A777DAC8AA56ECBE8945EED55CAC3C (UnityAnalyticsIdentifier_tAB8DD85C666D878FC108C324E10DF6528B5BDA5D* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAnalyticsIdentifier_set_UserId_m2751FA3CB0A777DAC8AA56ECBE8945EED55CAC3C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAnalyticsIdentifier_tAB8DD85C666D878FC108C324E10DF6528B5BDA5D_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral20353326ACF03BB4112F3080DBCA0AC47DBC7BB2);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, UnityAnalyticsIdentifier_set_UserId_m2751FA3CB0A777DAC8AA56ECBE8945EED55CAC3C_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 150));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 151));
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 152));
	}
	try
	{
		STORE_TRY_ID(methodExecutionContext, 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 153));
		//<source_info:./Library/PackageCache/com.unity.services.core@8ba50f624741/Runtime/Device/UserIdProviders/UnityAnalyticsIdentifier.cs:17>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 154));
		String_t* L_0 = ___0_value;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 155));
		PlayerPrefs_SetString_mF4F457C81BB75F0213547C6287BA36E15E1F0256(_stringLiteral20353326ACF03BB4112F3080DBCA0AC47DBC7BB2, L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 155));
		//<source_info:./Library/PackageCache/com.unity.services.core@8ba50f624741/Runtime/Device/UserIdProviders/UnityAnalyticsIdentifier.cs:18>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 156));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 157));
		PlayerPrefs_Save_m82567E045D69C838112EA204B60C144D4C1EA3AE(NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 157));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 158));
		goto IL_001c;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0017;
		}
		throw e;
	}

CATCH_0017:
	{
		STORE_TRY_ID(methodExecutionContext, -1);
		Exception_t* L_1 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		//<source_info:./Library/PackageCache/com.unity.services.core@8ba50f624741/Runtime/Device/UserIdProviders/UnityAnalyticsIdentifier.cs:20>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 159));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 160));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 161));
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_001c;
	}

IL_001c:
	{
		//<source_info:./Library/PackageCache/com.unity.services.core@8ba50f624741/Runtime/Device/UserIdProviders/UnityAnalyticsIdentifier.cs:24>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 162));
		return;
	}
}
// Method Definition Index: 139898
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAnalyticsIdentifier__ctor_mE19B73CB1414B5AC0619E8EF1366C0164B06D14B (UnityAnalyticsIdentifier_tAB8DD85C666D878FC108C324E10DF6528B5BDA5D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAnalyticsIdentifier__ctor_mE19B73CB1414B5AC0619E8EF1366C0164B06D14B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, UnityAnalyticsIdentifier__ctor_mE19B73CB1414B5AC0619E8EF1366C0164B06D14B_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// Method Definition Index: 139899
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityEngineIdentifier_get_UserId_m34135DB2F190D05C1B89D8BA6BC2344C8F18C796 (UnityEngineIdentifier_t1EB294A627497D2103614B8365E7861F72E0DA83* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEngineIdentifier_get_UserId_m34135DB2F190D05C1B89D8BA6BC2344C8F18C796_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEngineIdentifier_t1EB294A627497D2103614B8365E7861F72E0DA83_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, UnityEngineIdentifier_get_UserId_m34135DB2F190D05C1B89D8BA6BC2344C8F18C796_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 163));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 164));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 165));
		//<source_info:./Library/PackageCache/com.unity.services.core@8ba50f624741/Runtime/Device/UserIdProviders/UnityEngineIdentifier.cs:13>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 166));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 167));
		String_t* L_0;
		L_0 = Identifiers_get_installationId_mD3ECC6BF716CA29158D977D82861214A105AA6B9(NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 167));
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		//<source_info:./Library/PackageCache/com.unity.services.core@8ba50f624741/Runtime/Device/UserIdProviders/UnityEngineIdentifier.cs:17>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 168));
		String_t* L_1 = V_0;
		return L_1;
	}
}
// Method Definition Index: 139900
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEngineIdentifier_set_UserId_mCA38EC3A0364B91D605849C3390177F6006B0E99 (UnityEngineIdentifier_t1EB294A627497D2103614B8365E7861F72E0DA83* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEngineIdentifier_set_UserId_mCA38EC3A0364B91D605849C3390177F6006B0E99_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEngineIdentifier_t1EB294A627497D2103614B8365E7861F72E0DA83_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, UnityEngineIdentifier_set_UserId_mCA38EC3A0364B91D605849C3390177F6006B0E99_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 169));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 170));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 171));
		//<source_info:./Library/PackageCache/com.unity.services.core@8ba50f624741/Runtime/Device/UserIdProviders/UnityEngineIdentifier.cs:20>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core_Device + 172));
		return;
	}
}
// Method Definition Index: 139901
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEngineIdentifier__ctor_m805AEF091D20B8DEFC5CDA619D586C380B1C00CA (UnityEngineIdentifier_t1EB294A627497D2103614B8365E7861F72E0DA83* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEngineIdentifier__ctor_m805AEF091D20B8DEFC5CDA619D586C380B1C00CA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, UnityEngineIdentifier__ctor_m805AEF091D20B8DEFC5CDA619D586C380B1C00CA_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
