#pragma once

namespace UnityEngine
{
	namespace Events
	{
		class UnityAction_int__UIInputButton_State;
	} // namespace Events
	
} // namespace UnityEngine


namespace Dpr
{
	namespace UI
	{
		class UIInputController;

		extern void *UIInputButton_TypeInfo;

		struct UIInputButton
		{
			void ctor(MethodInfo *method);
			void ctor(int32_t button, UnityEngine::Events::UnityAction_int__UIInputButton_State *onCallbacked, UIInputController *input, bool isAutoUpdate, float longPressTime, MethodInfo *method);
			void Setup(int32_t button, UnityEngine::Events::UnityAction_int__UIInputButton_State *onCallbacked, Dpr::UI::UIInputController *input, bool isAutoUpdate, float longPressTime, MethodInfo *method);
			void OnUpdate(float deltaTime, MethodInfo *method);
		};
		
	} // namespace UI
	
} // namespace Dpr
