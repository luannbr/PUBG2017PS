#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: InGameReplayMenu

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"
#include "TslGame_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass InGameReplayMenu.InGameReplayMenu_C
// 0x0018 (0x0258 - 0x0240)
class UInGameReplayMenu_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                                Button_Exit;                                       // 0x0248(0x0008)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UButton*                                Button_ReplayList;                                 // 0x0250(0x0008)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)

public:
	void ExecuteUbergraph_InGameReplayMenu(int32 EntryPoint);
	void BndEvt__Button_Resume_K2Node_ComponentBoundEvent_247_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_Exit_K2Node_ComponentBoundEvent_228_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_ReplayList_K2Node_ComponentBoundEvent_210_OnButtonClickedEvent__DelegateSignature();
	void QuitReplay(EPopupButtonID ButtonID);
	void GotoReplayList(EPopupButtonID ButtonID);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"InGameReplayMenu_C">();
	}
	static class UInGameReplayMenu_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInGameReplayMenu_C>();
	}
};
static_assert(alignof(UInGameReplayMenu_C) == 0x000008, "Wrong alignment on UInGameReplayMenu_C");
static_assert(sizeof(UInGameReplayMenu_C) == 0x000258, "Wrong size on UInGameReplayMenu_C");
static_assert(offsetof(UInGameReplayMenu_C, UberGraphFrame) == 0x000240, "Member 'UInGameReplayMenu_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UInGameReplayMenu_C, Button_Exit) == 0x000248, "Member 'UInGameReplayMenu_C::Button_Exit' has a wrong offset!");
static_assert(offsetof(UInGameReplayMenu_C, Button_ReplayList) == 0x000250, "Member 'UInGameReplayMenu_C::Button_ReplayList' has a wrong offset!");

}

