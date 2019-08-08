#pragma once
#include "map.h"

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
	sf::Texture carTexture;
	sf::Sprite carSprite;

public:
	car();
	car(int, int, int, int);
	void makeCarSprite();
	void changeSpeed(int);
	void changeDirection(int);
	sf::Sprite drawCar();
};

