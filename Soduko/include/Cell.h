#pragma once
#include <SFML/Graphics.hpp>
#include "NumberSquare.h"
class Cell : public NumberSquare
{

private:

	bool m_hasNumber;


protected:

public:
	Cell();
	Cell(sf::Vector2f position);
	 
	int GetNumber();
	void SetNumber(int number);

	void setPosition(sf::Vector2f pos);
	sf::Vector2f getPosition();

	void draw(sf::RenderTarget &target, sf::RenderStates states) const;

};
