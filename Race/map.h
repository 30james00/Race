#pragma once
#include "gate.h"

class map
{
private:
	float size_x, size_y;
	gate *gat;
public:
	map();
	std::vector<sf::Vertex> getLineShape();
};

