#pragma once
#include "../module/call.h"
#include "EUIScene.h"
#include "SoundEvent.h"
#include "types.h"
namespace Minecraft {

	class ConsoleUIController {
	public:
		int getFontForLanguage(int lang);
		void SetupFont();
		void render();
		void getCleanupOnReload();
		bool IsReloadingSkin();
		void SetMenuDisplayed(int menuId, bool displayed);
		void CloseAllPlayersScenes(bool immediate);
		void tick();
		void CloseAllUIScenes();
		void ReloadSkin();
		void StartReloadSkinThread();
		bool IsExpectingOrReloadingSkin();
		void NavigateBack(int option, bool force, EUIScene scene, EUILayer layer);
		int GetTopScene(int option, EUILayer layer, EUIGroup group);
		void RegisterForCallbackId(void* uiscene);
		void CloseUIScenes(int sceneId, bool immediate);
		bool IsSceneInStack(int sceneId, EUIScene scene);
		bool CheckMenuDisplayed();
		void PlayUISFX(const Sound::SoundEvent* event);
		/// <summary>
		/// [Extension] Play engine ui sound by using a pointer from the BANK <seealso cref="Sound"></seealso>
		/// </summary>
		void PlayUISFX(int sfxPtr);
		void ResetSelectedItem();
		bool IsTutorialVisible(int tutorialId);
		void ShowTrialTimer(bool show);
		void ShowUIDebugConsole(bool show);
		/// <summary>
		/// Checks if the engine is displaying a modal. 
		/// Example: Crafting menu
		/// </summary>
		/// <returns>Boolean</returns>
		static bool IsModalActive();
	};
}