#pragma once
#include"car.h"
#include"map.h"
#include"score.h"

class gameplay
{
private:
	car *car1;
	map *track;
	score* counter;
	sf::RenderWindow *window;

public:
	gameplay();
	void refresh();
	void drawGates();
};

