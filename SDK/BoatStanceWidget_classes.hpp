#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BoatStanceWidget

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BoatStanceWidget.BoatStanceWidget_C
// 0x0008 (0x0248 - 0x0240)
class UBoatStanceWidget_C final : public UUserWidget
{
public:
	class UImage*                                 BoatImage;                                         // 0x0240(0x0008)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BoatStanceWidget_C">();
	}
	static class UBoatStanceWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBoatStanceWidget_C>();
	}
};
static_assert(alignof(UBoatStanceWidget_C) == 0x000008, "Wrong alignment on UBoatStanceWidget_C");
static_assert(sizeof(UBoatStanceWidget_C) == 0x000248, "Wrong size on UBoatStanceWidget_C");
static_assert(offsetof(UBoatStanceWidget_C, BoatImage) == 0x000240, "Member 'UBoatStanceWidget_C::BoatImage' has a wrong offset!");

}

