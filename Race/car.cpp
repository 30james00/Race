#include "car.h"

car::car()
{
	pos = new position(0, 0);
	mov = new moveing(0, 0);
	makeCarSprite();
}

car::car(int a, int b, int c, int d)
{
	pos = new position(a, b);
	mov = new moveing(c, d);
	makeCarSprite();
}

void car::makeCarSprite()
{
	if (!carTexture.loadFromFile("dot.png"))
	{
		std::cout << "Dot.png load error";
	}
	carSprite.setTexture(carTexture);
}

void car::changeSpeed(int)
{
}

void car::changeDirection(int)
{
}

sf::Sprite car::drawCar()
{
	return carSprite;
}

position::position(int a, int b)
{
	x = a;
	y = b;
}

moveing::moveing(int a, int b)
{
	speed = a;
	angle = b;
}
