#pragma once

#include "Player.h"

class PlayerMovement
{
private:

	olc::PixelGameEngine* m_pge;
	Player* m_player;

	bool m_moving{ false };
	olc::vi2d m_destination;

public:
	PlayerMovement()
	{

	}

private:
	aid::direction HandleKeys();

	void StartMovement();
	void Move();

public:
	void CheckMovement(float);
};