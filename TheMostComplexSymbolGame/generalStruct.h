#pragma once
#include <Windows.h>
#include <iostream>

using namespace std;

struct Coords	//generall coordinates
{
	int x, y;

	Coords() : x(0), y(0) { }
	Coords(int xi, int yi) : x(xi), y(yi) { }

	Coords operator=(const Coords&);
};

bool operator==(const Coords&, const Coords&);

bool toTheLeft(const Coords& what, const Coords& relativeToWhat);
bool toTheRight(const Coords& what, const Coords& relativeToWhat);
bool isBelow(const Coords& what, const Coords& relativeToWhat);
bool isUp(const Coords& what, const Coords& relativeToWhat);

//goto func
void gotoxy(int, int);