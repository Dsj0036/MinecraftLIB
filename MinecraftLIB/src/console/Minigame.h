#pragma once
#include "src\system.hpp"
#include "src\module\call.h"
namespace Minecraft {

	class MiniGameDef
	{
		byte idkWtf[64];
	public:
		any MiniGameDef::GetHostOption(int eCustomGameModeHostOption);
		any MiniGameDef::GetRoundCount(int									 a1);
		any MiniGameDef::ArePowerupsActive(int								 a1);
		any MiniGameDef::MayDestroy(const int a1);
		any MiniGameDef::AllowPvP(int										 a1);
		any MiniGameDef::GetTutorialsEnabled(int								 a1);
		any MiniGameDef::HasSpectatorParticipation(int						 a1);
		any MiniGameDef::getDifficulty(int									 a1);
		any MiniGameDef::GetLootSetText(const int 								 a1);
		any MiniGameDef::EditActionsDisabled(int								 a1);
		any MiniGameDef::HasCentralSpawnOption(int							 a1);
		any MiniGameDef::HasFeatureArrowCanKnockback(int						 a1);

	};
}