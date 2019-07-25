#pragma once
#include <SFML/Graphics.hpp>

class NumberSquare :public sf::Drawable 
{
private:
	
protected:
	int m_number;
	sf::Text m_numberText;
	sf::Font * m_myFont;
	sf::Vector2f m_position;
	sf::FloatRect m_textRect;
public:

	void setFont(sf::Font *theFont);
	void setNumber(int number);

	int getNumber();

	void updateNumber();
	void draw(sf::RenderTarget &target, sf::RenderStates states) const = 0;

};