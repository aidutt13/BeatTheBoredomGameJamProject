#include "PlayerMovement.h"

aid::direction PlayerMovement::HandleKeys()
{

}

void PlayerMovement::CheckMovement(float fElapsedTime)
{
	if (m_moving)
		Move();
	aid::direction movement{ HandleKeys() };
	if (movement)
	{
		if (m_player->facing != movement)
			m_player->facing = movement;
		else
		{
			StartMovement();
		}
	}
}