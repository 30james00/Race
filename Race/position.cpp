#include "position.h"


position::position()
{
	xCor = 0;
	yCor = 0;
}

position::position(float a, float b)
{
	xCor = a;
	yCor = b;
}

void position::change(float a, float b)
{
	xCor += a;
	yCor += b;
}

float position::x()
{
	return xCor;
}

float position::y()
{
	return yCor;
}
