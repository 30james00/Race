#include "map.h"

map::map()
{
	size_x = 512;
	size_y = 512;
	srand(time(NULL));
	gat = new gate(rand() % 500);
}

std::vector<sf::Vertex> map::getLineShape()
{
	return gat->getShape();
}
