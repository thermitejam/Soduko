#pragma once
#include "Cell.h"
#include "Block.h"
#include <vector>
class Row
{
private:
	Cell *m_CellArray[9];
	bool m_Verticle;
protected:

public:
	Row();
	~Row();

	void setCell(int number, Cell *cell);
	std::vector<int> numbersPresentList();
	std::vector<int> checkRowFull();

};