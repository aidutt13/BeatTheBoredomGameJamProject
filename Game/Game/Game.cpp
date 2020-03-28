#include "Game.h"

bool Game::OnUserCreate()
{
	return true;
}

bool Game::OnUserUpdate(float fElapsedTime)
{
	DrawRect(olc::vi2d(32, 64), olc::vi2d(32, 32));
	
	return true;
}