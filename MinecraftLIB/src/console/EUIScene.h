#pragma once
namespace Minecraft {

		enum EUIScene {
			RETURN_0_0 = 0,           // - bytes 
			INTRO = 1,                // 200 bytes
			SAVE_MESSAGE = 2,         // 1424 bytes
			RETURN_3 = 3,             // - bytes
			FULLSCREEN_PROGRESS = 4,   // 3028 bytes
			RETURN_5 = 5,             // - bytes
			CRAFTING_MENU = 6,        // 27192 bytes
			FURNACE_MENU = 7,         // 8524 bytes
			RETURN_8 = 8,             // - bytes
			RETURN_9 = 9,             // - bytes
			RETURN_10 = 10,           // - bytes
			RETURN_11 = 11,           // - bytes
			RETURN_12 = 12,           // - bytes
			RETURN_13 = 13,           // - bytes
			RETURN_14 = 14,           // - bytes
			HELP_AND_OPTIONS_MENU = 15,// 5096 bytes
			HOW_TO_PLAY = 16,         // 19832 bytes
			HOW_TO_PLAY_MENU = 17,    // 896 bytes
			CONTROLS_MENU = 18,       // 1528 bytes
			RETURN_19 = 19,           // - bytes
			IN_GAME_SETTINGS_LIST_MENU = 20, // 2120 bytes
			SETTINGS_MENU = 21,       // 4484 bytes
			LEADERBOARDS_MENU = 22,   // 3488 bytes
			CREDITS = 23,             // 240 bytes
			DEATH_MENU = 24,          // 3260 bytes
			CREATE_WORLD_MENU = 26,   // 7224 bytes
			LOAD_CREATE_JOIN_MENU = 27,// 4732 bytes
			JOIN_MENU = 28,           // 2132 bytes
			SIGN_ENTRY_MENU = 29,     // 3884 bytes
			IN_GAME_INFO_MENU = 30,   // 2192 bytes
			CONNECTING_PROGRESS = 31,  // 2944 bytes
			DUMMY_32 = 32,            // 2936 bytes
			SUB_9B187C = 34,          // 196 bytes
			LOAD_MENU = 35,           // 8848 bytes
			REINSTALL_MENU = 37,      // 3868 bytes
			SKIN_SELECT_MENU = 38,    // 5900 bytes
			IN_GAME_HOST_OPTIONS_MENU = 40, // 892 bytes
			IN_GAME_PLAYER_OPTIONS_MENU = 41, // 1516 bytes
			SUB_8F7120 = 42,          // 9768 bytes
			SUB_8DAE74 = 43,          // 7468 bytes
			SUB_8D5B04 = 44,          // 1600 bytes
			SUB_98D3B8 = 45,          // 1424 bytes
			SUB_8F36F4 = 46,          // 7576 bytes
			SUB_8F4B50 = 47,          // 9152 bytes
			END_POEM = 48,            // 292 bytes
			SUB_9ACE80 = 50,          // 6444 bytes
			SUB_8F10DC = 51,          // 6696 bytes
			SUB_9AB718 = 52,          // 1524 bytes
			SUB_8F0354 = 53,          // 4816 bytes
			SUB_8EF8EC = 54,          // 6796 bytes
			SUB_8EEEBC = 55,          // 6152 bytes
			SUB_8ED94C = 57,          // 5428 bytes
			SUB_9A9E88 = 58,          // 1572 bytes
			SUB_9A2078 = 59,          // 4692 bytes
			SUB_9B32E0 = 60,          // 2668 bytes
			SUB_8E3E14 = 61,          // 6784 bytes
			SUB_8D44F0 = 62,          // 4136 bytes
			SUB_988F44 = 63,          // 2880 bytes
			SUB_98B168 = 64,          // 2912 bytes
			SUB_8D3808 = 72,          // 5708 bytes
			SUB_993EC4 = 73,          // 13192 bytes
			SUB_98C69C = 74,          // 3888 bytes
			UISCENE_TIMER = 75,       // 272 bytes
			SUB_8D4D1C = 76,          // 1424 bytes
			UNKNOWN_SCENE = 78         // 908 bytes
		};
		const char* GetEUISceneName(EUIScene scene) {
			switch (scene) {
			case RETURN_0_0: return "RETURN_0_0";
			case INTRO: return "INTRO";
			case SAVE_MESSAGE: return "SAVE_MESSAGE";
			case RETURN_3: return "RETURN_3";
			case FULLSCREEN_PROGRESS: return "FULLSCREEN_PROGRESS";
			case RETURN_5: return "RETURN_5";
			case CRAFTING_MENU: return "CRAFTING_MENU";
			case FURNACE_MENU: return "FURNACE_MENU";
			case RETURN_8: return "RETURN_8";
			case RETURN_9: return "RETURN_9";
			case RETURN_10: return "RETURN_10";
			case RETURN_11: return "RETURN_11";
			case RETURN_12: return "RETURN_12";
			case RETURN_13: return "RETURN_13";
			case RETURN_14: return "RETURN_14";
			case HELP_AND_OPTIONS_MENU: return "HELP_AND_OPTIONS_MENU";
			case HOW_TO_PLAY: return "HOW_TO_PLAY";
			case HOW_TO_PLAY_MENU: return "HOW_TO_PLAY_MENU";
			case CONTROLS_MENU: return "CONTROLS_MENU";
			case RETURN_19: return "RETURN_19";
			case IN_GAME_SETTINGS_LIST_MENU: return "IN_GAME_SETTINGS_LIST_MENU";
			case SETTINGS_MENU: return "SETTINGS_MENU";
			case LEADERBOARDS_MENU: return "LEADERBOARDS_MENU";
			case CREDITS: return "CREDITS";
			case DEATH_MENU: return "DEATH_MENU";
			case CREATE_WORLD_MENU: return "CREATE_WORLD_MENU";
			case LOAD_CREATE_JOIN_MENU: return "LOAD_CREATE_JOIN_MENU";
			case JOIN_MENU: return "JOIN_MENU";
			case SIGN_ENTRY_MENU: return "SIGN_ENTRY_MENU";
			case IN_GAME_INFO_MENU: return "IN_GAME_INFO_MENU";
			case CONNECTING_PROGRESS: return "CONNECTING_PROGRESS";
			case DUMMY_32: return "DUMMY_32";
			case SUB_9B187C: return "SUB_9B187C";
			case LOAD_MENU: return "LOAD_MENU";
			case REINSTALL_MENU: return "REINSTALL_MENU";
			case SKIN_SELECT_MENU: return "SKIN_SELECT_MENU";
			case IN_GAME_HOST_OPTIONS_MENU: return "IN_GAME_HOST_OPTIONS_MENU";
			case IN_GAME_PLAYER_OPTIONS_MENU: return "IN_GAME_PLAYER_OPTIONS_MENU";
			case SUB_8F7120: return "SUB_8F7120";
			case SUB_8DAE74: return "SUB_8DAE74";
			case SUB_8D5B04: return "SUB_8D5B04";
			case SUB_98D3B8: return "SUB_98D3B8";
			case SUB_8F36F4: return "SUB_8F36F4";
			case SUB_8F4B50: return "SUB_8F4B50";
			case END_POEM: return "END_POEM";
			case SUB_9ACE80: return "SUB_9ACE80";
			case SUB_8F10DC: return "SUB_8F10DC";
			case SUB_9AB718: return "SUB_9AB718";
			case SUB_8F0354: return "SUB_8F0354";
			case SUB_8EF8EC: return "SUB_8EF8EC";
			case SUB_8EEEBC: return "SUB_8EEEBC";
			case SUB_8ED94C: return "SUB_8ED94C";
			case SUB_9A9E88: return "SUB_9A9E88";
			case SUB_9A2078: return "SUB_9A2078";
			case SUB_9B32E0: return "SUB_9B32E0";
			case SUB_8E3E14: return "SUB_8E3E14";
			case SUB_8D44F0: return "SUB_8D44F0";
			case SUB_988F44: return "SUB_988F44";
			case SUB_98B168: return "SUB_98B168";
			case SUB_8D3808: return "SUB_8D3808";
			case SUB_993EC4: return "SUB_993EC4";
			case UISCENE_TIMER: return "UISCENE_TIMER";
			case SUB_8D4D1C: return "SUB_8D4D1C";
			case UNKNOWN_SCENE: return "UNKNOWN_SCENE_";
			default: return "UNKNOWN_SCENE";
			}
		}

	
}