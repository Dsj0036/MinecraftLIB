#pragma once
#include "sys\syscall.h"
#include "system.hpp"
namespace Analysis {

	int cache_saveValue[2] = { 0x01DA0000, 0x33A00000 };
	int cache_highestVal[2] = { 0x01DF0000, 0x36000000 };

	int getHighestValue(int index, int checkAddr)
	{
		if (checkAddr > cache_saveValue[index] && checkAddr < cache_highestVal[index])
		{
			char getVal[1];
			int val = sys_dbg_read_process_memory_ps3mapi(checkAddr, getVal, 1);
			if (val != -2147418099)
			{
				cache_saveValue[index] = checkAddr + 1;
				return checkAddr;
			}

			return 0x000101C0;
		}
		return cache_saveValue[index];
	}

}


int guessfix_storage_for_mc(int addr)
{
	if (0x00010000 < addr && Analysis::getHighestValue(0, addr) > addr ||
		0x10000000 < addr && 0x10EF0000 > addr ||
		0x10F30000 < addr && 0x11060000 > addr ||
		0x11220000 < addr && 0x136A0000 > addr ||
		0x20000000 < addr && 0x20060000 > addr ||
		0x30000000 < addr && Analysis::getHighestValue(1, addr) > addr ||
		0x40000000 < addr && 0x40010000 > addr ||
		0x40100000 < addr && 0x40110000 > addr ||
		0x40200000 < addr && 0x40210000 > addr ||
		0x40300000 < addr && 0x40310000 > addr ||
		0x50000000 < addr && 0x52000000 > addr ||
		0x60000000 < addr && 0x64000000 > addr ||
		0xC0000000 < addr && 0xCF900000 > addr ||
		0xD0010000 < addr && 0xD0020000 > addr ||
		0xD0030000 < addr && 0xD0050000 > addr ||
		0xD0060000 < addr && 0xD00A0000 > addr ||
		0xD00B0000 < addr && 0xD0130000 > addr ||
		0xD0160000 < addr && 0xD02A0000 > addr ||
		0xD02B0000 < addr && 0xD02F0000 > addr)
		return addr;
	else
	{
		char getVal[1];
		int val = sys_dbg_read_process_memory_ps3mapi(addr, getVal, 1);
		if (val != -2147418099)
			return addr;
		else
			return 0x000101C0;
	}
}