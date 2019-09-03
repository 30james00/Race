#include "score.h"

score::score()
{
	clock.restart();
	//set values at 0
	scoreValue = 0;
	timeValue = clock.getElapsedTime().asSeconds();
	//load font
	if (!font.loadFromFile("RobotoMono.ttf")) std::cout << "Font load error";
	//create text
	changeText();
	text.setFont(font);
	text.setCharacterSize(24);
	text.setFillColor(sf::Color::Black);
}

void score::timeFlies() {
	timeValue = clock.getElapsedTime().asSeconds();
	changeText();
}
void score::scoreUp()
{
	scoreValue++;
	changeText();
}


sf::Text score::getText()
{
	return text;
}

void score::changeText() {
	textString = "Time: " + std::to_string(timeValue);
	textString += " Score: ";
	textString += std::to_string(scoreValue);
	text.setString(textString);
}
