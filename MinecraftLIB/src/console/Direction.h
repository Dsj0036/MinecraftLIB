#pragma once

namespace Minecraft {
	class Direction
	{
	public: enum direction_ptr {
		Top = 0x320BA250,
		Bottom = 0x320bc0c0,
		BackZ = 0x320bc1b0,
		FrontZ = 0x320bc160,
		FrontX = 0x32d75800,
		BackX = 0x320bc200
	};


	};
	class UsageDirection {

	public: enum Direction {
		Top,
		Bottom,
		BackX,
		BackZ,
		FrontX,
		FrontZ
	};

		  static uintptr_t getPointer(Direction d) {
			  switch (d) {
			  case 0: return 0x320b9b90; break;
			  case 1: return 0x320b9b40; break;
			  case 2: return 0x320b9b80; break;
			  case 3: return 0x320b9be0; break;
			  case 4: return 0x320b9cd0; break;
			  case 5: return 0x320b9c30; break;

			  }
		  }
		  static bool equals(uintptr_t ptr, Direction d) {
			  return getPointer(d) == ptr;
		  }

		  static const char* getName(Direction d) {
			  switch (d)
			  {
			  case UsageDirection::Top:
				  return "top  ";
				  break;
			  case UsageDirection::Bottom:
				  return "bottom ";
				  break;
			  case UsageDirection::BackX:
				  return "back_x";
				  break;
			  case UsageDirection::BackZ:
				  return "back_z";
				  break;
			  case UsageDirection::FrontX:
				  return "front_x";
				  break;
			  case UsageDirection::FrontZ:
				  return "front_z";
				  break;
			  default:
				  return "undefined";
				  break;
			  }
		  }

		  static int byPointer(uintptr_t ptr) {
			  switch (ptr) {
			  case 0x320b9b90: return 0; break;
			  case  0x320b9b40: return 1; break;
			  case  0x320b9b80: return 2; break;
			  case  0x320b9be0: return 3; break;
			  case  0x320b9cd0: return 4; break;
			  case  0x320b9c30: return 5; break;
			  default: return -1; break;
			  }

		  }

		  static void incrementBlockPosAtDirection(BlockPos* pos, Direction d) {
			  switch (d)
			  {
			  case UsageDirection::Top:
				  pos->y++;
				  break;
			  case UsageDirection::Bottom:
				  pos->y--;
				  break;
			  case UsageDirection::BackX:

				  pos->x--;
				  break;
			  case UsageDirection::BackZ:

				  pos->z--;
				  break;
			  case UsageDirection::FrontX:

				  pos->x++;
				  break;
			  case UsageDirection::FrontZ:
				  pos->z++;
				  break;
			  default:
				  break;
			  }
		  }
	};
}