#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: QualitySliderWidget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass QualitySliderWidget.QualitySliderWidget_C
// 0x0050 (0x0290 - 0x0240)
class UQualitySliderWidget_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                                Button_0;                                          // 0x0248(0x0008)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UButton*                                LeftButton;                                        // 0x0250(0x0008)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class USlider*                                QualitySlider;                                     // 0x0258(0x0008)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UButton*                                RightButotn;                                       // 0x0260(0x0008)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	float                                         RangeMin;                                          // 0x0268(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	float                                         RangeMax;                                          // 0x026C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	class FText                                   QualityName;                                       // 0x0270(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn)
	struct FName                                   MouseSensitiveName;                                // 0x0288(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

public:
	void ExecuteUbergraph_QualitySliderWidget(int32 EntryPoint);
	void BndEvt__RightButotn_K2Node_ComponentBoundEvent_395_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_2_K2Node_ComponentBoundEvent_370_OnButtonClickedEvent__DelegateSignature();
	class FText GetQualityName();
	void SetValue(float Value);
	class FText GetValueText();

	void GetValueByRange(float* Value) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"QualitySliderWidget_C">();
	}
	static class UQualitySliderWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQualitySliderWidget_C>();
	}
};
static_assert(alignof(UQualitySliderWidget_C) == 0x000008, "Wrong alignment on UQualitySliderWidget_C");
static_assert(sizeof(UQualitySliderWidget_C) == 0x000290, "Wrong size on UQualitySliderWidget_C");
static_assert(offsetof(UQualitySliderWidget_C, UberGraphFrame) == 0x000240, "Member 'UQualitySliderWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UQualitySliderWidget_C, Button_0) == 0x000248, "Member 'UQualitySliderWidget_C::Button_0' has a wrong offset!");
static_assert(offsetof(UQualitySliderWidget_C, LeftButton) == 0x000250, "Member 'UQualitySliderWidget_C::LeftButton' has a wrong offset!");
static_assert(offsetof(UQualitySliderWidget_C, QualitySlider) == 0x000258, "Member 'UQualitySliderWidget_C::QualitySlider' has a wrong offset!");
static_assert(offsetof(UQualitySliderWidget_C, RightButotn) == 0x000260, "Member 'UQualitySliderWidget_C::RightButotn' has a wrong offset!");
static_assert(offsetof(UQualitySliderWidget_C, RangeMin) == 0x000268, "Member 'UQualitySliderWidget_C::RangeMin' has a wrong offset!");
static_assert(offsetof(UQualitySliderWidget_C, RangeMax) == 0x00026C, "Member 'UQualitySliderWidget_C::RangeMax' has a wrong offset!");
static_assert(offsetof(UQualitySliderWidget_C, QualityName) == 0x000270, "Member 'UQualitySliderWidget_C::QualityName' has a wrong offset!");
static_assert(offsetof(UQualitySliderWidget_C, MouseSensitiveName) == 0x000288, "Member 'UQualitySliderWidget_C::MouseSensitiveName' has a wrong offset!");

}

