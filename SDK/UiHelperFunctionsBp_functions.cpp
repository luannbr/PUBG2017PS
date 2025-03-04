#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UiHelperFunctionsBp

#include "Basic.hpp"

#include "UiHelperFunctionsBp_classes.hpp"
#include "UiHelperFunctionsBp_parameters.hpp"


namespace SDK
{

// Function UiHelperFunctionsBp.UiHelperFunctionsBp_C.SortItemBp
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<TScriptInterface<class ISlotInterface>>InItemList                                             (Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                                    bSort                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                          m_WorldContext                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<TScriptInterface<class ISlotInterface>>ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<TScriptInterface<class ISlotInterface>> UUiHelperFunctionsBp_C::SortItemBp(TArray<TScriptInterface<class ISlotInterface>>& InItemList, bool bSort, class UObject* m_WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("UiHelperFunctionsBp_C", "SortItemBp");

	Params::UiHelperFunctionsBp_C_SortItemBp Parms{};

	Parms.InItemList = std::move(InItemList);
	Parms.bSort = bSort;
	Parms.m_WorldContext = m_WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	InItemList = std::move(Parms.InItemList);

	return Parms.ReturnValue;
}


// Function UiHelperFunctionsBp.UiHelperFunctionsBp_C.GetDynamicMaterial
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                          Widget                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                          m_WorldContext                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*         DynamicMaterial                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUiHelperFunctionsBp_C::GetDynamicMaterial(class UWidget* Widget, class UObject* m_WorldContext, class UMaterialInstanceDynamic** DynamicMaterial)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("UiHelperFunctionsBp_C", "GetDynamicMaterial");

	Params::UiHelperFunctionsBp_C_GetDynamicMaterial Parms{};

	Parms.Widget = Widget;
	Parms.m_WorldContext = m_WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (DynamicMaterial != nullptr)
		*DynamicMaterial = Parms.DynamicMaterial;
}


// Function UiHelperFunctionsBp.UiHelperFunctionsBp_C.CreateAndSetMaterial
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                          Widget                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstance*                Material                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                          m_WorldContext                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*         DynamicMaterial                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUiHelperFunctionsBp_C::CreateAndSetMaterial(class UWidget* Widget, class UMaterialInstance* Material, class UObject* m_WorldContext, class UMaterialInstanceDynamic** DynamicMaterial)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("UiHelperFunctionsBp_C", "CreateAndSetMaterial");

	Params::UiHelperFunctionsBp_C_CreateAndSetMaterial Parms{};

	Parms.Widget = Widget;
	Parms.Material = Material;
	Parms.m_WorldContext = m_WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (DynamicMaterial != nullptr)
		*DynamicMaterial = Parms.DynamicMaterial;
}


// Function UiHelperFunctionsBp.UiHelperFunctionsBp_C.GetTeamMarkerColor
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   MemberNumber                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                          m_WorldContext                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                     NewParam                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUiHelperFunctionsBp_C::GetTeamMarkerColor(int32 MemberNumber, class UObject* m_WorldContext, struct FLinearColor* NewParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("UiHelperFunctionsBp_C", "GetTeamMarkerColor");

	Params::UiHelperFunctionsBp_C_GetTeamMarkerColor Parms{};

	Parms.MemberNumber = MemberNumber;
	Parms.m_WorldContext = m_WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (NewParam != nullptr)
		*NewParam = std::move(Parms.NewParam);
}


// Function UiHelperFunctionsBp.UiHelperFunctionsBp_C.NotifyWidgetShowed
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                      Widget                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                           WidgetName                                             (Parm, ZeroConstructor)
// bool                                    bShow                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                          m_WorldContext                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUiHelperFunctionsBp_C::NotifyWidgetShowed(class UUserWidget* Widget, const class FString& WidgetName, bool bShow, class UObject* m_WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("UiHelperFunctionsBp_C", "NotifyWidgetShowed");

	Params::UiHelperFunctionsBp_C_NotifyWidgetShowed Parms{};

	Parms.Widget = Widget;
	Parms.WidgetName = std::move(WidgetName);
	Parms.bShow = bShow;
	Parms.m_WorldContext = m_WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function UiHelperFunctionsBp.UiHelperFunctionsBp_C.GetTslCharacters_Bp
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          WorldContextObject                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                          m_WorldContext                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class ATslCharacter*>            OutActors                                              (Parm, OutParm, ZeroConstructor)

void UUiHelperFunctionsBp_C::GetTslCharacters_Bp(const class UObject* WorldContextObject, class UObject* m_WorldContext, TArray<class ATslCharacter*>* OutActors)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("UiHelperFunctionsBp_C", "GetTslCharacters_Bp");

	Params::UiHelperFunctionsBp_C_GetTslCharacters_Bp Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.m_WorldContext = m_WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (OutActors != nullptr)
		*OutActors = std::move(Parms.OutActors);
}


// Function UiHelperFunctionsBp.UiHelperFunctionsBp_C.GetCharacterStateIcon
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   State                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                          m_WorldContext                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTexture2D*                       NewParam                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUiHelperFunctionsBp_C::GetCharacterStateIcon(int32 State, class UObject* m_WorldContext, class UTexture2D** NewParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("UiHelperFunctionsBp_C", "GetCharacterStateIcon");

	Params::UiHelperFunctionsBp_C_GetCharacterStateIcon Parms{};

	Parms.State = State;
	Parms.m_WorldContext = m_WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (NewParam != nullptr)
		*NewParam = Parms.NewParam;
}


// Function UiHelperFunctionsBp.UiHelperFunctionsBp_C.GetSpectatorColor
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    bISpectator                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                          m_WorldContext                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                     Color                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUiHelperFunctionsBp_C::GetSpectatorColor(bool bISpectator, class UObject* m_WorldContext, struct FLinearColor* Color)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("UiHelperFunctionsBp_C", "GetSpectatorColor");

	Params::UiHelperFunctionsBp_C_GetSpectatorColor Parms{};

	Parms.bISpectator = bISpectator;
	Parms.m_WorldContext = m_WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Color != nullptr)
		*Color = std::move(Parms.Color);
}


// Function UiHelperFunctionsBp.UiHelperFunctionsBp_C.GetStateByCharacter
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ATslCharacter*                    Character                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                          m_WorldContext                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   OutState                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUiHelperFunctionsBp_C::GetStateByCharacter(class ATslCharacter* Character, class UObject* m_WorldContext, int32* OutState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("UiHelperFunctionsBp_C", "GetStateByCharacter");

	Params::UiHelperFunctionsBp_C_GetStateByCharacter Parms{};

	Parms.Character = Character;
	Parms.m_WorldContext = m_WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (OutState != nullptr)
		*OutState = Parms.OutState;
}


// Function UiHelperFunctionsBp.UiHelperFunctionsBp_C.GetStateByTeam
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ATeam*                            Team                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                          m_WorldContext                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   State                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUiHelperFunctionsBp_C::GetStateByTeam(class ATeam* Team, class UObject* m_WorldContext, int32* State)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("UiHelperFunctionsBp_C", "GetStateByTeam");

	Params::UiHelperFunctionsBp_C_GetStateByTeam Parms{};

	Parms.Team = Team;
	Parms.m_WorldContext = m_WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (State != nullptr)
		*State = Parms.State;
}


// Function UiHelperFunctionsBp.UiHelperFunctionsBp_C.IsSpectatorTeam
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UUserWidget*                      Widget                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class ATslCharacter*                    Character                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                          m_WorldContext                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bIsTeam                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUiHelperFunctionsBp_C::IsSpectatorTeam(class UUserWidget* Widget, class ATslCharacter* Character, class UObject* m_WorldContext, bool* bIsTeam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("UiHelperFunctionsBp_C", "IsSpectatorTeam");

	Params::UiHelperFunctionsBp_C_IsSpectatorTeam Parms{};

	Parms.Widget = Widget;
	Parms.Character = Character;
	Parms.m_WorldContext = m_WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (bIsTeam != nullptr)
		*bIsTeam = Parms.bIsTeam;
}


// Function UiHelperFunctionsBp.UiHelperFunctionsBp_C.GetTeamColor
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                          m_WorldContext                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                     Color                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUiHelperFunctionsBp_C::GetTeamColor(class UObject* m_WorldContext, struct FLinearColor* Color)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("UiHelperFunctionsBp_C", "GetTeamColor");

	Params::UiHelperFunctionsBp_C_GetTeamColor Parms{};

	Parms.m_WorldContext = m_WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Color != nullptr)
		*Color = std::move(Parms.Color);
}


// Function UiHelperFunctionsBp.UiHelperFunctionsBp_C.IsLastSpectatorTeam
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UUserWidget*                      Widget                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class ATslCharacter*                    Character                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                          m_WorldContext                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bIsTeam                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUiHelperFunctionsBp_C::IsLastSpectatorTeam(class UUserWidget* Widget, class ATslCharacter* Character, class UObject* m_WorldContext, bool* bIsTeam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("UiHelperFunctionsBp_C", "IsLastSpectatorTeam");

	Params::UiHelperFunctionsBp_C_IsLastSpectatorTeam Parms{};

	Parms.Widget = Widget;
	Parms.Character = Character;
	Parms.m_WorldContext = m_WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (bIsTeam != nullptr)
		*bIsTeam = Parms.bIsTeam;
}


// Function UiHelperFunctionsBp.UiHelperFunctionsBp_C.GetBluezoneReleaseTimeBp
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                          WorldContextObject                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                          m_WorldContext                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                                   ReleaseTime                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUiHelperFunctionsBp_C::GetBluezoneReleaseTimeBp(class UObject* WorldContextObject, class UObject* m_WorldContext, float* ReleaseTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("UiHelperFunctionsBp_C", "GetBluezoneReleaseTimeBp");

	Params::UiHelperFunctionsBp_C_GetBluezoneReleaseTimeBp Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.m_WorldContext = m_WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (ReleaseTime != nullptr)
		*ReleaseTime = Parms.ReleaseTime;
}


// Function UiHelperFunctionsBp.UiHelperFunctionsBp_C.GetBluezoneWarningTimeBp
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                          WorldContextObject                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                          m_WorldContext                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                                   WarningTime                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUiHelperFunctionsBp_C::GetBluezoneWarningTimeBp(class UObject* WorldContextObject, class UObject* m_WorldContext, float* WarningTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("UiHelperFunctionsBp_C", "GetBluezoneWarningTimeBp");

	Params::UiHelperFunctionsBp_C_GetBluezoneWarningTimeBp Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.m_WorldContext = m_WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (WarningTime != nullptr)
		*WarningTime = Parms.WarningTime;
}


// Function UiHelperFunctionsBp.UiHelperFunctionsBp_C.GetCharacterAngle
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UUserWidget*                      Widget                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                          m_WorldContext                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                                   Angle                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUiHelperFunctionsBp_C::GetCharacterAngle(class UUserWidget* Widget, class UObject* m_WorldContext, float* Angle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("UiHelperFunctionsBp_C", "GetCharacterAngle");

	Params::UiHelperFunctionsBp_C_GetCharacterAngle Parms{};

	Parms.Widget = Widget;
	Parms.m_WorldContext = m_WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Angle != nullptr)
		*Angle = Parms.Angle;
}


// Function UiHelperFunctionsBp.UiHelperFunctionsBp_C.GetCharacterPosititon
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UUserWidget*                      Widget                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                          m_WorldContext                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                          Position                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUiHelperFunctionsBp_C::GetCharacterPosititon(class UUserWidget* Widget, class UObject* m_WorldContext, struct FVector* Position)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("UiHelperFunctionsBp_C", "GetCharacterPosititon");

	Params::UiHelperFunctionsBp_C_GetCharacterPosititon Parms{};

	Parms.Widget = Widget;
	Parms.m_WorldContext = m_WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Position != nullptr)
		*Position = std::move(Parms.Position);
}


// Function UiHelperFunctionsBp.UiHelperFunctionsBp_C.GetCharacterLook
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UUserWidget*                      Widget                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                          m_WorldContext                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                          Look                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUiHelperFunctionsBp_C::GetCharacterLook(class UUserWidget* Widget, class UObject* m_WorldContext, struct FVector* Look)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("UiHelperFunctionsBp_C", "GetCharacterLook");

	Params::UiHelperFunctionsBp_C_GetCharacterLook Parms{};

	Parms.Widget = Widget;
	Parms.m_WorldContext = m_WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Look != nullptr)
		*Look = std::move(Parms.Look);
}


// Function UiHelperFunctionsBp.UiHelperFunctionsBp_C.CancelSelfAttachmentPutMode
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                      Widget                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                          m_WorldContext                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUiHelperFunctionsBp_C::CancelSelfAttachmentPutMode(class UUserWidget* Widget, class UObject* m_WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("UiHelperFunctionsBp_C", "CancelSelfAttachmentPutMode");

	Params::UiHelperFunctionsBp_C_CancelSelfAttachmentPutMode Parms{};

	Parms.Widget = Widget;
	Parms.m_WorldContext = m_WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function UiHelperFunctionsBp.UiHelperFunctionsBp_C.GetDistanceColor
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                                   Distance                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                          m_WorldContext                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                     Color                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUiHelperFunctionsBp_C::GetDistanceColor(float Distance, class UObject* m_WorldContext, struct FLinearColor* Color)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("UiHelperFunctionsBp_C", "GetDistanceColor");

	Params::UiHelperFunctionsBp_C_GetDistanceColor Parms{};

	Parms.Distance = Distance;
	Parms.m_WorldContext = m_WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Color != nullptr)
		*Color = std::move(Parms.Color);
}


// Function UiHelperFunctionsBp.UiHelperFunctionsBp_C.IsXBoxOnePlatform
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                          m_WorldContext                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    NewParam                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUiHelperFunctionsBp_C::IsXBoxOnePlatform(class UObject* m_WorldContext, bool* NewParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("UiHelperFunctionsBp_C", "IsXBoxOnePlatform");

	Params::UiHelperFunctionsBp_C_IsXBoxOnePlatform Parms{};

	Parms.m_WorldContext = m_WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (NewParam != nullptr)
		*NewParam = Parms.NewParam;
}


// Function UiHelperFunctionsBp.UiHelperFunctionsBp_C.InventoryFocusingColor
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                          m_WorldContext                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                     NewParam                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUiHelperFunctionsBp_C::InventoryFocusingColor(class UObject* m_WorldContext, struct FLinearColor* NewParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("UiHelperFunctionsBp_C", "InventoryFocusingColor");

	Params::UiHelperFunctionsBp_C_InventoryFocusingColor Parms{};

	Parms.m_WorldContext = m_WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (NewParam != nullptr)
		*NewParam = std::move(Parms.NewParam);
}


// Function UiHelperFunctionsBp.UiHelperFunctionsBp_C.GetInventoryWidget
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UUserWidget*                      Widget                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                          m_WorldContext                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UInventoryWidget_C*               InventoryWidget                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUiHelperFunctionsBp_C::GetInventoryWidget(class UUserWidget* Widget, class UObject* m_WorldContext, class UInventoryWidget_C** InventoryWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("UiHelperFunctionsBp_C", "GetInventoryWidget");

	Params::UiHelperFunctionsBp_C_GetInventoryWidget Parms{};

	Parms.Widget = Widget;
	Parms.m_WorldContext = m_WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (InventoryWidget != nullptr)
		*InventoryWidget = Parms.InventoryWidget;
}


// Function UiHelperFunctionsBp.UiHelperFunctionsBp_C.IsSelfAttachmentPutMode
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UUserWidget*                      Widget                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                          m_WorldContext                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bResult                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUiHelperFunctionsBp_C::IsSelfAttachmentPutMode(class UUserWidget* Widget, class UObject* m_WorldContext, bool* bResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("UiHelperFunctionsBp_C", "IsSelfAttachmentPutMode");

	Params::UiHelperFunctionsBp_C_IsSelfAttachmentPutMode Parms{};

	Parms.Widget = Widget;
	Parms.m_WorldContext = m_WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (bResult != nullptr)
		*bResult = Parms.bResult;
}


// Function UiHelperFunctionsBp.UiHelperFunctionsBp_C.GetSelfPutAttachment
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UUserWidget*                      Widget                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                          m_WorldContext                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAttachableItem*                  GamepadadSelectedAttachableItem                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUiHelperFunctionsBp_C::GetSelfPutAttachment(class UUserWidget* Widget, class UObject* m_WorldContext, class UAttachableItem** GamepadadSelectedAttachableItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("UiHelperFunctionsBp_C", "GetSelfPutAttachment");

	Params::UiHelperFunctionsBp_C_GetSelfPutAttachment Parms{};

	Parms.Widget = Widget;
	Parms.m_WorldContext = m_WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (GamepadadSelectedAttachableItem != nullptr)
		*GamepadadSelectedAttachableItem = Parms.GamepadadSelectedAttachableItem;
}

}

