#include "SelectionRow.h"

SelectionRow::SelectionRow()
{
	for (int i = 0; i < 9; i++)
	{
		m_buttons[i].setNumber(i+1);
		m_buttons[i].setPosition(sf::Vector2f(i*100+50,950));
		
	}
	
}

void SelectionRow::draw(sf::RenderTarget & target, sf::RenderStates states) const
{
	for (int i = 0; i < 9; i++)
	{
		target.draw(m_buttons[i]);
		
	}
}

void SelectionRow::setfonts(sf::Font *font)
{
	for (int i = 0; i < 9; i++)
	{
		m_buttons[i].setFont(font);
		m_buttons[i].updateNumber();
	}
}
