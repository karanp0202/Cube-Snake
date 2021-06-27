#pragma once

struct XYZ {
	float x = 0, y = 0, z = 0;
};

class Snake
{
public:
	XYZ Velocity;
	void changeVelocity(float, float, float);
	void renderface();
};