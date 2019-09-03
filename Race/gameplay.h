#pragma once
#include"car.h"
#include"map.h"
#include"score.h"

class gameplay
{
private:
	car *car1;
	map *track;
	score* counter;
	sf::RenderWindow *window;

public:
	gameplay();
	void refresh();
	void drawGates();
	//check if 2 lines cross
	bool segmentsIntersect(sf::Vector2f, sf::Vector2f, sf::Vector2f, sf::Vector2f);
	//check vector product
	float direction(sf::Vector2f, sf::Vector2f, sf::Vector2f);
	//check if point is part of line
	bool onSegment(sf::Vector2f, sf::Vector2f, sf::Vector2f);
};

