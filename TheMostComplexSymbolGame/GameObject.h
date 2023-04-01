#pragma once

class GameObject //abstract class for the rendering and updating
{
public:
	virtual void update();
	virtual void render();
};