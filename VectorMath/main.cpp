#include "Engine\Game.hpp"
#include "SFML\Vector2D.hpp"

int main()
{
	Game game;
	game.setHandleWindowClose(true);

	return game.Start();
}