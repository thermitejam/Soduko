#include "Row.h"

Row::Row()
{
	for (int i = 0; i < 9; i++)
	{
		m_CellArray[i] = nullptr;
	}
}

Row::~Row()
{
	for (int i = 0; i < 9; i++)
	{
		delete m_CellArray[i];
	}
}

void Row::setCell(int number, Cell *cell) 
{
	m_CellArray[number] = cell;

}

std::vector<int> Row::numbersPresentList()
{
	std::vector<int> numbers = { 0,0,0,0,0,0,0,0,0 };
	for (int n = 1; n < 10; n++)
	{
		for (int i = 0; i < 9; i++)
		{
			if (m_CellArray[i]->GetNumber() == n) // checks if the number is in the array for the block
			{
					numbers[n - 1]++;//adds it to an array counter for each number
			}			
		}
	}
	return numbers;
}

std::vector<int> Row::checkRowFull()
{
	std::vector<int> missingNumbers;
	std::vector<int> numbersPresent = numbersPresentList();
	
	for (int i = 0; i < 9; i++)
	{
		if (numbersPresent[i] == 0)
		{
			missingNumbers.push_back(i + 1);
		}
	}
	return std::vector<int>();
}


