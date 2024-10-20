#pragma once
#include "src/system.hpp"
#include "not_known.hpp"
#include "src\console\entity\LivingEntity.h"
#include "Direction.h"
#include "src\console\block\Block.h"
#include "Difficulty.hpp"
#include "GameType.h"
namespace Minecraft {

	class LevelSettings
	{

	};
	class DimensionType {

	};
	class SuperflatConfig {

	};
	class LevelType {

	};
	class LevelData {

	public:
		LevelData::LevelData(CompoundTag* a0);                                                                                                    
		LevelData::LevelData(LevelData* a0);                                                                                                      
		LevelData::LevelData(LevelSettings* a0, std::string const& a1);                                                                           
		LevelData::LevelData();                                                                                                                   
		any LevelData::createTag();                                                                                                               
		any LevelData::getAllowCommands();                                                                                                        
		any LevelData::getBiomeCentreXChunk();                                                                                                    
		any LevelData::getBiomeCentreZChunk();                                                                                                    
		any LevelData::getBiomeScale();                                                                                                           
		any LevelData::getCloudHeight();                                                                                                          
		any LevelData::getDayTime();                                                                                                              
		any LevelData::getDifficulty();                                                                                                           
		any LevelData::getDimensionData(DimensionType const* a0);                                                                                 
		any LevelData::getGameRules();                                                                                                            
		any LevelData::getGameTime();                                                                                                             
		any LevelData::getGameType();                                                                                                             
		any LevelData::getGeneratorOptions();                                                                                                     
		any LevelData::getGeneratorType();                                                                                                        
		any LevelData::getHasBeenInCreative();                                                                                                    
		any LevelData::getHasStronghold();                                                                                                        
		any LevelData::getHasStrongholdEndPortal();                                                                                               
		any LevelData::getHellScale();                                                                                                            
		any LevelData::getLastPlayed();                                                                                                           
		any LevelData::getLevelName();                                                                                                            
		any LevelData::getLoadedPlayerTag();                                                                                                      
		any LevelData::getRainTime();                                                                                                             
		any LevelData::getSeed();                                                                                                                 
		any LevelData::getSizeOnDisk();                                                                                                           
		any LevelData::getSpawnBonusChest();                                                                                                      
		any LevelData::getThunderTime();                                                                                                          
		any LevelData::getVersion();                                                                                                              
		any LevelData::getXSpawn();                                                                                                               
		any LevelData::getXStronghold();                                                                                                          
		any LevelData::getXStrongholdEndPortal();                                                                                                 
		any LevelData::getXZSize();                                                                                                               
		any LevelData::getYSpawn();                                                                                                               
		any LevelData::getZSpawn();                                                                                                               
		any LevelData::getZStrongholdEndPortal();                                                                                                 
		any LevelData::isDifficultyLocked();                                                                                                      
		any LevelData::isGenerateMapFeatures();                                                                                                   
		any LevelData::isHardcore();                                                                                                              
		any LevelData::isInitialized();                                                                                                           
		any LevelData::isRaining();                                                                                                               
		any LevelData::isThundering();                                                                                                            
		any LevelData::mgetClearWeatherTime();                                                                                                    
		any LevelData::mgetModernEnd();                                                                                                           
		any LevelData::ngetZStronghold();                                                                                                         
		any LevelData::setAllowCommands(bool a0);                                                                                                 
		any LevelData::setClearWeatherTime(int a0);                                                                                               
		any LevelData::setCloudHeight(int a0);                                                                                                    
		any LevelData::setDifficulty(Difficulty const* a0);                                                                                       
		any LevelData::setDifficultyLocked(bool a0);                                                                                              
		any LevelData::setDimensionData(DimensionType const* a0, CompoundTag* a1);                                                                
		any LevelData::setGameType(GameType const* a0);                                                                                           
		any LevelData::setGenerateMapFeatures(bool a0);                                                                                           
		any LevelData::setGeneratorOptions(SuperflatConfig* a0);                                                                                  
		any LevelData::setGeneratorType(LevelType* a0);                                                                                           
		any LevelData::setHardcore(bool a0);                                                                                                      
		any LevelData::setHasBeenInCreative(bool a0);                                                                                             
		any LevelData::setHasStronghold();                                                                                                        
		any LevelData::setHasStrongholdEndPortal();                                                                                               
		any LevelData::setInitialized(bool a0);                                                                                                   
		any LevelData::setLevelName(std::string const& a0);                                                                                       
		any LevelData::setModernEnd();                                                                                                            
		any LevelData::setRaining(bool a0);                                                                                                       
		any LevelData::setSpawn(BlockPos const& a0);                                                                                              
		any LevelData::setTagData(CompoundTag* a0);                                                                                               
		any LevelData::setThunderTime(int a0);                                                                                                    
		any LevelData::setThundering(bool a0);                                                                                                    
		any LevelData::setVersion(int a0);                                                                                                        
		any LevelData::setXSpawn(int a0);                                                                                                         
		any LevelData::setXStronghold(int a0);                                                                                                    
		any LevelData::setXStrongholdEndPortal(int a0);                                                                                           
		any LevelData::setYSpawn(int a0);                                                                                                         
		any LevelData::setZSpawn(int a0);                                                                                                         
		any LevelData::setZStronghold(int a0);                                                                                                    
		any LevelData::setZStrongholdEndPortal(int a0);                                                                                           
		any LevelData::useNewSeaLevel();                                                                                                          
		LevelData::~LevelData();

	};

	class Level
	{
		byte raw[0x1024];
	public:
		typedef float* BlockPos;
		typedef float* AABB;


#pragma once
		any shouldFreeze(BlockPos const& a0, bool a1);
		LevelData* getLevelData(void);
		any hasChunkAt(BlockPos const& a0);
		any getBiome(BlockPos const& a0);
		any getBiomeSource(void);
		any initializeLevel(uint levelSettings);
		any setSpawnPos(BlockPos const& a0);
		any validateSpawn(void);
		any getSeaLevel(void);
		any getTopBlockState(BlockPos const& a0);
		any isInWorldBounds(BlockPos const& a0);
		any isEmptyWaterBlock(BlockPos const& a0);

		any hasChunksAt(BlockPos const& a0, int a1, bool a2);
		any hasChunksAt(BlockPos const& a0, int a1);
		// pointer to bounding box
		any hasChunksAt(uint BB, bool a1);
		any hasChunksAt(uint BB);
		any reallyHasChunkAt(BlockPos const& a0);
		any hasBlockCubes(uint constAABBptr);
		any getRainLevel(float a0);
		any getThunderLevel(float a0);
		any getOldSkyDarken(float a0);
		any getSkyDarken(float a0);
		any getSkyColor(uint shared_ptr__tm__8_6Entity, float a1);
		any getMoonPhase(void);

		any getMoonBrightness(void);
		any tickEntities(void);
		any tickServerPlayers(void);
		any isUnobstructed(uint constAABBptr, uint shared_ptr__tm__8_6Entity);
		any isUnobstructed(uint constAABBptr);
		any containsAnyBlocks(uint constAABBptr);

		//
		//IMPORT_CALL_TO_INSTANCE(0x0038F2CC, containsAnyLiquid, bool);
		//
		//IMPORT_CALL_TO_INSTANCE(0x0038F540, containsAnysolidBlocking, AABB*);
		//IMPORT_CALL_TO_INSTANCE(0x0038F7B4, containsAnyLiquid_NoLoad, AABB*);
		//IMPORT_CALL_TO_INSTANCE(0x0038FA70, containsFireBlock, AABB*);

		any containsFireBlock(Entity* a1, AABB* a2);
		any containsMaterial(AABB* a1, Material* a2);
		any isInLava(Entity* a1, AABB* a2);
		any containsLiquid(AABB* a1, Material* a2);
		any isUnderWater(BlockPos const& a1, byte const* a2);
		any isTouchingMaterial(BlockPos const& a1, Material const* a2);
		any getSeenPercent(Vector3* a1, AABB* a2);
		any extinguishFire(boost::shared_ptr__tm__8_6Player a1, BlockPos const& a2, Direction const* a3);
		any gatherChunkSourceStats();
		any getPendingBlockEntityAt(BlockPos const& a1);
		any getBlockEntity(BlockPos const& a1);
		any setBlockEntity(BlockPos const& a1, boost::shared_ptr__tm__14_11BlockEntity a2);
		any removeBlockEntity(BlockPos const& a1);
		any markForRemoval(boost::shared_ptr__tm__14_11BlockEntity a1);
		any isFullAABBBlock(BlockPos const& a1);
		any isSolidBlockingBlockInLoadedChunk(BlockPos const& a1, bool a2);
		any isSolidBlockingBlock(BlockPos const& a1);
		any isConsideredSolidBlock(BlockPos const& a1);
		any updateSkyBrightness();
		any tick();
		any prepareWeather();
		any getGameRules();
		any tickWeather(bool a1);
		any buildAndPrepareChunksToPoll();
		any tickBlocks();
		any instaTick(BlockPos const& a1, byte const* a2, Random& a3);
		any shouldFreeze(BlockPos const& a1);
		any calcSnowBlockDepth(BlockPos const& a1, int a2);
		any tickPendingTicks(bool a1);
		any fetchTicksInChunk(LevelChunk* a1, bool a2);
		any fetchTicksInArea(BoundingBox* a1, bool a2);
		any getEntity(int a1);
		any mayPlace(Block* a1, BlockPos const& a2, bool a3, Direction const* a4, boost::shared_ptr__tm__8_6Entity a5);
		any setSeaLevel(int a1);
		any getDirectSignal(BlockPos const& a1, Direction const* a2);
		any getGeneratorType();
		any getDirectSignalTo(BlockPos const& a1);
		any getSignal(BlockPos const& a1, Direction const* a2);
		any hasSignal(BlockPos const& a1, Direction const* a2);
		any hasNeighborSignal(BlockPos const& a1);
		any getBestNeighborSignal(BlockPos const& a1);
		any getPlayerByName(std::string const& a1);
		any getPlayerByUUID(std::string const& a1);
		any checkSession();
		any getGameTime();
		any getDayTime();
		any ShouldForceTimeUpdate();
		any getWorldBorder();
		any getSharedSpawnPos();
		any getChunkSource();
		any getLevelStorage();
		any getCloudHeight();
		any getFogDistance();
		any setFogDistance(int a1);
		any useNewSeaLevel();
		any getHasBeenInCreative();
		any getSaveVersion();
		any getOriginalSaveVersion();
		any setThunderLevel(float a1);
		any setRainLevel(float a1);
		any isThundering();
		any isRaining();
		any getWeatherState();
		any isSnowTemperature(BlockPos const& a1);
		any isRainingAt(BlockPos const& a1);
		any isSnowingAt(BlockPos const& a1);
		any isHumidAt(BlockPos const& a1);
		any setSavedDataStorage(SavedDataStorage* a1);
		any getSavedDataStorage();
		any setSavedData(std::string const& a1, boost::shared_ptr__tm__11_9SavedData a2);
		//any getSavedData(std::type_info const& a1, std::string const& a2) ;
		any getFreeAuxValueFor(std::string const& a1);
		any getMaxBuildHeight();
		any getHeight();
		any isAllEmpty();
		any getHorizonHeight();
		any updateNeighbourForOutputSignal(BlockPos const& a1, Block* a2);
		any getDifficulty();
		any getCurrentDifficultyAt(BlockPos const& a1);
		any getSkyDarken();
		any setSkyDarken(int a1);
		any getSkyFlashTime();
		any setSkyFlashTime(int a1);
		any isFindingSpawn();
		any setFindingSpawn(bool a1);
		any getVillages();
		any getSpecialMultiplier(int a1);
		any getLootTables();
		any setDaytime(uint32_t daytime);
	};

	class ServerLevel
	{

	};
}