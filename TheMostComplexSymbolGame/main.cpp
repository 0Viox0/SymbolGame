#include "Player.h"
#include "GAME_STATE.h"


int main()
{
	GAME_STATE game;

	Player player;


	while (!game.isOver())	//general gaming loop
	{
		//switch (game.getGameState())
		//{
		//case MAIN_MENU:
		//
		//	break;
		//case PLAYING:
		//	game.render(player);
		//
		//
		//	break;
		//case PAUSE:
		//
		//	break;
		//}

		player.render();
	}


	return 0;
}