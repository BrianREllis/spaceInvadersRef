#include "gameobject.h"
class Player : public gameObject
{
public:
	Player(float x, float y) : gameObject(x, y, 35)
	{}

	void onUpdate();
};