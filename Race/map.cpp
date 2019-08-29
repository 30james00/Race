#include "map.h"

map::map()
{
	size_x = 512;
	size_y = 512;
	curGate = 0;
	srand(time(NULL));
	gates.push_back(gate(rand() % 512));
	gates.push_back(gate(rand() % 512));
	gates.push_back(gate(rand() % 512));
}

sf::VertexArray map::getLineShape()
{
	curGate++;
	curGate %= static_cast<int>(gates.size());
	return gates[curGate].getShape();
}

