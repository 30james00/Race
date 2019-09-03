#pragma once
#include <SFML/Graphics/Font.hpp>
#include <SFML/Graphics/Text.hpp>
#include <SFML/System/Clock.hpp>
#include <iostream>
#include <string>

class score
{
private:
	sf::Font font;
	sf::Text text;
	sf::Clock clock;
	std::string textString;
	int scoreValue;
	int timeValue;
public:
	score();
	void timeFlies();
	void scoreUp();
	void changeText();
	sf::Text getText();
};

