#pragma once
#include "map.h"

class car
{
private:
	sf::Vector2f pos, lastPos, mov;
	//graphics
	sf::CircleShape circleShape;

public:
	//constructors
	car();
	car(float, float, float, float);
	//position access
	sf::Vector2f getPos();
	sf::Vector2f getLastPos();
	//movement
	void changeMovement(float, float);
	void move();
	//graphics
	void prepareGraphics();
	sf::CircleShape getShape();
};

