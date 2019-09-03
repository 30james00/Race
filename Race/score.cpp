#include "score.h"

score::score()
{
	//set values at 0
	scoreValue = 0;
	timeValue = 0;
	//load font
	if (!font.loadFromFile("RobotoMono.ttf")) std::cout << "Font load error";
	//create text
	changeText();
	text.setFont(font);
	text.setCharacterSize(24);
	text.setFillColor(sf::Color::Black);
}

void score::timeFlies() {
	timeValue++;
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
