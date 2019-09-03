#pragma once
#include"car.h"
#include"map.h"
#include"score.h"
#include"audio.h"

class gameplay
{
private:
	car* car1;
	map* track;
	score* counter;
	audio* aud;
	sf::RenderWindow *window;

public:
	gameplay();
	void refresh();
	void drawGates();
	void passHandling();
	//check if 2 lines cross
	bool segmentsIntersect(sf::Vector2f, sf::Vector2f, sf::Vector2f, sf::Vector2f);
	//check vector product
	float direction(sf::Vector2f, sf::Vector2f, sf::Vector2f);
	//check if point is part of line
	bool onSegment(sf::Vector2f, sf::Vector2f, sf::Vector2f);
};

