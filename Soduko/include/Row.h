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

	void setCellArray(Cell cells[9]);
	std::vector<int> checkRowFull();
	
};