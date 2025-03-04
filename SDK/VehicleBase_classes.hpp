#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: VehicleBase

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "TslGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass VehicleBase.VehicleBase_C
// 0x01C0 (0x0890 - 0x06D0)
class AVehicleBase_C : public ATslWheeledVehicle
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x06D0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UPointLightComponent*                   BoostLight;                                        // 0x06D8(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UPointLightComponent*                   LowFuelLight;                                      // 0x06E0(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UPointLightComponent*                   TailLamp_2;                                        // 0x06E8(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UPointLightComponent*                   TailLamp_1;                                        // 0x06F0(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class USpotLightComponent*                    HeadLamp_2;                                        // 0x06F8(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class USpotLightComponent*                    HeadLamp_1;                                        // 0x0700(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UCameraComponent*                       ThirdPersonCameraInVehicle;                        // 0x0708(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class USpringArmInVehicleComponent*           ThirdPersonSpringArmInVehicle;                     // 0x0710(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UCameraComponent*                       FirstPersonCameraInVehicle;                        // 0x0718(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class USpringArmInVehicleComponent*           FirstPersonSpringArmInVehicle;                     // 0x0720(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class URadialForceComponent*                  RadialForce;                                       // 0x0728(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	float                                         ImpactModifier;                                    // 0x0730(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                         ImpactAbsorption;                                  // 0x0734(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                         ImpactModifierUpsideDown;                          // 0x0738(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                         ImpactAbsorptionUpsideDown;                        // 0x073C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                         FuelConsumptionModifierBoost;                      // 0x0740(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                         ImpactAbsorptionPassenger;                         // 0x0744(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                         ImpactAbsorptionPassengerUpsideDown;               // 0x0748(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                         LaunchVelocityFactorOnHitCharacter;                // 0x074C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsLightsOn;                                        // 0x0750(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	bool                                          IsBrakeEngaging;                                   // 0x0751(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	bool                                          IsReverseEngaging;                                 // 0x0752(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsHandBraking;                                     // 0x0753(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                         BrakeLightIntensity_On;                            // 0x0754(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                         BrakeLightIntensity_Off;                           // 0x0758(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                         ExplosionRadius_Inner;                             // 0x075C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                         ExplosionRadius_Outer;                             // 0x0760(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_764[0x4];                                      // 0x0764(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCurveFloat*                            DamageCurve;                                       // 0x0768(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                         Throttle;                                          // 0x0770(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_774[0x4];                                      // 0x0774(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCurveFloat*                            FuelConsumptionCurve;                              // 0x0778(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                         FuelEfficiency;                                    // 0x0780(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_784[0x4];                                      // 0x0784(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UTslWheeledVehicleMovement*             TslWheeledVehicleMovementRef;                      // 0x0788(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class ATslPlayerController*                   DriveControllerrRef;                               // 0x0790(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TArray<float>                                 WheelsLatSlip_0;                                   // 0x0798(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                 WheelsLongSlip_0;                                  // 0x07A8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                         FuelConsumptionModifierIdle;                       // 0x07B8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                         SpeedKPH_0;                                        // 0x07BC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<float>                                 WheelsSuspensionOffset_0;                          // 0x07C0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UPhysicalMaterial*>              WheelsContactSurface_0;                            // 0x07D0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                 WheelsRotationSpeed;                               // 0x07E0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                 WheelsSuspensionMaxDrop_0;                         // 0x07F0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                 WheelsSuspensionMaxRaise_0;                        // 0x0800(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                         RPM_0;                                             // 0x0810(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          TestBoostingAKEvent;                               // 0x0814(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          TestBoostingAKEvent_prev;                          // 0x0815(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          TestThrottlingAKEvent;                             // 0x0816(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          TestThrottlingAKEvent_prev;                        // 0x0817(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          TestSteeringAKEvent;                               // 0x0818(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          TestSteeringAKEvent_prev;                          // 0x0819(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_81A[0x2];                                      // 0x081A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Brake_0;                                           // 0x081C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          TestBrakingAKEvent;                                // 0x0820(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_821[0x7];                                      // 0x0821(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UPhysicalMaterial*>              TestWheelsContactSurface_prev_0;                   // 0x0828(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                          TestBrakingAKEvent_prev;                           // 0x0838(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_839[0x7];                                      // 0x0839(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<float>                                 WheelsSuspensionOffsetNorm;                        // 0x0840(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                 WheelsWaterDepth_0;                                // 0x0850(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                         FlatTireCount_0;                                   // 0x0860(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bUseDynamicCamera;                                 // 0x0864(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_865[0x3];                                      // 0x0865(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                LastVelocity;                                      // 0x0868(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector                                Acceleration;                                      // 0x0874(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bTickFuelIndicator;                                // 0x0880(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bTickBoostIndicator;                               // 0x0881(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_882[0x2];                                      // 0x0882(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         LowFuelLevel;                                      // 0x0884(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                         LastFuelConsumptionTime;                           // 0x0888(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_VehicleBase(int32 EntryPoint);
	void EventFuelConsumption();
	void InpAxisEvt_MoveRight_K2Node_InputAxisEvent_15(float AxisValue);
	void TurnOffLight(float KillingDamage, const struct FDamageEvent& DamageEvent, class ATslPlayerState* PlayerInstigator, class AActor* DamageCauser);
	void ReceiveBeginPlay();
	void InpAxisEvt_MoveForward_K2Node_InputAxisEvent_7(float AxisValue);
	void ReceiveTick(float DeltaSeconds);
	void BrakeLampOff();
	void BrakeLampOn();
	void ToggleLights();
	void InpActEvt_Handbrake_K2Node_InputActionEvent_2(const struct FKey& Key);
	void InpActEvt_Handbrake_K2Node_InputActionEvent_3(const struct FKey& Key);
	void UserConstructionScript();
	void OnRep_isLightsOn();
	void OnRep_IsBrakeEngaged();
	void TickWheelSound();
	void TickWheelCaching();
	void TickBasicInfoCaching();
	void TickFuelConsumption(float DeltaSeconds);
	void TickBoostSoundTest();
	void TickThrottleSoundTest();
	void TickBrakeSoundTest();
	void TickDynamicCamera();
	void TickIndicators();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"VehicleBase_C">();
	}
	static class AVehicleBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AVehicleBase_C>();
	}
};
static_assert(alignof(AVehicleBase_C) == 0x000008, "Wrong alignment on AVehicleBase_C");
static_assert(sizeof(AVehicleBase_C) == 0x000890, "Wrong size on AVehicleBase_C");
static_assert(offsetof(AVehicleBase_C, UberGraphFrame) == 0x0006D0, "Member 'AVehicleBase_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AVehicleBase_C, BoostLight) == 0x0006D8, "Member 'AVehicleBase_C::BoostLight' has a wrong offset!");
static_assert(offsetof(AVehicleBase_C, LowFuelLight) == 0x0006E0, "Member 'AVehicleBase_C::LowFuelLight' has a wrong offset!");
static_assert(offsetof(AVehicleBase_C, TailLamp_2) == 0x0006E8, "Member 'AVehicleBase_C::TailLamp_2' has a wrong offset!");
static_assert(offsetof(AVehicleBase_C, TailLamp_1) == 0x0006F0, "Member 'AVehicleBase_C::TailLamp_1' has a wrong offset!");
static_assert(offsetof(AVehicleBase_C, HeadLamp_2) == 0x0006F8, "Member 'AVehicleBase_C::HeadLamp_2' has a wrong offset!");
static_assert(offsetof(AVehicleBase_C, HeadLamp_1) == 0x000700, "Member 'AVehicleBase_C::HeadLamp_1' has a wrong offset!");
static_assert(offsetof(AVehicleBase_C, ThirdPersonCameraInVehicle) == 0x000708, "Member 'AVehicleBase_C::ThirdPersonCameraInVehicle' has a wrong offset!");
static_assert(offsetof(AVehicleBase_C, ThirdPersonSpringArmInVehicle) == 0x000710, "Member 'AVehicleBase_C::ThirdPersonSpringArmInVehicle' has a wrong offset!");
static_assert(offsetof(AVehicleBase_C, FirstPersonCameraInVehicle) == 0x000718, "Member 'AVehicleBase_C::FirstPersonCameraInVehicle' has a wrong offset!");
static_assert(offsetof(AVehicleBase_C, FirstPersonSpringArmInVehicle) == 0x000720, "Member 'AVehicleBase_C::FirstPersonSpringArmInVehicle' has a wrong offset!");
static_assert(offsetof(AVehicleBase_C, RadialForce) == 0x000728, "Member 'AVehicleBase_C::RadialForce' has a wrong offset!");
static_assert(offsetof(AVehicleBase_C, ImpactModifier) == 0x000730, "Member 'AVehicleBase_C::ImpactModifier' has a wrong offset!");
static_assert(offsetof(AVehicleBase_C, ImpactAbsorption) == 0x000734, "Member 'AVehicleBase_C::ImpactAbsorption' has a wrong offset!");
static_assert(offsetof(AVehicleBase_C, ImpactModifierUpsideDown) == 0x000738, "Member 'AVehicleBase_C::ImpactModifierUpsideDown' has a wrong offset!");
static_assert(offsetof(AVehicleBase_C, ImpactAbsorptionUpsideDown) == 0x00073C, "Member 'AVehicleBase_C::ImpactAbsorptionUpsideDown' has a wrong offset!");
static_assert(offsetof(AVehicleBase_C, FuelConsumptionModifierBoost) == 0x000740, "Member 'AVehicleBase_C::FuelConsumptionModifierBoost' has a wrong offset!");
static_assert(offsetof(AVehicleBase_C, ImpactAbsorptionPassenger) == 0x000744, "Member 'AVehicleBase_C::ImpactAbsorptionPassenger' has a wrong offset!");
static_assert(offsetof(AVehicleBase_C, ImpactAbsorptionPassengerUpsideDown) == 0x000748, "Member 'AVehicleBase_C::ImpactAbsorptionPassengerUpsideDown' has a wrong offset!");
static_assert(offsetof(AVehicleBase_C, LaunchVelocityFactorOnHitCharacter) == 0x00074C, "Member 'AVehicleBase_C::LaunchVelocityFactorOnHitCharacter' has a wrong offset!");
static_assert(offsetof(AVehicleBase_C, IsLightsOn) == 0x000750, "Member 'AVehicleBase_C::IsLightsOn' has a wrong offset!");
static_assert(offsetof(AVehicleBase_C, IsBrakeEngaging) == 0x000751, "Member 'AVehicleBase_C::IsBrakeEngaging' has a wrong offset!");
static_assert(offsetof(AVehicleBase_C, IsReverseEngaging) == 0x000752, "Member 'AVehicleBase_C::IsReverseEngaging' has a wrong offset!");
static_assert(offsetof(AVehicleBase_C, IsHandBraking) == 0x000753, "Member 'AVehicleBase_C::IsHandBraking' has a wrong offset!");
static_assert(offsetof(AVehicleBase_C, BrakeLightIntensity_On) == 0x000754, "Member 'AVehicleBase_C::BrakeLightIntensity_On' has a wrong offset!");
static_assert(offsetof(AVehicleBase_C, BrakeLightIntensity_Off) == 0x000758, "Member 'AVehicleBase_C::BrakeLightIntensity_Off' has a wrong offset!");
static_assert(offsetof(AVehicleBase_C, ExplosionRadius_Inner) == 0x00075C, "Member 'AVehicleBase_C::ExplosionRadius_Inner' has a wrong offset!");
static_assert(offsetof(AVehicleBase_C, ExplosionRadius_Outer) == 0x000760, "Member 'AVehicleBase_C::ExplosionRadius_Outer' has a wrong offset!");
static_assert(offsetof(AVehicleBase_C, DamageCurve) == 0x000768, "Member 'AVehicleBase_C::DamageCurve' has a wrong offset!");
static_assert(offsetof(AVehicleBase_C, Throttle) == 0x000770, "Member 'AVehicleBase_C::Throttle' has a wrong offset!");
static_assert(offsetof(AVehicleBase_C, FuelConsumptionCurve) == 0x000778, "Member 'AVehicleBase_C::FuelConsumptionCurve' has a wrong offset!");
static_assert(offsetof(AVehicleBase_C, FuelEfficiency) == 0x000780, "Member 'AVehicleBase_C::FuelEfficiency' has a wrong offset!");
static_assert(offsetof(AVehicleBase_C, TslWheeledVehicleMovementRef) == 0x000788, "Member 'AVehicleBase_C::TslWheeledVehicleMovementRef' has a wrong offset!");
static_assert(offsetof(AVehicleBase_C, DriveControllerrRef) == 0x000790, "Member 'AVehicleBase_C::DriveControllerrRef' has a wrong offset!");
static_assert(offsetof(AVehicleBase_C, WheelsLatSlip_0) == 0x000798, "Member 'AVehicleBase_C::WheelsLatSlip_0' has a wrong offset!");
static_assert(offsetof(AVehicleBase_C, WheelsLongSlip_0) == 0x0007A8, "Member 'AVehicleBase_C::WheelsLongSlip_0' has a wrong offset!");
static_assert(offsetof(AVehicleBase_C, FuelConsumptionModifierIdle) == 0x0007B8, "Member 'AVehicleBase_C::FuelConsumptionModifierIdle' has a wrong offset!");
static_assert(offsetof(AVehicleBase_C, SpeedKPH_0) == 0x0007BC, "Member 'AVehicleBase_C::SpeedKPH_0' has a wrong offset!");
static_assert(offsetof(AVehicleBase_C, WheelsSuspensionOffset_0) == 0x0007C0, "Member 'AVehicleBase_C::WheelsSuspensionOffset_0' has a wrong offset!");
static_assert(offsetof(AVehicleBase_C, WheelsContactSurface_0) == 0x0007D0, "Member 'AVehicleBase_C::WheelsContactSurface_0' has a wrong offset!");
static_assert(offsetof(AVehicleBase_C, WheelsRotationSpeed) == 0x0007E0, "Member 'AVehicleBase_C::WheelsRotationSpeed' has a wrong offset!");
static_assert(offsetof(AVehicleBase_C, WheelsSuspensionMaxDrop_0) == 0x0007F0, "Member 'AVehicleBase_C::WheelsSuspensionMaxDrop_0' has a wrong offset!");
static_assert(offsetof(AVehicleBase_C, WheelsSuspensionMaxRaise_0) == 0x000800, "Member 'AVehicleBase_C::WheelsSuspensionMaxRaise_0' has a wrong offset!");
static_assert(offsetof(AVehicleBase_C, RPM_0) == 0x000810, "Member 'AVehicleBase_C::RPM_0' has a wrong offset!");
static_assert(offsetof(AVehicleBase_C, TestBoostingAKEvent) == 0x000814, "Member 'AVehicleBase_C::TestBoostingAKEvent' has a wrong offset!");
static_assert(offsetof(AVehicleBase_C, TestBoostingAKEvent_prev) == 0x000815, "Member 'AVehicleBase_C::TestBoostingAKEvent_prev' has a wrong offset!");
static_assert(offsetof(AVehicleBase_C, TestThrottlingAKEvent) == 0x000816, "Member 'AVehicleBase_C::TestThrottlingAKEvent' has a wrong offset!");
static_assert(offsetof(AVehicleBase_C, TestThrottlingAKEvent_prev) == 0x000817, "Member 'AVehicleBase_C::TestThrottlingAKEvent_prev' has a wrong offset!");
static_assert(offsetof(AVehicleBase_C, TestSteeringAKEvent) == 0x000818, "Member 'AVehicleBase_C::TestSteeringAKEvent' has a wrong offset!");
static_assert(offsetof(AVehicleBase_C, TestSteeringAKEvent_prev) == 0x000819, "Member 'AVehicleBase_C::TestSteeringAKEvent_prev' has a wrong offset!");
static_assert(offsetof(AVehicleBase_C, Brake_0) == 0x00081C, "Member 'AVehicleBase_C::Brake_0' has a wrong offset!");
static_assert(offsetof(AVehicleBase_C, TestBrakingAKEvent) == 0x000820, "Member 'AVehicleBase_C::TestBrakingAKEvent' has a wrong offset!");
static_assert(offsetof(AVehicleBase_C, TestWheelsContactSurface_prev_0) == 0x000828, "Member 'AVehicleBase_C::TestWheelsContactSurface_prev_0' has a wrong offset!");
static_assert(offsetof(AVehicleBase_C, TestBrakingAKEvent_prev) == 0x000838, "Member 'AVehicleBase_C::TestBrakingAKEvent_prev' has a wrong offset!");
static_assert(offsetof(AVehicleBase_C, WheelsSuspensionOffsetNorm) == 0x000840, "Member 'AVehicleBase_C::WheelsSuspensionOffsetNorm' has a wrong offset!");
static_assert(offsetof(AVehicleBase_C, WheelsWaterDepth_0) == 0x000850, "Member 'AVehicleBase_C::WheelsWaterDepth_0' has a wrong offset!");
static_assert(offsetof(AVehicleBase_C, FlatTireCount_0) == 0x000860, "Member 'AVehicleBase_C::FlatTireCount_0' has a wrong offset!");
static_assert(offsetof(AVehicleBase_C, bUseDynamicCamera) == 0x000864, "Member 'AVehicleBase_C::bUseDynamicCamera' has a wrong offset!");
static_assert(offsetof(AVehicleBase_C, LastVelocity) == 0x000868, "Member 'AVehicleBase_C::LastVelocity' has a wrong offset!");
static_assert(offsetof(AVehicleBase_C, Acceleration) == 0x000874, "Member 'AVehicleBase_C::Acceleration' has a wrong offset!");
static_assert(offsetof(AVehicleBase_C, bTickFuelIndicator) == 0x000880, "Member 'AVehicleBase_C::bTickFuelIndicator' has a wrong offset!");
static_assert(offsetof(AVehicleBase_C, bTickBoostIndicator) == 0x000881, "Member 'AVehicleBase_C::bTickBoostIndicator' has a wrong offset!");
static_assert(offsetof(AVehicleBase_C, LowFuelLevel) == 0x000884, "Member 'AVehicleBase_C::LowFuelLevel' has a wrong offset!");
static_assert(offsetof(AVehicleBase_C, LastFuelConsumptionTime) == 0x000888, "Member 'AVehicleBase_C::LastFuelConsumptionTime' has a wrong offset!");

}

