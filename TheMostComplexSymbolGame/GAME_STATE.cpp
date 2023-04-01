#include "GAME_STATE.h"

//constructors
GAME_STATE::GAME_STATE()
{
	player = new Player();
}


//update and render functions

void GAME_STATE::update()
{
	if (_kbhit())
	{
		char ch = _getch();

		switch (ch)
		{
					//if we hit movement bind
		case 'w': 
			player->updateMovement
				(Coords(player->getCoords().x, player->getCoords().y - 1), 
					DIRECTION::UP);
			break;
		case 's':
			player->updateMovement
			(Coords(player->getCoords().x, player->getCoords().y + 1),
				DIRECTION::DOWN);
			break;
		case 'a':
			player->updateMovement
			(Coords(player->getCoords().x - 1, player->getCoords().y),
				DIRECTION::LEFT);
			break;
		case 'd':
			player->updateMovement
			(Coords(player->getCoords().x + 1, player->getCoords().y),
				DIRECTION::RIGHT);
			break;
		}
	}
}

void GAME_STATE::render()
{
	player->render();
}

//getters
bool GAME_STATE::isOver() { return gameOver; }

STATES GAME_STATE::getGameState() { return state; }