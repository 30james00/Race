#pragma once
#include"car.h"
#include"map.h"
class gameplay
{
private:
	car *car1;
	map *track;
	sf::RenderWindow *window;
	sf::Texture tekstura;
	sf::Sprite dot;
public:
	gameplay();
	void check();
};

