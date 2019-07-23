#pragma once
#include <SFML/Graphics.hpp>
#include"car.h"
#include"map.h"
class gameplay
{
private:
	car *car1;
	map *track;
	sf::Window *window;
public:
	gameplay();
	void check();
};

