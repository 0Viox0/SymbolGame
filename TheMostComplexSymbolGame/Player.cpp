#include "Player.h"

//Constructors
Player::Player()
{
	coord.x = 10;
	coord.y = 5;

	dir = DOWN;
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

//update and render
void Player::update(Coords& coo, DIRECTION& dir)
{
	coord = coo;
}


void Player::render()
{
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
}