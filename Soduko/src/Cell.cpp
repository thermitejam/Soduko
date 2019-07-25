#include "Cell.h"

Cell::Cell()
{
	m_number = 0;
	m_hasNumber = false;
	
	for (int i = 0; i < 9; i++)
	{
		m_possibleNumbers[i] = true;
	}
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
	for (int i = 0; i < 9; i++)
	{
		m_possibleNumbers[i] = true;
	}
	m_position = sf::Vector2f(0, 0);
	m_numberText.setFillColor(sf::Color(0, 0, 0, 255));
	m_numberText.setCharacterSize(80);

	m_numberText.setOrigin(sf::Vector2f(0, 0));
	m_numberText.setPosition(position);
}

void Cell::setFont(sf::Font * theFont)
{
	m_myFont = theFont;
	m_numberText.setFont(*m_myFont);
	
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
}

bool Cell::getPosible(int oneToNine)
{
	return m_possibleNumbers[oneToNine-1];
}

void Cell::setPosible(int oneToNine, bool set)
{
	m_possibleNumbers[oneToNine - 1] = set;
}

void Cell::setPosiiton(sf::Vector2f pos)
{
	m_position = pos;
}

sf::Vector2f Cell::getPosition()
{
	return m_position;
}

void Cell::update()
{
	m_numberText.setPosition(m_position);
	m_textRect = m_numberText.getLocalBounds();
	m_numberText.setOrigin(m_textRect.left + m_textRect.width / 2.0f, m_textRect.top + m_textRect.height / 2.0f);
}

void Cell::draw(sf::RenderTarget & target, sf::RenderStates states) const
{
	if (m_hasNumber) {
		target.draw(m_numberText);
	}
}
