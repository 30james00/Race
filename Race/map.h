#pragma once
#include "gate.h"

class map
{
private:
	float size_x, size_y;
	int curGate;
	std::vector<gate> gates;
public:
	map();
	sf::VertexArray getLineShape();
};

