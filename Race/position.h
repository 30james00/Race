#pragma once
#include<cmath>

class position
{
private:
	float xCor, yCor;
public:
	position();
	position(float, float);
	void change(float, float);
	float x();
	float y();
};

