#include "Button.h"

Button::Button()
{
	m_BoundingBox.setOrigin(46, 50);
	m_BoundingBox.setSize(sf::Vector2f(100, 100));
	m_BoundingBox.setOutlineColor(sf::Color::Red);
	m_BoundingBox.setFillColor(sf::Color(0, 0, 0, 0));
	m_BoundingBox.setOutlineThickness(2);
	m_BoundingBox.setPosition(0, 0);

	m_position = sf::Vector2f(0, 0);
	m_numberText.setFillColor(sf::Color(103, 36, 239, 255));
	m_numberText.setCharacterSize(90);
}

void Button::setPosition(sf::Vector2f pos)
{
	m_BoundingBox.setPosition(pos);
	m_position = pos;
	updateNumber();
}

void Button::draw(sf::RenderTarget & target, sf::RenderStates states) const
{
	target.draw(m_numberText);
	target.draw(m_BoundingBox);//debug
}
