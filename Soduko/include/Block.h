#pragma once
#include <SFML/Graphics.hpp>
#include "Cell.h"
#include <vector>
#include <iostream>

class Block
{

private:

	Cell * m_CellArray[3][3];
	sf::Vector2f m_position;

protected:

public:

	Block();
	~Block();


	std::vector<int> numbersPresentList();

	std::vector<int> checkBlockFull();

	Cell *getCell(int x, int y);

	void setCell(int x, int y,Cell *cell);

	void update();

};
