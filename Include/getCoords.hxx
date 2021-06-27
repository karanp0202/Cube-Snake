#pragma once

struct Vec3 {
	float x, y, z;
};

struct Coords {
	Vec3 origin;
	Vec3 angle;
	Vec3 cam;
	Vec3 size;
	Vec3 snake;
};

class getCoords {
public:
	void get(const char*);
	Coords data;
};

