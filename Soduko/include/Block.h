#pragma once
#include <SFML/Graphics.hpp>
#include "Cell.h"
#include <vector>
#include <iostream>

class Block : public sf::Drawable
{

private:

	Cell * m_CellArray[3][3];
	sf::Vector2f m_position;

protected:

public:

	Block();
	Block(sf::Vector2f(position));
	~Block();

	void setFonts(sf::Font *fontSet);

	std::vector<int> numbersPresentList();

	std::vector<int> checkBlockFull();

	Cell *getCell(int x, int y);

	void update();
	void draw(sf::RenderTarget &target, sf::RenderStates states) const;

};
