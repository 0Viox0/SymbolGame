#include "Player.h"

//Constructors
Player::Player()
{
	coord.x = 10;
	coord.y = 5;

	dir = DOWN;

	playerUpdated = true;
}

//draw funcions
void Player::drawLeft()
{
	gotoxy(coord.x, coord.y); cout << "^";
	gotoxy(coord.x + 1, coord.y); cout << "\\";
	gotoxy(coord.x + 2, coord.y); cout << "|";	//^\|/_
	gotoxy(coord.x + 3, coord.y); cout << "/";
	gotoxy(coord.x + 4, coord.y); cout << "_";

	gotoxy(coord.x, coord.y + 1); cout << "o";
	gotoxy(coord.x + 1, coord.y + 1); cout << "o";	//oo_)
	gotoxy(coord.x + 2, coord.y + 1); cout << "_";
	gotoxy(coord.x + 3, coord.y + 1); cout << ")";

	gotoxy(coord.x + 2, coord.y + 2); cout << "|";	// |

	gotoxy(coord.x + 1, coord.y + 3); cout << "/";
	gotoxy(coord.x + 2, coord.y + 3); cout << "|";  // "/|\"
	gotoxy(coord.x + 3, coord.y + 3); cout << "\\";

	gotoxy(coord.x + 2, coord.y + 4); cout << "|";	// |
}

void Player::drawRight()
{
	gotoxy(coord.x, coord.y); cout << "_";
	gotoxy(coord.x + 1, coord.y); cout << "\\";
	gotoxy(coord.x + 2, coord.y); cout << "|";	//_\|/^
	gotoxy(coord.x + 3, coord.y); cout << "/";
	gotoxy(coord.x + 4, coord.y); cout << "^";

	gotoxy(coord.x + 1, coord.y + 1); cout << "(";
	gotoxy(coord.x + 2, coord.y + 1); cout << "_";	//(_oo
	gotoxy(coord.x + 3, coord.y + 1); cout << "o";
	gotoxy(coord.x + 4, coord.y + 1); cout << "o";

	gotoxy(coord.x + 2, coord.y + 2); cout << "|";	// |

	gotoxy(coord.x + 1, coord.y + 3); cout << "/";
	gotoxy(coord.x + 2, coord.y + 3); cout << "|";  // "/|\"
	gotoxy(coord.x + 3, coord.y + 3); cout << "\\";

	gotoxy(coord.x + 2, coord.y + 4); cout << "|";	// |
}

void Player::drawUp()
{
	gotoxy(coord.x, coord.y); cout << "-";
	gotoxy(coord.x + 1, coord.y); cout << "\\";
	gotoxy(coord.x + 2, coord.y); cout << "|";	// -\|/-
	gotoxy(coord.x + 3, coord.y); cout << "/";
	gotoxy(coord.x + 4, coord.y); cout << "-";

	gotoxy(coord.x + 1, coord.y + 1); cout << "(";
	gotoxy(coord.x + 2, coord.y + 1); cout << "-";	//(-)
	gotoxy(coord.x + 3, coord.y + 1); cout << ")";

	gotoxy(coord.x + 2, coord.y + 2); cout << "|";	// |

	gotoxy(coord.x + 1, coord.y + 3); cout << "/";
	gotoxy(coord.x + 2, coord.y + 3); cout << "|";  // "/|\"
	gotoxy(coord.x + 3, coord.y + 3); cout << "\\";

	gotoxy(coord.x + 2, coord.y + 4); cout << "|";	// |
}

void Player::drawDown()
{
	gotoxy(coord.x, coord.y); cout << "-";
	gotoxy(coord.x + 1, coord.y); cout << "\\";
	gotoxy(coord.x + 2, coord.y); cout << "|";	// -\|/-
	gotoxy(coord.x + 3, coord.y); cout << "/";
	gotoxy(coord.x + 4, coord.y); cout << "-";

	gotoxy(coord.x, coord.y + 1); cout << "(";
	gotoxy(coord.x + 1, coord.y + 1); cout << "o";	//(o_o)
	gotoxy(coord.x + 2, coord.y + 1); cout << "_";
	gotoxy(coord.x + 3, coord.y + 1); cout << "o";
	gotoxy(coord.x + 4, coord.y + 1); cout << ")";

	gotoxy(coord.x + 2, coord.y + 2); cout << "|";	// |

	gotoxy(coord.x + 1, coord.y + 3); cout << "/";
	gotoxy(coord.x + 2, coord.y + 3); cout << "|";  // "/|\"
	gotoxy(coord.x + 3, coord.y + 3); cout << "\\";

	gotoxy(coord.x + 2, coord.y + 4); cout << "|";	// |
}

void Player::clearPrevPlayerDrawing()
{
	if (dir == UP)
	{
		for (int i = 1; i <= 5; i++)
		{
			gotoxy(coord.x, coord.y + i); cout << " ";
			gotoxy(coord.x + 1, coord.y + i); cout << " ";
			gotoxy(coord.x + 2, coord.y + i); cout << " ";
			gotoxy(coord.x + 3, coord.y + i); cout << " ";
			gotoxy(coord.x + 4, coord.y + i); cout << " ";
		}
	}
	else if (dir == DOWN)
	{
		for (int i = - 1; i <= 5; i++)
		{
			gotoxy(coord.x, coord.y + i); cout << " ";
			gotoxy(coord.x + 1, coord.y + i); cout << " ";
			gotoxy(coord.x + 2, coord.y + i); cout << " ";
			gotoxy(coord.x + 3, coord.y + i); cout << " ";
			gotoxy(coord.x + 4, coord.y + i); cout << " ";
		}
	}
	else if (dir == LEFT)
	{
		for (int i = 0; i <= 5; i++)
		{
			gotoxy(coord.x, coord.y + i); cout << " ";
			gotoxy(coord.x + 1, coord.y + i); cout << " ";
			gotoxy(coord.x + 2, coord.y + i); cout << " ";
			gotoxy(coord.x + 3, coord.y + i); cout << " ";
			gotoxy(coord.x + 4, coord.y + i); cout << " ";
			gotoxy(coord.x + 5, coord.y + i); cout << " ";
		}
	}
	else if (dir == RIGHT)
	{
		for (int i = 0; i <= 5; i++)
		{
			gotoxy(coord.x - 1, coord.y + i); cout << " ";
			gotoxy(coord.x, coord.y + i); cout << " ";
			gotoxy(coord.x + 1, coord.y + i); cout << " ";
			gotoxy(coord.x + 2, coord.y + i); cout << " ";
			gotoxy(coord.x + 3, coord.y + i); cout << " ";
			gotoxy(coord.x + 4, coord.y + i); cout << " ";
		}
	}
	
}

//update and render
void Player::updateMovement(const Coords& coo, const DIRECTION& newDir)
{
	playerUpdated = true;
	coord = coo;
	dir = newDir;
}


void Player::render()
{
	if (playerUpdated)
	{
		clearPrevPlayerDrawing();

		switch (dir)
		{
		case UP:
			drawUp();
			break;
		case DOWN:
			drawDown();
			break;
		case LEFT:
			drawLeft();
			break;
		case RIGHT:
			drawRight();
			break;
		}

		playerUpdated = false;
	}
	
}

//getters:

Coords Player::getCoords() { return coord; }

//setters:
void Player::setPlayerUpdated(const bool& value) { playerUpdated = value; }
