#pragma once
#include "src\system.hpp"
#include "src\module\call.h"
namespace Minecraft {

	class DamageSource {
	public:
		byte raw[48];
		any getEntity();
		bool isProjectile();
		bool isExplosion();
		bool isFireProjectile();
		bool isBypassArmor();
		int getFoodExhaustion();
		bool isBypassInvul();
		bool isBypassGraceInvul();
		bool isBypassMagic();
		bool isMagic();
		bool scalesWithDifficulty();
		uint getDirectEntity();
		uint getSourcePosition();
	};

}