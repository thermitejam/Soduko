#pragma once
#include <SFML/Graphics.hpp>
#include "Grid.h"
class Game : public sf::Drawable
{
private:
	Grid m_playingGrid;
	sf::Font m_Font;
	sf::Texture m_sodukoGrid;
	sf::Sprite m_background;
protected:
public:
	Game(); 
	sf::Font getFont();
	void update();
	void draw(sf::RenderTarget &target, sf::RenderStates states) const;



 };