#include "gate.h"

gate::gate(float a) : x1(a), y1(a), x2(a + 25), y2(a + 25)
{
	line.push_back(sf::Vertex(sf::Vector2f(x1, y1),sf::Color(0,0,0)));
	line.push_back(sf::Vertex(sf::Vector2f(x2, y2),sf::Color(0,0,0)));
}

std::vector<sf::Vertex> gate::getShape()
{
	return line;
}
