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
	sf::CircleShape circleShape;

public:
	//constructors
	car();
	car(float, float, float, float);
	//movement
	void changeMovement(float, float);
	void move();
	//graphics
	void prepareGraphics();
	sf::CircleShape getShape();
};

