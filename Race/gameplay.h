#pragma once
#include"car.h"
#include"map.h"

class gameplay
{
private:
	car *car1;
	map *track;
	sf::RenderWindow *window;

public:
	gameplay();
	void check();
};

