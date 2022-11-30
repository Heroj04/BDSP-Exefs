#pragma once
#include "System/MulticastDelegate.hpp"

namespace System
{
	class IAsyncResult;
	class AsyncCallback;
}


namespace UnityEngine {
	namespace Events {
		extern void* UnityAction_TypeInfo;
		extern void* UnityAction_int__UIInputButton_State_TypeInfo;
		
		struct UnityAction_Fields {
			System::MulticastDelegate_Fields super;
		};
		
		struct UnityAction_StaticFields {
		};

		struct UnityAction_RGCTXs {
		};

		struct UnityAction_VTable {
			VirtualInvokeData _0_Equals;
			VirtualInvokeData _1_Finalize;
			VirtualInvokeData _2_GetHashCode;
			VirtualInvokeData _3_ToString;
			VirtualInvokeData _4_unknown;
			VirtualInvokeData _5_unknown;
			VirtualInvokeData _6_Clone;
			VirtualInvokeData _7_GetMethodImpl;
			VirtualInvokeData _8_GetObjectData;
			VirtualInvokeData _9_GetInvocationList;
			VirtualInvokeData _10_CombineImpl;
			VirtualInvokeData _11_RemoveImpl;
			VirtualInvokeData _12_Invoke;
			VirtualInvokeData _13_BeginInvoke;
			VirtualInvokeData _14_EndInvoke;
		};
		
		struct UnityAction_Klass {
			Il2CppClass_1 _1;
			UnityAction_StaticFields* static_fields;
			UnityAction_RGCTXs* rgctx_data;
			Il2CppClass_2 _2;
			UnityAction_VTable vtable;
		};
		
		struct UnityAction : System::MulticastDelegate {
			UnityAction_Klass *klass;
			void *monitor;
			UnityAction_Fields fields;

			void ctor(Il2CppObject *target, MethodInfo *method);
			void Invoke(MethodInfo *method);
			System::IAsyncResult* BeginInvoke(System::AsyncCallback *callback, Il2CppObject *object,MethodInfo *method);
			void EndInvoke(System::IAsyncResult *result, MethodInfo *method);
		};

		struct UnityAction_int__UIInputButton_State : System::MulticastDelegate
		{
			void ctor(Il2CppObject *target, MethodInfo *method);
		};
		
	}
}