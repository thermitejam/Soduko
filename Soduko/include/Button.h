#pragma once
#include "NumberSquare.h"

class Button : public NumberSquare
{
private:
	sf::RectangleShape m_BoundingBox;

protected:


public:
	Button();

	void setPosition(sf::Vector2f pos);
	void draw(sf::RenderTarget &target, sf::RenderStates states) const;

};