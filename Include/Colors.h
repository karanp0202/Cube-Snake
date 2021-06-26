#pragma once
#include <GL/glut.h>

struct Colors {
	GLfloat* bg;
};

class getColors
{
public:
	void get(const char*);
	Colors data;
};

