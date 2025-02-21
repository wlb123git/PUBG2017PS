#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: InGameReplayMenu

#include "Basic.hpp"

#include "InGameReplayMenu_classes.hpp"
#include "InGameReplayMenu_parameters.hpp"


namespace SDK
{

// Function InGameReplayMenu.InGameReplayMenu_C.ExecuteUbergraph_InGameReplayMenu
// ()
// Parameters:
// int32                                   EntryPoint                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UInGameReplayMenu_C::ExecuteUbergraph_InGameReplayMenu(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InGameReplayMenu_C", "ExecuteUbergraph_InGameReplayMenu");

	Params::InGameReplayMenu_C_ExecuteUbergraph_InGameReplayMenu Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function InGameReplayMenu.InGameReplayMenu_C.BndEvt__Button_Resume_K2Node_ComponentBoundEvent_247_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UInGameReplayMenu_C::BndEvt__Button_Resume_K2Node_ComponentBoundEvent_247_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InGameReplayMenu_C", "BndEvt__Button_Resume_K2Node_ComponentBoundEvent_247_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function InGameReplayMenu.InGameReplayMenu_C.BndEvt__Button_Exit_K2Node_ComponentBoundEvent_228_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UInGameReplayMenu_C::BndEvt__Button_Exit_K2Node_ComponentBoundEvent_228_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InGameReplayMenu_C", "BndEvt__Button_Exit_K2Node_ComponentBoundEvent_228_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function InGameReplayMenu.InGameReplayMenu_C.BndEvt__Button_ReplayList_K2Node_ComponentBoundEvent_210_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UInGameReplayMenu_C::BndEvt__Button_ReplayList_K2Node_ComponentBoundEvent_210_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InGameReplayMenu_C", "BndEvt__Button_ReplayList_K2Node_ComponentBoundEvent_210_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function InGameReplayMenu.InGameReplayMenu_C.QuitReplay
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EPopupButtonID                          ButtonID                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UInGameReplayMenu_C::QuitReplay(EPopupButtonID ButtonID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InGameReplayMenu_C", "QuitReplay");

	Params::InGameReplayMenu_C_QuitReplay Parms{};

	Parms.ButtonID = ButtonID;

	UObject::ProcessEvent(Func, &Parms);
}


// Function InGameReplayMenu.InGameReplayMenu_C.GotoReplayList
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EPopupButtonID                          ButtonID                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UInGameReplayMenu_C::GotoReplayList(EPopupButtonID ButtonID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InGameReplayMenu_C", "GotoReplayList");

	Params::InGameReplayMenu_C_GotoReplayList Parms{};

	Parms.ButtonID = ButtonID;

	UObject::ProcessEvent(Func, &Parms);
}

}

