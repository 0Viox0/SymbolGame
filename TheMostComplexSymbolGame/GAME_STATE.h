#pragma once
#include "GameObject.h"

enum STATES {MAIN_MENU, PLAYING, PAUSE};

class GAME_STATE
{
private:
	bool gameOver = false;
	STATES state = PLAYING;

public:
	//update and render
	void render(GameObject*);
	void update(GameObject*);

	//getters
	bool isOver();
	STATES getGameState();
};