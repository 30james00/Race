#include "gameplay.h"
#include <iostream>

gameplay::gameplay()
{
	car1 = new car;
	track = new map;
	window = new sf::RenderWindow(sf::VideoMode(512,512), "Race");
	window->setVerticalSyncEnabled(true);
	
	while (window->isOpen())
	{
		window->clear(sf::Color(255, 255, 255, 255));
		window->draw(car1->drawCar());
		window->display();
		sf::Event event;
		while (window->pollEvent(event))
		{
			switch (event.type)
			{
				case sf::Event::Closed:
					window->close();
					break;
				case sf::Event::JoystickButtonPressed:
					std::cout << "id: " << event.joystickButton.joystickId<<std::endl;
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

void gameplay::check()
{
	window->setTitle("SFML window");
}
