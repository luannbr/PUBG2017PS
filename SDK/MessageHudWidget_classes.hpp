#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MessageHudWidget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"
#include "Slate_structs.hpp"
#include "TslGame_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MessageHudWidget.MessageHudWidget_C
// 0x0028 (0x0268 - 0x0240)
class UMessageHudWidget_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UNewMessageBorderWidget_C*              ImportantMessageBox;                               // 0x0248(0x0008)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UNewMessageBorderWidget_C*              MyKillMessageBox;                                  // 0x0250(0x0008)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UNewMessageBorderWidget_C*              OtherKillMessage;                                  // 0x0258(0x0008)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UNewMessageBorderWidget_C*              SystemMessageBox;                                  // 0x0260(0x0008)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)

public:
	void ExecuteUbergraph_MessageHudWidget(int32 EntryPoint);
	void Construct();
	void InitializeMessageHUD();
	void OnDisplaySystemMessage(ESystemMessageType MessageType, const class FText& Message);
	void OnDisplayKilledMessage(const struct FDeathMessage& DeathMessage);
	void CreateSystemMessage(const class FText& Message, ETextJustify TextAlignment, const struct FSlateColor& TextColor, int32 TextSize, float Duration, bool bUseFade_In, class UAkAudioEvent* Sound, class UNewSystemMessageWidget_C** MessageWidget);
	void CreateKillMessage(const struct FDeathMessage& DeathMessage, ETextJustify TextAlignment, const struct FSlateColor& TextColor, int32 TextSize, float Duration, bool bUseFade_In, class UNewSystemMessageWidget_C** MessageWidget);
	void OnDisplayMessage(ESystemMessageType MessageType, const class FText& Message, float Duration, class UAkAudioEvent* Sound);
	void CreateGamePlayMessage(const class FText& Message, ETextJustify TextAlignment, int32 TextSize, float Duration, bool bUseFade_In, class UAkAudioEvent* Sound, class UNewSystemMessageWidget_C** MessageWidget);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MessageHudWidget_C">();
	}
	static class UMessageHudWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMessageHudWidget_C>();
	}
};
static_assert(alignof(UMessageHudWidget_C) == 0x000008, "Wrong alignment on UMessageHudWidget_C");
static_assert(sizeof(UMessageHudWidget_C) == 0x000268, "Wrong size on UMessageHudWidget_C");
static_assert(offsetof(UMessageHudWidget_C, UberGraphFrame) == 0x000240, "Member 'UMessageHudWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UMessageHudWidget_C, ImportantMessageBox) == 0x000248, "Member 'UMessageHudWidget_C::ImportantMessageBox' has a wrong offset!");
static_assert(offsetof(UMessageHudWidget_C, MyKillMessageBox) == 0x000250, "Member 'UMessageHudWidget_C::MyKillMessageBox' has a wrong offset!");
static_assert(offsetof(UMessageHudWidget_C, OtherKillMessage) == 0x000258, "Member 'UMessageHudWidget_C::OtherKillMessage' has a wrong offset!");
static_assert(offsetof(UMessageHudWidget_C, SystemMessageBox) == 0x000260, "Member 'UMessageHudWidget_C::SystemMessageBox' has a wrong offset!");

}

