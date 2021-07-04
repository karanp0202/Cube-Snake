#pragma once

#include "../Include/Base.hxx"

struct XYZ {
	float x = 0.3f, y = 0, z = 0;
};

class Snake
{
public:
	int score = 0;
	XYZ Velocity;
	void changeVelocity(float, float, float);
	void renderface();
};