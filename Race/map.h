#pragma once
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <time.h>
#include <stdlib.h>
class gate
{
private:
	int x1, y1, x2, y2;
public:
	gate(int);
};

class map
{
private:
	int size_x, size_y;
	gate *gat;
public:
	map();
	~map();
};

