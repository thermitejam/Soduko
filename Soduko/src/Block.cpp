#include "Block.h"

Block::Block()
{
	
	

}



Block::~Block()
{


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
			//std::cout << i + 1 << std::endl;
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

void Block::setCell(int x, int y, Cell * cell)
{
	m_CellArray[x][y] = cell;
}

void Block::update()
{

}


