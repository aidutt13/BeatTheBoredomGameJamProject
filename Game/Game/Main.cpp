#include "Game.h"

int main()
{
	Game game;
	if (game.Construct(640, 480, 1, 1))
		game.Start();

	return 0;
}