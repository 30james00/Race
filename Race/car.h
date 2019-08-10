#pragma once
#include "map.h"
#include "position.h"
#include "moveing.h"

class car
{
private:
	position *pos;
	moveing *mov;
	//graphics
	sf::Texture carTexture;
	sf::Sprite carSprite;

public:
	//constructors
	car();
	car(int, int, int, int);
	//movement
	void changePosition(int, int);
	//graphics
	void makeCarSprite();
	sf::Sprite drawCar();
};

