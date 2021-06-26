#pragma once
#include <GL/glut.hxx>

struct Colors {
	GLfloat* bg;
};

class getColors {
public:
	void get(const char*);
	Colors data;
};