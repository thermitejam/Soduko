#include "Block.h"

Block::Block()
{
	
	for (int i = 0; i < 3; i++) 
	{
		for (int j = 0; j < 3; j++)
		{
			m_CellArray[i][j] = new Cell; // creates a new cell for each pointer
		}
	}

}

Block::Block(sf::Vector2f(position))
{
	
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			m_CellArray[i][j] = new Cell (sf::Vector2f(i * 100  + position.x,j * 100 + position.y)); // creates a new cell for each pointer
		}
	}
}

Block::~Block()
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			delete m_CellArray[i][j]; // deletes all the pointers to the cells
		}
	}

}

void Block::setFonts(sf::Font *fontSet)
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			m_CellArray[i][j]->setFont(fontSet);
		}
	}
}

std::vector<int> Block::numbersPresentList()
{
	std::vector<int> numbers = {0,0,0,0,0,0,0,0,0};
	for (int n = 1; n < 10; n++)
	{
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				if (m_CellArray[i][j]->GetNumber() == n) // checks if the number is in the array for the block
				{
					numbers[n - 1]++;//adds it to an array counter for each number
				}
			}
		}
	}
	return numbers;
}

std::vector<int> Block::checkBlockFull()
{
	std::vector<int> missingNumbers;
	std::vector<int> numbersPresent = numbersPresentList();

	for (int i = 0; i < 9; i++)
	{
		if (numbersPresent[i] == 0)
		{
			missingNumbers.push_back(i + 1); // adds the missing number to the back of the missing numbers return vector
			//
			std::cout << i + 1 << std::endl;
			//
		}
	}

	return missingNumbers;
}

Cell *Block::getCell(int x, int y)
{
	if (x > -1 && x < 3 && y > -1 && y < 3)
	{
		return m_CellArray[x][y];
	}
	return m_CellArray[0][0]; // THIS NEEDS CHANGING
}

void Block::update()
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			m_CellArray[i][j]->update();
		}
	}
}

void Block::draw(sf::RenderTarget & target, sf::RenderStates states) const
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			target.draw(*m_CellArray[i][j]);
		}
	}

}
