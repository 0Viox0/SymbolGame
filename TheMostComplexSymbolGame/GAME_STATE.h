#pragma once
#include "Player.h"
#include <conio.h>

enum STATES {MAIN_MENU, PLAYING, PAUSE};

class GAME_STATE
{
private:
	bool gameOver = false;
	STATES state = PLAYING;

	//creating objects
	Player* player;
public:
	//constructors
	GAME_STATE();

	//update and render
	void update();
	void render();
	
	//getters
	bool isOver();
	STATES getGameState();
};