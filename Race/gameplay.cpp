#include "gameplay.h"

gameplay::gameplay()
{
	car1 = new car;
	track = new map;
	window = new sf::Window(sf::VideoMode(512,512), "Race");
	window->setVerticalSyncEnabled(true);
	while (window->isOpen())
	{
		sf::Event event;
		while (window->pollEvent(event))
		{
			if (event.type == sf::Event::Closed) window->close();
		}
	}
}

void gameplay::check()
{
	window->setTitle("SFML window");
}
