#pragma once
class position
{
private:
	int x, y;
public:
	position(int,int);
};

class moveing
{
private:
	int speed, angle;
public:
	moveing(int, int);
};

class car
{
private:
	position *pos;
	moveing *mov;
public:
	car();
	car(int, int, int, int);
	void changeSpeed(int);
	void changeDirection(int);
};

