#pragma once
#include "GridSprite.h"

class Boulder : public GridSprite
{
public:

	Boulder(sf::Texture& _texture, GridObject::Type _type = GridObject::BOULDER);

	void update(const float& _dtAsSeconds) override;

protected:
	float counter = 0;
};
