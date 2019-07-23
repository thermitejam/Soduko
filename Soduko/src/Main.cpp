#include <SFML/Graphics.hpp>
#include "Game.h"
int main()
{
	sf::RenderWindow window(sf::VideoMode(900, 1000), "Soduko");
	
	Game game;
	
	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		game.update();
		window.clear();
		window.draw(game);
		window.display();
	}

	return 0;
}