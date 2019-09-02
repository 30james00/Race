#include "gate.h"

gate::gate(float a) : p1(a,a), p2(a + 25, a + 25)
{
	makeVertexArray();
}

gate::gate(float a, float b, float c, float d) : p1(a,b), p2(c,d)
{
	makeVertexArray();
}

void gate::makeVertexArray()
{
	line = sf::VertexArray(sf::Lines, 2);
	line[0].position = p1;
	line[1].position = p2;
	line[0].color = sf::Color::Black;
	line[1].color = sf::Color::Black;
}

sf::VertexArray gate::getShape()
{
	return line;
}
