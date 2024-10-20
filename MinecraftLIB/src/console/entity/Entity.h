#pragma once
#include "src\system.hpp"
#include "src\module\call.h"
#include "src\console\math\struct.h"
#include "src\console\not_known.hpp"
#include "src\console\block\Material.h"
#include "src\console\block\Pos.h"
#include "src\console\block\Block.h"
#include "DamageSource.h"
#include "src\console\nbt\CompoundTag.h"
namespace Minecraft {

	class Creature
	{

	};

	class Enemy :Creature
	{

	};

	class CommandSender
	{

	};
	// Reference class to dissasembled Minecraft PlayStation 3 code.
	// By josh
	class Entity : CommandSender
	{
	public:
		uint type;
		bool verify;
	private:
		byte unk[251];
	public:
		double position[3];
	private:

		byte unk2[0x120];
		uint headHeight;
	public:
		uint* setView();
		bool isDead();
		bool invulnerable();
		any getMaxAirSupply(void);
		any fjDerivedCtorCallToInstances(void);
		any getId(void);
		any setId(int a0);
		any getEntityData(void);
		any resetPos(void);
		any setDropContainerContent(bool a0);
		any setSharedFlag(int a0, bool a1);
		any tick(void);
		any setSecondsOnFire(int a0);
		any clearFire(void);
		any setLocationFromBoundingbox(void);
		any checkInsideBlocks(void);
		any onInsideBlock(uintptr_t blocksatePtr);
		any playStepSound(BlockPos const& a0, Block* a1);
		any playUnderwaterSound(BlockPos const& a0, Block* a1);
		any playFlySound(float a0);
		any makeFlySound(void);
		any isSilent(void);
		any setSilent(bool a0);
		any isNoGravity(void);
		any setNoGravity(bool a0);
		any isMoving(void);
		any setMoving(bool a0);
		any getCollideBox(void);
		any burn(int a0);
		any isOverWater(void);
		any updateInWaterState(void);
		any updateSprintingState(void);
		any doSprintParticleEffect(void);
		any isUnderLiquid(Material* a0);
		any isInLiquid(Material* a0, Vector3* a1);
		any getBrightness(void);
		any setLevel(uint* level);
		any playerTouch(boost::shared_ptr__tm__8_6Player a0);
		any push(boost::shared_ptr__tm__8_6Entity a0);
		any markHurt(void);
		any hurt(DamageSource const* a0, float a1);
		any awardKillScore(boost::shared_ptr__tm__8_6Entity a0, int a1, DamageSource const* a2);
		any shouldRender(double a0);
		any shouldRenderAtSqrDistance(double a0);
		any save(CompoundTag* a0);
		any load(CompoundTag* a0);
		any repositionEntityAfterLoad(void);
		any getAdditionContructionTag(void);
		any spawnAtLocation(not_null_ptr__tm__15_12ItemInstance a0, float a1);
		any interact(boost::shared_ptr__tm__8_6Player const& a0, int hand);
		any getCollideAgainstBox(boost::shared_ptr__tm__8_6Entity a0);
		any positionRider(boost::shared_ptr__tm__8_6Entity const& a0);
		any onPassengerTurned(boost::shared_ptr__tm__8_6Entity a0);
		any getRideHeight(void);
		any showVehicleHealth(void);
		any startRiding(boost::shared_ptr__tm__8_6Entity a0, bool a1);
		any GetInteractTooltip(EntityTooltipDataHolder const& a0);
		any GetHitTooltip(EntityTooltipDataHolder const& a0);
		any HideUseTooltips(void);
		any canRide(boost::shared_ptr__tm__8_6Entity a0);
		any ejectPassengers(void);
		any addPassenger(boost::shared_ptr__tm__8_6Entity a0);
		any removePassenger(boost::shared_ptr__tm__8_6Entity a0);
		any canAddPassenger(boost::shared_ptr__tm__8_6Entity a0);
		any getPickRadius(void);
		any getLookAngle(void);
		any getRotationVector(void);
		any getForward(void);
		any handleInsidePortal(BlockPos const& a0);
		any getAllSlots(void);
		any isOnFire(void);
		any isPassenger(void);
		any isVehicle(void);
		any isSneaking(void);
		any setSneaking(bool a0);
		any isIdle(void);
		any setIsIdle(bool a0);
		any isSprinting(void);
		any isSwimming(void);
		any isSwimmer(void);
		any startSwimming(void);
		any stopSwimming(void);
		any setSwimmer(bool a0);
		any getSwimAmount(float a0);
		any setDamageNearbyMobs(bool a0);
		any getDamageNearbyMobs(void);
		any isGlowing(void);
		any setGlowing(bool a0);
		any isInvisible(void);
		any isAlliedTo(boost::shared_ptr__tm__8_6Entity a0);
		any isAlliedTo(Team* a0);
		any canFly(void);
		any getPos(float a0);
		any setAirSupply(int a0);
		any thunderHit(LightningBolt const* a0);
		any onAboveBubbleCol(bool a0);
		any isInvulnerable(void);
		any setInvulnerable(bool a0);
		any getSubEntities(void);
		any is(boost::shared_ptr__tm__8_6Entity a0);
		any isAttackable(void);
		any skipAttackInteraction(boost::shared_ptr__tm__8_6Entity a0);
		any copyPosition(boost::shared_ptr__tm__8_6Entity a0);
		any canChangeDimensions(void);
		any getBlockExplosionResistance(Explosion* a0, uint level, BlockPos const& a2);
		any shouldBlockExplode(Explosion* a0, uint level, BlockPos const& a2, float a3);
		any getMaxFallDistance(void);
		any getPortalEntranceBlock(void);
		any getPortalEntranceOffset(void);
		any getPortalEntranceForwards(void);
		any isIgnoringBlockTriggers(void);
		any displayFireAnimation(void);


		byte unk_filler[600];
	};
}