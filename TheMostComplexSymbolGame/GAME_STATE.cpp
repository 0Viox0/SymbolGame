#include "GAME_STATE.h"

//update and render functions

void GAME_STATE::render(GameObject* go) { go->render(); }
void GAME_STATE::update(GameObject* go) { go->update(); }


//getters
bool GAME_STATE::isOver() { return gameOver; }

STATES GAME_STATE::getGameState() { return state; }