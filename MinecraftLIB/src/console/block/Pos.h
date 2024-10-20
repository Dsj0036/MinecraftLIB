#pragma once

namespace Minecraft {
	struct BlockPos
	{
		float x, y, z;
		BlockPos(float x_, float y_, float z_) : x(x_), y(y_), z(z_) {}
		inline bool equals(BlockPos& e) const {
			return
				x == e.x &&
				y == e.y &&
				z == e.z;
		}
	};
}