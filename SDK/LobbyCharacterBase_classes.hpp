#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LobbyCharacterBase

#include "Basic.hpp"

#include "TslGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass LobbyCharacterBase.LobbyCharacterBase_C
// 0x0000 (0x0840 - 0x0840)
class ALobbyCharacterBase_C : public ALobbyCharacter
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"LobbyCharacterBase_C">();
	}
	static class ALobbyCharacterBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ALobbyCharacterBase_C>();
	}
};
static_assert(alignof(ALobbyCharacterBase_C) == 0x000010, "Wrong alignment on ALobbyCharacterBase_C");
static_assert(sizeof(ALobbyCharacterBase_C) == 0x000840, "Wrong size on ALobbyCharacterBase_C");

}

