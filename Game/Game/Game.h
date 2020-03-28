#pragma once

#include "olcPixelGameEngine.h"

class Game : public olc::PixelGameEngine
{
public:
	Game()
	{
		sAppName = "A game";
	}

private:
	bool OnUserCreate() override;
	bool OnUserUpdate(float) override;

private:
	void DrawLevel();

private:

};

