#include "stdafx.h"
#include "Boulder.h"
#include "Grid.h"
#include "GridSprite.h"

// Constructor
Boulder::Boulder(sf::Texture& _texture, GridObject::Type _type)
	: GridSprite(_texture, _type)
{

}

void Boulder::update(const float& _dtAsSeconds)
{
	{
		int targetX = m_gridX;
		int targetY = m_gridY + 1;

		GridObject* targetCellObject = m_grid->GetOjbect(targetX, targetY);

		if (targetCellObject == nullptr)
		{
			counter = counter + _dtAsSeconds;

			if (counter >= 1.0f)
			{
				// falling
				m_grid->MoveObject(m_gridX, m_gridY++, targetX, targetY, true);
				counter = 0;
			}
		}
		else if (targetCellObject-> GetType() == GridObject::PLAYER)
		{

		}
	}
}
