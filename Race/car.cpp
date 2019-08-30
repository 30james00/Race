#include "car.h"

car::car()
{
	pos = new position();
	mov = new moveing();
	prepareGraphics();
}

car::car(float a, float b, float c, float d)
{
	pos = new position(a, b);
	mov = new moveing(c, d);
	prepareGraphics();
}

void car::changeMovement(float x, float y)
{
	mov->change(x, y);
}

void car::move()
{
	pos->change(mov->x(), mov->y());
	circleShape.setPosition(pos->x(), pos->y());
}

void car::prepareGraphics()
{
	circleShape = sf::CircleShape(2);
	circleShape.setFillColor(sf::Color(0, 0, 0));
	circleShape.setPosition(pos->x(), pos->y());
}

sf::CircleShape car::getShape()
{
	return circleShape;
}

