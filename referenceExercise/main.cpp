#include <iostream>
#include <cassert>
#include "vec2.h"
#include "gameobject.h"
#include "player.h"
#include "sfwdraw.h"

int main()
{
	
	sfw::initContext(800, 800, "The Absolute Greatest Game (GOTY Edition)");

	Player player(400, 400);

	while (sfw::stepContext())
	{
		player.update();
		player.draw();
		

		sfw::drawCircle(400, 300, 20);
	}
	sfw::termContext();
	int t1 = 0,
		t2 = 0,
		t3 = 0;

	passByVal(t1);
	passByRef(t2);
	passByPtr(&t3);

	vec2 a = {1, 3 };
	vec2 b = {3, 1 };
	assert((a + b) == b);

	system("pause");
}