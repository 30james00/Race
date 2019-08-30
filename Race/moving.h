#pragma once

class moving
{
private:
	float xCor, yCor;
public:
	moving();
	moving(float, float);
	void change(float, float);
	float x();
	float y();
};
