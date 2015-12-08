#include "sfwdraw.h"
#include "gameobject.h"
#include "player.h"


void Player::onUpdate()
{
	vel = { 0,0 };

	if (sfw::getKey('W'))
	{
		vel.y = -moveSpeed;
	}
	if (sfw::getKey('D'))
	{
		vel.x = moveSpeed;
	}
	if (sfw::getKey('A'))
	{
		vel.x = -moveSpeed;
	}
	if (sfw::getKey('S'))
	{
		vel.y = moveSpeed;
	}
}