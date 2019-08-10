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
	double tempA = static_cast <double>(a);
	double tempCos = (cos(a/5))*30;
	double tempSin = (sin(a/5)) * 10;
	xCor = 250 + static_cast <int> (tempSin);
	yCor = 250 + static_cast <int> (tempCos);
}

int position::x()
{
	return xCor;
}

int position::y()
{
	return yCor;
}
