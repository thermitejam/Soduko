#pragma once
#include <SFML/Graphics.hpp>
#include "Button.h"
class SelectionRow : public sf::Drawable
{
private:
	Button m_buttons[9];
	bool m_BlockClicked;

protected:
public:
	SelectionRow();
	void draw(sf::RenderTarget & target, sf::RenderStates states) const;
	void setfonts(sf::Font *font);

};
