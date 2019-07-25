#pragma once
#include "Cell.h"
#include "Block.h"
#include <vector>
class Row
{
private:
	Cell *m_CellArray[9];
protected:

public:
	Row();
	~Row();

	void setCell(int number, Cell *cell);
	std::vector<int> numbersPresentList();
	std::vector<int> checkRowFull();

};