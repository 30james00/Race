#pragma once
#include "map.h"

class car
{
private:
	sf::Vector2f pos, mov;
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

