#pragma once

#include <SFML\Graphics.hpp>
#include "TextureHolder.h"
#include "Grid.h"

class Engine
{
private:
	TextureHolder m_TextureHolder;

	// A regular RenderWindow
	sf::RenderWindow m_Window;
	sf::View m_MainView;

	// The grid (will hold everything else)
	Grid m_Grid;

	// Grids for backgrounds & boundries of the game areas.
	Grid m_background;

	Grid m_rock;

	// Private functions for internal use only:
private:
	void input();
	void update(float dtAsSeconds);
	void draw();

public:
	// The Engine Constructor
	Engine();

	// Run will call all the private functions
	void run();
};