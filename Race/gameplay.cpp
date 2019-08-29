#include "gameplay.h"
#include <iostream>

gameplay::gameplay()
{
	car1 = new car;
	track = new map;
	counter = new score;
	window = new sf::RenderWindow(sf::VideoMode(512,512), "Race");
	window->setVerticalSyncEnabled(true);
}

void gameplay::refresh()
{
	int a = 0, b = 0;
	while (window->isOpen())
	{
		//drawing assets
		window->clear(sf::Color(255, 255, 255, 255));
		window->draw(car1->getShape());
		window->draw(counter->getText());
		window->draw(track->getLineShape());
		window->draw(track->getLineShape());
		window->draw(track->getLineShape());
		window->display();
		//changing assets properities for next frame
		if(a<500) car1->changePosition(a++, b++);
		counter->timeFlies();
		//handling events
		sf::Event event;
		while (window->pollEvent(event))
		{
			switch (event.type)
			{
			case sf::Event::Closed:
				window->close();
				break;
			case sf::Event::JoystickButtonPressed:
				std::cout << "id: " << event.joystickButton.joystickId << std::endl;
				break;
			case sf::Event::JoystickConnected:
				std::cout << "id: " << event.joystickConnect.joystickId << std::endl;
				break;
			default:
				break;
			}
		}
	}
}