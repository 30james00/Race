#pragma once
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <time.h>
#include <stdlib.h>
#include <iostream>

class gate
{
private:
	float x1, y1, x2, y2;
	std::vector<sf::Vertex> line;
public:
	gate(float);
	std::vector<sf::Vertex> getShape();
};
