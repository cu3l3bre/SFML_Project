#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include "windows.h"


int main()
{
	sf::RenderWindow window(sf::VideoMode(1000, 1000), "SFML works!");
	sf::CircleShape shape(10.f);
	shape.setFillColor(sf::Color::Red);
	shape.setPosition(0, 0);
	int x = 0;
	int y = 0;
	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}
		shape.setPosition(x, y);
		window.clear();
		window.draw(shape);
		window.display();
		x += 1;
		y += 1;
		Sleep(10);
	}

	return 0;
}
