#include "map.h"

map::map()
{
	size_x = 512;
	size_y = 512;
	srand(time(NULL));
	gates.push_back(gate(rand() % 512));
	gates.push_back(gate(rand() % 512));
	gates.push_back(gate(rand() % 512));
}

std::vector<gate> map::getLineShape()
{
	return gates;
}

