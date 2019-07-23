#pragma once
#include <SFML/Graphics.hpp>

class Cell : public sf::Drawable 
{

private:

	int m_number;
	bool m_possibleNumbers[9];
	sf::Text m_numberText;
	sf::Font * m_myFont;
	sf::Vector2f m_position;
	sf::FloatRect m_textRect;
	bool m_hasNumber;


protected:

public:
	Cell();
	Cell(sf::Vector2f position);
	 
	void setFont(sf::Font *theFont);
	int GetNumber();
	void SetNumber(int number);

	bool getPosible (int oneToNine);
	void setPosible(int oneToNine, bool set);

	void setPosiiton(sf::Vector2f pos);
	sf::Vector2f getPosition();

	void update();
	void draw(sf::RenderTarget &target, sf::RenderStates states) const;

};
