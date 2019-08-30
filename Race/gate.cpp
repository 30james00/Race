#include "gate.h"

gate::gate(float a) : x1(a), y1(a), x2(a + 25), y2(a + 25)
{
	makeVertexArray();
}

gate::gate(float a, float b, float c, float d) : x1(a), y1(b), x2(c), y2(d)
{
	makeVertexArray();
}

void gate::makeVertexArray()
{
	line = sf::VertexArray(sf::Lines, 2);
	line[0].position = sf::Vector2f(x1, y1);
	line[1].position = sf::Vector2f(x2, y2);
	line[0].color = sf::Color::Black;
	line[1].color = sf::Color::Black;
}

sf::VertexArray gate::getShape()
{
	return line;
}
