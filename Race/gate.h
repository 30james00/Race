#pragma once
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <time.h>
#include <stdlib.h>
#include <iostream>

class gate
{
private:
	sf::Vector2f p1, p2;
	sf::VertexArray line;
public:
	gate(float);
	gate(float, float, float, float);
	void makeVertexArray();
	sf::VertexArray getShape();
	sf::Vector2f getP1();
	sf::Vector2f getP2();
};
