#include "GAME_STATE.h"

int main()
{
	GAME_STATE game;


	while (!game.isOver())	//general gaming loop
	{
		switch (game.getGameState())
		{
		case MAIN_MENU:
		
			break;
		case PLAYING:
			game.update();
			game.render();
			break;
		case PAUSE:
		
			break;
		}

	}


	return 0;
}