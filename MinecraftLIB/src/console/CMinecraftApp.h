// Reference class to dissasembled Minecraft PlayStation 3 code.
// By josh
#include "src\system.hpp"
#include "src\module\call.h"
#include "LevelGenerationOptions.h"
namespace Minecraft {

	class CMinecraftApp
	{
	private:
		byte unkraw[1000];

	public:
		static uint64_t AutosaveDue(void);
		static uint64_t SecondsToAutosave(void);
		static bool DebugArtToolsOn(void);
		static bool DebugDevToolsOn(void);

		any DebugUIFocused();
		any SetDebugUIFocused(bool T);
		any SetDebugSequence(const char* s);
		any GetDisconnectReason(void);
		any SetDisconnectReason(any r);
		byte GetPlayerColour(byte i);
		int GetPlayerGameType(byte i);
		int GetPlayerPrivileges(byte i);
		void SetResetNether(bool T);
		bool GetResetNether();
		void SetResetEnd(bool T);
		bool GetResetEnd();
		any SetBaseSaveName(std::string* name);
		bool IsAppPaused();
		uintptr_t GetGameStarted();
		uintptr_t GetBanListCheck();
		any SetCorruptSaveDeleted();
		bool GetCorruptSaveDeleted();
		std::string GetDebugRootPath(void);
		static any SetAction(int Controller, int Argument, int Arg2, int Unk);
		any UpdateTime(void);
		any StartReloadingTexturePack();
		uintptr_t getGameRuleDefinitions();
		LevelGenerationOptions* getLevelGenerationOptions();
		any setLevelGenerationOptions(LevelGenerationOptions* levelGenPtr);
		uintptr_t getLevelRules();
		any loadDefaultGameRules();
		any processSchematics(uintptr_t LevelChunkPtr);
		any processSchematicsLighting(uintptr_t LevelChunkPtr);
		wchar_t* getEntityName(uint entVt);
		bool ShouldCollideWith(uintptr_t BlockPtr);

	};
}