#pragma once
#include "src\system.hpp"
#include "src\module\call.h"
namespace Minecraft
{
	class Material
	{
	public:
		bool* isLiquid();
		any letsWaterThrough();
		bool isSolid();
		bool blocksLight();
		bool blocksMotion();
		bool isFlammable();
		bool isReplaceable();
		bool isUnderWater();
		bool isSolidBlocking();
		bool isAlwaysDestroyable();
		bool getPushReaction();
		bool isDestroyedByHand();
		any getColor();

	};


}