
#pragma once
#include "src\system.hpp"
#include "src\module\call.h"
namespace Minecraft {

	// Size: 64
	class GameType
	{
	public:
		int type;
		byte unk[64];
		inline bool isCreative() const;
		inline bool isSurvival()const;
		inline bool isSpectator() const;
		// string or null
		const char* ToString() const;
	};

	namespace GameTypes
	{
		static const GameType* GetSurvival();
		static const GameType* GetCreative();
		static const GameType* GetAdventure();
		static const GameType* GetSpectator();
		static GameType* const ById(byte idx);
	}
}