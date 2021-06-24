#pragma once
#include <GL/glut.h>

struct Colors {
	GLfloat* bg;
};

class getColors
{
public:
	getColors(const char*);
	Colors data;
};

