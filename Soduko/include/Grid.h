#pragma once
#include "Cell.h"
#include "Block.h"
#include "Row.h"
#include <SFML/Graphics.hpp>

class Grid : public sf::Drawable 
{
private:
	Block *m_blocks[3][3];
	Row m_horisontal[9];
	Row m_verticle[9];

protected:

public:
	Grid();
	void test();
	void setFonts(sf::Font *fontSet);
	void update();
	void draw(sf::RenderTarget &target, sf::RenderStates states) const;
};