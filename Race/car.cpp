#include "car.h"

car::car()
{
	pos = sf::Vector2f(0, 0);
	lastPos = sf::Vector2f(0,0);
	mov = sf::Vector2f(0, 0);
	prepareGraphics();
}

car::car(float a, float b, float c, float d)
{
	pos = sf::Vector2f(a, b);
	lastPos = sf::Vector2f(a, b);
	mov = sf::Vector2f(c, d);
	prepareGraphics();
}

sf::Vector2f car::getPos()
{
	return pos;
}

sf::Vector2f car::getLastPos()
{
	return lastPos;
}

void car::changeMovement(float x, float y)
{
	mov = sf::Vector2f(mov.x + x, mov.y + y);
}

void car::move()
{
	lastPos = pos;
	pos = sf::Vector2f(pos.x + mov.x, pos.y + mov.y);
	circleShape.setPosition(pos.x, pos.y);
}

void car::prepareGraphics()
{
	circleShape = sf::CircleShape(2);
	circleShape.setFillColor(sf::Color(0, 0, 0));
	circleShape.setPosition(pos.x, pos.y);
}

sf::CircleShape car::getShape()
{
	return circleShape;
}

