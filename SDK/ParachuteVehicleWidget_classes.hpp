#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ParachuteVehicleWidget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ParachuteVehicleWidget.ParachuteVehicleWidget_C
// 0x0070 (0x02B0 - 0x0240)
class UParachuteVehicleWidget_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       WidgetVanishing;                                   // 0x0248(0x0008)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UWidgetAnimation*                       WidgetEmerging;                                    // 0x0250(0x0008)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UWidgetAnimation*                       ParachuteEmerging;                                 // 0x0258(0x0008)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class USizeBox*                               AltitudeBackground;                                // 0x0260(0x0008)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class USizeBox*                               ForceParachuteAlt;                                 // 0x0268(0x0008)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class USizeBox*                               LandHeight;                                        // 0x0270(0x0008)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UImage*                                 Parachute;                                         // 0x0278(0x0008)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UHorizontalBox*                         PlayerIndicator;                                   // 0x0280(0x0008)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UImage*                                 PlayerPos;                                         // 0x0288(0x0008)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class AParachutePlayer_C*                     ParachutePawn;                                     // 0x0290(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                         AltitudeMeterLength;                               // 0x0298(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector2D                              AltitudeMeterPlayerPosStart;                       // 0x029C(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          isLanding;                                         // 0x02A4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2A5[0x3];                                      // 0x02A5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         ReleasableAtitude;                                 // 0x02A8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bIsParachuteIconVanishing;                         // 0x02AC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          isParachuteReleased;                               // 0x02AD(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bIsWidgetVanishing;                                // 0x02AE(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_ParachuteVehicleWidget(int32 EntryPoint);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Construct();
	void OnPrepass_ParachuteWidgetVisibility(class UWidget* BoundWidget);
	class FText Get_AirSpeed_Text_0();
	void On_Parachute_Prepass_0(class UWidget* BoundWidget);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ParachuteVehicleWidget_C">();
	}
	static class UParachuteVehicleWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UParachuteVehicleWidget_C>();
	}
};
static_assert(alignof(UParachuteVehicleWidget_C) == 0x000008, "Wrong alignment on UParachuteVehicleWidget_C");
static_assert(sizeof(UParachuteVehicleWidget_C) == 0x0002B0, "Wrong size on UParachuteVehicleWidget_C");
static_assert(offsetof(UParachuteVehicleWidget_C, UberGraphFrame) == 0x000240, "Member 'UParachuteVehicleWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UParachuteVehicleWidget_C, WidgetVanishing) == 0x000248, "Member 'UParachuteVehicleWidget_C::WidgetVanishing' has a wrong offset!");
static_assert(offsetof(UParachuteVehicleWidget_C, WidgetEmerging) == 0x000250, "Member 'UParachuteVehicleWidget_C::WidgetEmerging' has a wrong offset!");
static_assert(offsetof(UParachuteVehicleWidget_C, ParachuteEmerging) == 0x000258, "Member 'UParachuteVehicleWidget_C::ParachuteEmerging' has a wrong offset!");
static_assert(offsetof(UParachuteVehicleWidget_C, AltitudeBackground) == 0x000260, "Member 'UParachuteVehicleWidget_C::AltitudeBackground' has a wrong offset!");
static_assert(offsetof(UParachuteVehicleWidget_C, ForceParachuteAlt) == 0x000268, "Member 'UParachuteVehicleWidget_C::ForceParachuteAlt' has a wrong offset!");
static_assert(offsetof(UParachuteVehicleWidget_C, LandHeight) == 0x000270, "Member 'UParachuteVehicleWidget_C::LandHeight' has a wrong offset!");
static_assert(offsetof(UParachuteVehicleWidget_C, Parachute) == 0x000278, "Member 'UParachuteVehicleWidget_C::Parachute' has a wrong offset!");
static_assert(offsetof(UParachuteVehicleWidget_C, PlayerIndicator) == 0x000280, "Member 'UParachuteVehicleWidget_C::PlayerIndicator' has a wrong offset!");
static_assert(offsetof(UParachuteVehicleWidget_C, PlayerPos) == 0x000288, "Member 'UParachuteVehicleWidget_C::PlayerPos' has a wrong offset!");
static_assert(offsetof(UParachuteVehicleWidget_C, ParachutePawn) == 0x000290, "Member 'UParachuteVehicleWidget_C::ParachutePawn' has a wrong offset!");
static_assert(offsetof(UParachuteVehicleWidget_C, AltitudeMeterLength) == 0x000298, "Member 'UParachuteVehicleWidget_C::AltitudeMeterLength' has a wrong offset!");
static_assert(offsetof(UParachuteVehicleWidget_C, AltitudeMeterPlayerPosStart) == 0x00029C, "Member 'UParachuteVehicleWidget_C::AltitudeMeterPlayerPosStart' has a wrong offset!");
static_assert(offsetof(UParachuteVehicleWidget_C, isLanding) == 0x0002A4, "Member 'UParachuteVehicleWidget_C::isLanding' has a wrong offset!");
static_assert(offsetof(UParachuteVehicleWidget_C, ReleasableAtitude) == 0x0002A8, "Member 'UParachuteVehicleWidget_C::ReleasableAtitude' has a wrong offset!");
static_assert(offsetof(UParachuteVehicleWidget_C, bIsParachuteIconVanishing) == 0x0002AC, "Member 'UParachuteVehicleWidget_C::bIsParachuteIconVanishing' has a wrong offset!");
static_assert(offsetof(UParachuteVehicleWidget_C, isParachuteReleased) == 0x0002AD, "Member 'UParachuteVehicleWidget_C::isParachuteReleased' has a wrong offset!");
static_assert(offsetof(UParachuteVehicleWidget_C, bIsWidgetVanishing) == 0x0002AE, "Member 'UParachuteVehicleWidget_C::bIsWidgetVanishing' has a wrong offset!");

}

