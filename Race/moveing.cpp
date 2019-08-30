#include "moveing.h"
#include<iostream>

moveing::moveing()
{
	xCor = 0;
	yCor = 0;
}

moveing::moveing(float a, float b)
{
	xCor = a;
	yCor = b;
}

void moveing::change(float x, float y)
{
	xCor += x;
	yCor += y;
	std::cout << xCor << " " << yCor;
}

float moveing::x()
{
	return xCor;
}

float moveing::y()
{
	return yCor;
}
