#pragma once
#include <SFML/Graphics/Font.hpp>
#include <SFML/Graphics/Text.hpp>
#include <iostream>
#include <string>

class score
{
private:
	sf::Font font;
	sf::Text text;
	std::string textString;
	int scoreValue;
	int timeValue;
public:
	score();
	void timeFlies();
	void changeText();
	sf::Text getText();
};

