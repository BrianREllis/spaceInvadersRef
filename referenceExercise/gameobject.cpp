#include "gameobject.h"
#include "sfwdraw.h"

void gameObject::update()
{
	pos = euler(pos, vel, sfw::getDeltaTime());
	onUpdate();
}

void gameObject::draw()
{
	sfw::drawCircle(pos.x, pos.y, radius);
	onDraw();
}
