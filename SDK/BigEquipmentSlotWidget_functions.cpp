#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BigEquipmentSlotWidget

#include "Basic.hpp"

#include "BigEquipmentSlotWidget_classes.hpp"
#include "BigEquipmentSlotWidget_parameters.hpp"


namespace SDK
{

// Function BigEquipmentSlotWidget.BigEquipmentSlotWidget_C.ExecuteUbergraph_BigEquipmentSlotWidget
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBigEquipmentSlotWidget_C::ExecuteUbergraph_BigEquipmentSlotWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BigEquipmentSlotWidget_C", "ExecuteUbergraph_BigEquipmentSlotWidget");

	Params::BigEquipmentSlotWidget_C_ExecuteUbergraph_BigEquipmentSlotWidget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BigEquipmentSlotWidget.BigEquipmentSlotWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBigEquipmentSlotWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BigEquipmentSlotWidget_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BigEquipmentSlotWidget.BigEquipmentSlotWidget_C.OnUpdateItem
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UItem*                            Item_0                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBigEquipmentSlotWidget_C::OnUpdateItem(class UItem* Item_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BigEquipmentSlotWidget_C", "OnUpdateItem");

	Params::BigEquipmentSlotWidget_C_OnUpdateItem Parms{};

	Parms.Item_0 = Item_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BigEquipmentSlotWidget.BigEquipmentSlotWidget_C.GetSlotName
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                             ReturnValue                                            (Parm, OutParm, ReturnParm)

class FText UBigEquipmentSlotWidget_C::GetSlotName()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BigEquipmentSlotWidget_C", "GetSlotName");

	Params::BigEquipmentSlotWidget_C_GetSlotName Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BigEquipmentSlotWidget.BigEquipmentSlotWidget_C.OnDragDetected
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    PointerEvent                                           (ConstParm, Parm, OutParm, ReferenceParm)
// class UDragDropOperation*               Operation                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBigEquipmentSlotWidget_C::OnDragDetected(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation** Operation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BigEquipmentSlotWidget_C", "OnDragDetected");

	Params::BigEquipmentSlotWidget_C_OnDragDetected Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.PointerEvent = std::move(PointerEvent);

	UObject::ProcessEvent(Func, &Parms);

	if (Operation != nullptr)
		*Operation = Parms.Operation;
}


// Function BigEquipmentSlotWidget.BigEquipmentSlotWidget_C.GetDurabilityPercent
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                                   DurabilityPercent                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBigEquipmentSlotWidget_C::GetDurabilityPercent(float* DurabilityPercent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BigEquipmentSlotWidget_C", "GetDurabilityPercent");

	Params::BigEquipmentSlotWidget_C_GetDurabilityPercent Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (DurabilityPercent != nullptr)
		*DurabilityPercent = Parms.DurabilityPercent;
}


// Function BigEquipmentSlotWidget.BigEquipmentSlotWidget_C.HaveDurability
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    Result                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBigEquipmentSlotWidget_C::HaveDurability(bool* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BigEquipmentSlotWidget_C", "HaveDurability");

	Params::BigEquipmentSlotWidget_C_HaveDurability Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;
}


// Function BigEquipmentSlotWidget.BigEquipmentSlotWidget_C.OnPreviewMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    MouseEvent                                             (ConstParm, Parm, OutParm, ReferenceParm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UBigEquipmentSlotWidget_C::OnPreviewMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BigEquipmentSlotWidget_C", "OnPreviewMouseButtonDown");

	Params::BigEquipmentSlotWidget_C_OnPreviewMouseButtonDown Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BigEquipmentSlotWidget.BigEquipmentSlotWidget_C.UpdateDurabilityVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                          BoundWidget                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBigEquipmentSlotWidget_C::UpdateDurabilityVisibility(class UWidget* BoundWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BigEquipmentSlotWidget_C", "UpdateDurabilityVisibility");

	Params::BigEquipmentSlotWidget_C_UpdateDurabilityVisibility Parms{};

	Parms.BoundWidget = BoundWidget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BigEquipmentSlotWidget.BigEquipmentSlotWidget_C.UpdateDurabilityGauge
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                          BoundWidget                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBigEquipmentSlotWidget_C::UpdateDurabilityGauge(class UWidget* BoundWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BigEquipmentSlotWidget_C", "UpdateDurabilityGauge");

	Params::BigEquipmentSlotWidget_C_UpdateDurabilityGauge Parms{};

	Parms.BoundWidget = BoundWidget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BigEquipmentSlotWidget.BigEquipmentSlotWidget_C.UpdateDurationNumber
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                          BoundWidget                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBigEquipmentSlotWidget_C::UpdateDurationNumber(class UWidget* BoundWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BigEquipmentSlotWidget_C", "UpdateDurationNumber");

	Params::BigEquipmentSlotWidget_C_UpdateDurationNumber Parms{};

	Parms.BoundWidget = BoundWidget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BigEquipmentSlotWidget.BigEquipmentSlotWidget_C.GetDurability
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Durability                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBigEquipmentSlotWidget_C::GetDurability(float* Durability)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BigEquipmentSlotWidget_C", "GetDurability");

	Params::BigEquipmentSlotWidget_C_GetDurability Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Durability != nullptr)
		*Durability = Parms.Durability;
}


// Function BigEquipmentSlotWidget.BigEquipmentSlotWidget_C.GetItem_Bp
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UItem*                            Item_0                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBigEquipmentSlotWidget_C::GetItem_Bp(class UItem** Item_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BigEquipmentSlotWidget_C", "GetItem_Bp");

	Params::BigEquipmentSlotWidget_C_GetItem_Bp Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Item_0 != nullptr)
		*Item_0 = Parms.Item_0;
}


// Function BigEquipmentSlotWidget.BigEquipmentSlotWidget_C.On_FocusColorBG_Prepass_0
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                          BoundWidget                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBigEquipmentSlotWidget_C::On_FocusColorBG_Prepass_0(class UWidget* BoundWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BigEquipmentSlotWidget_C", "On_FocusColorBG_Prepass_0");

	Params::BigEquipmentSlotWidget_C_On_FocusColorBG_Prepass_0 Parms{};

	Parms.BoundWidget = BoundWidget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BigEquipmentSlotWidget.BigEquipmentSlotWidget_C.SetFocus
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    NewFocus                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UBigEquipmentSlotWidget_C::SetFocus(bool NewFocus)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BigEquipmentSlotWidget_C", "SetFocus");

	Params::BigEquipmentSlotWidget_C_SetFocus Parms{};

	Parms.NewFocus = NewFocus;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BigEquipmentSlotWidget.BigEquipmentSlotWidget_C.GetSlotContainer
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class ISlotContainerInterface>SlotContainer                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBigEquipmentSlotWidget_C::GetSlotContainer(TScriptInterface<class ISlotContainerInterface>* SlotContainer)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BigEquipmentSlotWidget_C", "GetSlotContainer");

	Params::BigEquipmentSlotWidget_C_GetSlotContainer Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (SlotContainer != nullptr)
		*SlotContainer = Parms.SlotContainer;
}


// Function BigEquipmentSlotWidget.BigEquipmentSlotWidget_C.GetSlotItem
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class ISlotInterface>  SlotItem                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBigEquipmentSlotWidget_C::GetSlotItem(TScriptInterface<class ISlotInterface>* SlotItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BigEquipmentSlotWidget_C", "GetSlotItem");

	Params::BigEquipmentSlotWidget_C_GetSlotItem Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (SlotItem != nullptr)
		*SlotItem = Parms.SlotItem;
}


// Function BigEquipmentSlotWidget.BigEquipmentSlotWidget_C.IsFocus
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UBigEquipmentSlotWidget_C::IsFocus() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BigEquipmentSlotWidget_C", "IsFocus");

	Params::BigEquipmentSlotWidget_C_IsFocus Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

