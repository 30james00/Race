#include "car.h"

car::car()
{
	pos = new position();
	mov = new moveing();
	prepareGraphics();
}

car::car(int a, int b, int c, int d)
{
	pos = new position(a, b);
	mov = new moveing(c, d);
	prepareGraphics();
}

void car::changePosition(int x, int y)
{
	pos->change(x, y);
	circleShape.setPosition(sf::Vector2f(pos->x(),pos->y()));
}

void car::prepareGraphics()
{
	circleShape = sf::CircleShape(10);
	circleShape.setFillColor(sf::Color(0, 0, 0));
	circleShape.setPosition(pos->x(), pos->y());
}

sf::CircleShape car::getShape()
{
	return circleShape;
}

