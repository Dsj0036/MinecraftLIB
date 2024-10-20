#pragma once
#include "src\system.hpp"
#include "src\module\call.h"
#include "src\console\not_known.hpp"
#include "src\console\Minigame.h"
#include "src\console\CMinecraftApp.h"
namespace Minecraft {
	CMinecraftApp* const getInstance();
	any addLocalPlayer(int a1);
	any GetMiniGame();
	any GetClientMasterGameMode();
	any setScreen(Screen* a1);
	any run();
	any getCameraEntity();
	any createPrimaryLocalPlayer(int a1);
	any setLocalPlayerIdx(int a1);
	any getLocalPlayerIdx();
	any tickAllConnections();
	any run_middle();
	any prepareLevel(int a1);
	any getBlockColors();
	any getItemColors();
	any forceLeaderboardSave(int a1);
	any addPendingClientTextureRequest(std::string const& a1);
	any handleClientTextureReceived(std::string const& a1);
	any isUsingDefaultSkin();
	any getCurrentTexturePackId();
	any getMaterialTable();
	any getStructureManager();
	any fjReloadTexturePack();
	any GetPlayerByPlayerIndex(int a1);
	any GetSpectateMode();
	any GetSpectateEntity();
	any SetupMiniGameInstance(MiniGameDef const& a1, int a2);
	any GetFirstMiniGame();
	any showOnlyReducedInfo();
	any GetGhostController();
}
template <typename...arg>
std::size_t wcnprintf(wchar_t* buffer, size_t size, wchar_t* format, arg...s);

template <typename...arg>
std::size_t wcprintf(wchar_t* buffer, wchar_t* format, arg...s);