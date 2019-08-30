#include "moveing.h"

moving::moving()
{
	xCor = 0;
	yCor = 0;
}

moving::moving(float a, float b)
{
	xCor = a;
	yCor = b;
}

void moving::change(float x, float y)
{
	xCor += x;
	yCor += y;
}

float moving::x()
{
	return xCor;
}

float moving::y()
{
	return yCor;
}
