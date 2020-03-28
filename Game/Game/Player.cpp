#include "Player.h"

olc::Sprite* Player::GetSprite()
{
	return &m_sprite;
}

void Player::Draw(olc::PixelGameEngine* pge)
{
	pge->DrawSprite(m_position, GetSprite());
}
