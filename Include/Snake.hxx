#pragma once

#include "../Include/Base.hxx"

struct XYZ {
	float x = 0.3f, y = 0, z = 0;
};

class Snake
{
public:
	XYZ Velocity;
	void changeVelocity(float, float, float);
	void renderface();
	void renderTail(int);
};