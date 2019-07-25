#include "Cell.h"

Cell::Cell()
{
	m_number = 0;
	m_hasNumber = false;
	m_position = sf::Vector2f(0, 0);
	m_numberText.setFillColor(sf::Color(0, 0, 0, 255));
	m_numberText.setCharacterSize(90);
	m_numberText.setPosition(0,0);
}

Cell::Cell(sf::Vector2f position)
{
	m_number = 0;
	m_hasNumber = false;
	m_position = position;
	m_position = sf::Vector2f(0, 0);
	m_numberText.setFillColor(sf::Color(0, 0, 0, 255));
	m_numberText.setCharacterSize(80);

	m_numberText.setOrigin(sf::Vector2f(0, 0));
	m_numberText.setPosition(position);
}



int Cell::GetNumber()
{
	return m_number;
}

void Cell::SetNumber(int number)
{
	if (number < 10 && number > 0)
	{
		m_hasNumber = true;
		m_number = number;
		m_numberText.setString(std::to_string(number));
	}
	else 
	{
		m_number = 0;
		m_numberText.setString("0");
		m_hasNumber = false;
	}
	updateNumber();
}

void Cell::setPosition(sf::Vector2f pos)
{
	m_position = pos;
}

sf::Vector2f Cell::getPosition()
{
	return m_position;
}



void Cell::draw(sf::RenderTarget & target, sf::RenderStates states) const
{
	if (m_hasNumber) {
		target.draw(m_numberText);
	}
}
