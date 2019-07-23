#include "car.h"

car::car()
{
	pos = new position(0, 0);
	mov = new moveing(0, 0);
}

car::car(int a, int b, int c, int d)
{
	pos = new position(a, b);
	mov = new moveing(c, d);
}

void car::changeSpeed(int)
{
}

void car::changeDirection(int)
{
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
