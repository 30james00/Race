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
	sf::VertexArray line;
public:
	gate(float);
	gate(float, float, float, float);
	void makeVertexArray();
	sf::VertexArray getShape();
};
