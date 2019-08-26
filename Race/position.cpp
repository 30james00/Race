#include "position.h"

position::position()
{
	xCor = 0;
	yCor = 0;
}

position::position(int a, int b)
{
	xCor = a;
	yCor = b;
}

void position::change(int a, int b)
{
	xCor = a;
	yCor = b;
}

int position::x()
{
	return xCor;
}

int position::y()
{
	return yCor;
}
