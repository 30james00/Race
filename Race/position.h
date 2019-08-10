#pragma once
#include<cmath>

class position
{
private:
	int xCor, yCor;
public:
	position();
	position(int, int);
	void change(int, int);
	int x();
	int y();
};

