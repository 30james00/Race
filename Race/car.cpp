#include "car.h"

car::car()
{
	pos = new position();
	mov = new moveing();
	makeCarSprite();
}

car::car(int a, int b, int c, int d)
{
	pos = new position(a, b);
	mov = new moveing(c, d);
	makeCarSprite();
}

void car::changePosition(int x, int y)
{
	pos->change(x, y);
	carSprite.setPosition(sf::Vector2f(pos->x(),pos->y()));
}

void car::makeCarSprite()
{
	if (!carTexture.loadFromFile("dot.png"))
	{
		std::cout << "Dot.png load error";
	}
	carSprite.setTexture(carTexture);
}

sf::Sprite car::drawCar()
{
	return carSprite;
}
