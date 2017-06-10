#pragma once
#include "Entity.h"
#include "SpriteAnimation.h"

class Player :
	public Entity
{
public:
	Player();
	~Player();

	virtual void Update(float deltaTime);
	virtual void Render(sf::RenderTarget& renderTarget);
private:
	SpriteAnimation m_animIdle;
	SpriteAnimation m_animWalk;

	bool m_isWalking;
};
