#include "Game.h"

Game::Game()
{
	m_Font.loadFromFile("fonts/arial.ttf");
	m_playingGrid.setFonts(&m_Font);
	m_playingGrid.test();
	m_sodukoGrid.loadFromFile("Textures/SodunkGrid.png");
	m_background.setTexture(m_sodukoGrid);
	m_background.setPosition(sf::Vector2f(1, 1));
}

sf::Font  Game::getFont()
{
	return m_Font;
}

void Game::update()
{
	m_playingGrid.update();
}

void Game::draw(sf::RenderTarget & target, sf::RenderStates states) const
{
	target.draw(m_background);
	target.draw(m_playingGrid);
}
