#pragma once
#include "src\console\nbt\CompoundTag.h"
#include "src\console\block\Pos.h"
#include "src\console\entity\DamageSource.h"
#include "src\console\block\Block.h"
#include "src\console\math\struct.h"
#include "src\console\entity\Entity.h"
#include "src\extension.hpp"
namespace Minecraft {

	class LivingEntity :public Entity
	{
	public:
		// [Extension]
		const double* getPosition() const;
		uint aiStep();
		uint animateHurt();
		byte getArmorValue();
		bool attackable();
		uint getTeam();
		bool canBreathe();
		void die(DamageSource const* src);
		byte getArrowCount();
		bool isImmobile();
		bool isAlive();
		bool isBlocking();
		bool isFallFlying();
		bool isSleeping();
		bool isUsingItem();
		bool isWaterMob();
		bool breathesAir();
		bool breathesWather();
		bool breathesLava();
		uint GetSuffocateTime();
		uint GetAirRegenPerTick();
		void jumpFromGround();
		void jumpInLava();
		void jumpInWater();
		void kill();
		void markHurt();
		void onChangedBlock(BlockPos* pos);
		void outOfWorld();
		void setAbsoptionAmount(float f);
		void setHealth(float f);
		void setJumping(bool f);
		float GetSpeed();
		void SetSpeed(float f);
		void setSprinting(bool f);
		double getYHeadRot();
		double getHealth();
		double getAbsorptionAmount();
	};

}