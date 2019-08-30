#include "gameplay.h"
#include <iostream>

gameplay::gameplay()
{
	car1 = new car;
	track = new map;
	counter = new score;
	window = new sf::RenderWindow(sf::VideoMode(512, 512), "Race");
	window->setVerticalSyncEnabled(true);
}

void gameplay::refresh()
{
	while (window->isOpen())
	{
		//drawing assets
		window->clear(sf::Color(255, 255, 255, 255));
		window->draw(car1->getShape());
		window->draw(counter->getText());
		drawGates();
		window->display();
		//changing assets properities for next frame
		car1->move();
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
			case sf::Event::KeyPressed:
				switch (event.key.code)
				{
				case sf::Keyboard::Left:
					car1->changeMovement(-1, 0);
					break;
				case sf::Keyboard::Right:
					car1->changeMovement(1, 0);
					break;
				case sf::Keyboard::Up:
					 car1->changeMovement(0, -1);
					break;
				case sf::Keyboard::Down:
					car1->changeMovement(0, 1);
					break;
				default:
					break;
				}
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

void gameplay::drawGates()
{
	std::vector<gate> toDraw = track->getLineShape();
	for (int i = 0; i < toDraw.size(); i++)
	{
		window->draw(toDraw[i].getShape());
	}
}
