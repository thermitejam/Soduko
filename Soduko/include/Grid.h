#pragma once
#include "Cell.h"
#include "Block.h"
#include "Row.h"
#include <SFML/Graphics.hpp>

class Grid : public sf::Drawable 
{
private:
	Cell m_Grid[9][9];
	Block m_blocks[3][3]; // the 9 large squares on the soduko grid
	Row m_horisontal[9]; // each line in the grid horrisontally
	Row m_verticle[9]; // each line in the grid vertically

protected:

public:
	Grid();
	void test(); // a function for testing
	void setFonts(sf::Font *fontSet); // sets the front of the cells
	void update(); // the update function
	void draw(sf::RenderTarget &target, sf::RenderStates states) const;
};