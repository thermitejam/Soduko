#include "Grid.h"
#include <iostream>

Grid::Grid()
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			m_blocks[i][j] = new Block(sf::Vector2f(i * 300 + 50,j * 300 + 50));
		}
	}
}

void Grid::test()
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			m_blocks[i][j]->getCell(i,j)->SetNumber(5);
		}
	}
	
	m_blocks[0][0]->checkBlockFull();
}

void Grid::setFonts(sf::Font *fontSet)
{

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			m_blocks[i][j]->setFonts(fontSet);
		}
	}

}

void Grid::update()
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			m_blocks[i][j]->update();
		}
	}
}

void Grid::draw(sf::RenderTarget & target, sf::RenderStates states) const
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			target.draw(*m_blocks[i][j]);
		}
	}
}
