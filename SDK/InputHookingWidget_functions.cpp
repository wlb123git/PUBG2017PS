#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: InputHookingWidget

#include "Basic.hpp"

#include "InputHookingWidget_classes.hpp"
#include "InputHookingWidget_parameters.hpp"


namespace SDK
{

// Function InputHookingWidget.InputHookingWidget_C.OnInputAction
// (Public, BlueprintCallable, BlueprintEvent)

void UInputHookingWidget_C::OnInputAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InputHookingWidget_C", "OnInputAction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function InputHookingWidget.InputHookingWidget_C.OnInputAxis
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Scale                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UInputHookingWidget_C::OnInputAxis(float Scale)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InputHookingWidget_C", "OnInputAxis");

	Params::InputHookingWidget_C_OnInputAxis Parms{};

	Parms.Scale = Scale;

	UObject::ProcessEvent(Func, &Parms);
}

}

