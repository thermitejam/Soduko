#include "NumberSquare.h"

void NumberSquare::setFont(sf::Font *theFont)
{
	m_myFont = theFont;
	m_numberText.setFont(*m_myFont);
}

void NumberSquare::setNumber(int number)
{
	if (number < 10 && number > 0)
	{
		m_number = number;
		m_numberText.setString(std::to_string(number));
	}
	else
	{
		m_number = 0;
		m_numberText.setString("0");
	}
	updateNumber();
}

int NumberSquare::getNumber()
{
	return m_number;
}

void NumberSquare::updateNumber()
{
	m_numberText.setPosition(m_position);
	m_textRect = m_numberText.getLocalBounds();
	m_numberText.setOrigin(m_textRect.left + m_textRect.width / 2.0f, m_textRect.top + m_textRect.height / 2.0f);

}
