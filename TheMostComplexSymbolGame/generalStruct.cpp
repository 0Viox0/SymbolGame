#include "generalStruct.h"

//realisation of Coord

bool operator==(const Coords& c1, const Coords& c2)
{
	return ((c1.x == c2.x) && (c1.y == c2.y)) ? true : false;
}

Coords Coords::operator=(const Coords& c)
{
	x = c.x;
	y = c.y;

	return Coords(x, y);
}


bool toTheLeft(const Coords& what, const Coords& relativeToWhat)
{
	return (what.x < relativeToWhat.x) ? true : false;
}

bool toTheRight(const Coords& what, const Coords& relativeToWhat)
{
	return (what.x > relativeToWhat.x) ? true : false;
}

bool isBelow(const Coords& what, const Coords& relativeToWhat)
{
	return (what.y > relativeToWhat.y) ? true : false;
}

bool isUp(const Coords& what, const Coords& relativeToWhat)
{
	return (what.y < relativeToWhat.y) ? true : false;
}

//gotoxy func
void gotoxy(int x, int y)
{
	COORD pos = { x, y };
	HANDLE output = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorPosition(output, pos);
}