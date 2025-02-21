#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ChildOptionTitleWidget

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ChildOptionTitleWidget.ChildOptionTitleWidget_C
// 0x0020 (0x0260 - 0x0240)
class UChildOptionTitleWidget_C final : public UUserWidget
{
public:
	class UImage*                                 Image_0;                                           // 0x0240(0x0008)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class FText                                   DisplayTitleText;                                  // 0x0248(0x0018)(Edit, BlueprintVisible)

public:
	class FText GetText_0();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ChildOptionTitleWidget_C">();
	}
	static class UChildOptionTitleWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UChildOptionTitleWidget_C>();
	}
};
static_assert(alignof(UChildOptionTitleWidget_C) == 0x000008, "Wrong alignment on UChildOptionTitleWidget_C");
static_assert(sizeof(UChildOptionTitleWidget_C) == 0x000260, "Wrong size on UChildOptionTitleWidget_C");
static_assert(offsetof(UChildOptionTitleWidget_C, Image_0) == 0x000240, "Member 'UChildOptionTitleWidget_C::Image_0' has a wrong offset!");
static_assert(offsetof(UChildOptionTitleWidget_C, DisplayTitleText) == 0x000248, "Member 'UChildOptionTitleWidget_C::DisplayTitleText' has a wrong offset!");

}

