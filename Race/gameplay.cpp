#include "gameplay.h"
#include <iostream>

gameplay::gameplay()
{
	car1 = new car();
	track = new map();
	counter = new score();
	aud = new audio();
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
		passHandling();
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

void gameplay::passHandling()
{
	if (segmentsIntersect(car1->getPos(), car1->getLastPos(), track->getCurGate().getP1(), track->getCurGate().getP2()))
	{
		counter->scoreUp();
		track->nextGate();
		aud->playPass();
	}
}

bool gameplay::segmentsIntersect(sf::Vector2f p1, sf::Vector2f p2, sf::Vector2f p3, sf::Vector2f p4)
{
	float d1 = direction(p3, p4, p1);
	float d2 = direction(p3, p4, p2);
	float d3 = direction(p1, p2, p3);
	float d4 = direction(p1, p2, p4);
	if (((d1 > 0 && d2 < 0) || (d1 < 0 && d2>0)) && ((d3 > 0 && d4 < 0) || (d3 < 0 && d4>0)))
		return true;
	else if (d1 == 0 && onSegment(p3, p4, p1)) return true;
	else if (d2 == 0 && onSegment(p3, p4, p2)) return true;
	else if (d3 == 0 && onSegment(p1, p2, p3)) return true;
	else if (d4 == 0 && onSegment(p1, p2, p4)) return true;
	else return false;
}

float gameplay::direction(sf::Vector2f a, sf::Vector2f p1, sf::Vector2f p2)
{
	p1 = p1 - a;
	p2 = p2 - a;
	return (p2.x * p1.y) - (p1.x * p2.y);
}

bool gameplay::onSegment(sf::Vector2f i, sf::Vector2f j, sf::Vector2f k)
{
	if ((std::min(i.x, j.x) <= k.x && std::max(i.x, j.x) >= k.x) && (std::min(i.y, j.y) <= k.y && std::max(i.y, j.y) >= k.y))
		return true;
	else return false;
}
