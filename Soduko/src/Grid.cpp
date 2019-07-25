#include "Grid.h"
#include <iostream>

Grid::Grid()
{ 
	
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			m_Grid[i][j].setPosiiton(sf::Vector2f(i * 100 + 50, j * 100 + 50));
			m_Grid[i][j].SetNumber(i + 1);
			
			
		}
	}

	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			m_horisontal[i].setCell(j,&m_Grid[j][i]);
			m_verticle[i].setCell(j, &m_Grid[i][j]);


			int xCell , yCell; // k and l are the numbers inside the cell block
			int xBlock, yBlock; // x and y are the number of the block itself

			if (i > 5)
			{
				xCell = i - 6;
				xBlock = 2;
			}
			else if (i > 2)
			{
				xCell = i - 3;
				xBlock = 1;
			}
			else {
				xCell = i;
				xBlock = 0;
			}
			//--------------------------------------------------------------------------
			if (j > 5)
			{
				yCell = j - 6;
				yBlock = 2;
			}
			else if (j > 2)
			{
				yCell = j - 3;
				yBlock = 1;
			}
			else {
				yCell = j;
				yBlock = 0;
			}

			m_blocks[xBlock][yBlock].setCell(xCell, yCell, &m_Grid[i][j]);
			
		}
	}

	


}

void Grid::test() 
{
	
	std::vector<int> bum = m_blocks[1][2].checkBlockFull();

	for (int me = 0; me < bum.size(); me++)
	{
		std::cout << bum[me] << std::endl;
	}
}

void Grid::setFonts(sf::Font *fontSet) 
{

	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			m_Grid[i][j].setFont(fontSet);

		}
	}

}

void Grid::update()
{
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			m_Grid[i][j].update();

		}
	}
}

void Grid::draw(sf::RenderTarget & target, sf::RenderStates states) const
{
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			target.draw(m_Grid[i][j]);
		}
	}
}
