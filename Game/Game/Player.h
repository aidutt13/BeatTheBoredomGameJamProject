#pragma once

#include "olcPixelGameEngine.h"
#include "aidBase.h"

class Player
{
private:
	olc::Sprite m_sprite;

public:
	olc::vi2d m_position;
	aid::direction facing;


public:
	Player()
	{

	}

public:
	olc::Sprite* GetSprite();

	void Draw(olc::PixelGameEngine*);

};