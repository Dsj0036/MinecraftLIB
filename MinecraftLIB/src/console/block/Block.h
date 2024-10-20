#pragma once
#include "src\system.hpp"
#include "Material.h"
namespace Minecraft {

	class Block {

	public:
		byte raw[140];
		any Block::defaultBlockState();
		Block(Material* a0);
		Block(void* a0, Material* a1);
		any Block::registerDefaultState(byte const* a0);
		any Block::DerivedInit();
		any Block::setExplodeable(float a0);
		any Block::setDestroyTime(float a0);
		any Block::setIndestructible();
		any Block::setNotCollectStatistics();
	};
}