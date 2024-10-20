#pragma once
/// <summary>
/// Should reverse.
/// </summary>
#include "EUIScene.h"
#include "Callback.h"
#include "src\module\call.h"
namespace Minecraft {

	class UIController {
	public:
		int** vt;
		UIController(void*);
		int NavigateToScene(int unkpcprofile, EUIScene a4, Callback* a5, int threeUnk, int zeroUnk) {
			Call<uint>(0x00883634, this, unkpcprofile, a4, (int)a5, threeUnk, zeroUnk);
		}
	};
}