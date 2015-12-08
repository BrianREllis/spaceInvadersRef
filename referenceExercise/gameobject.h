#pragma once
#include "vec2.h"

class gameObject 
{
	public:
		vec2 pos;
		vec2 vel;
		float radius;

		float moveSpeed = 80;

		gameObject(float x, float y, float radius) : pos({x, y}), vel({0,0}), radius(radius)
		{}

		void draw();
		void update();

		virtual void onUpdate() {}
		virtual void onDraw() {}
};