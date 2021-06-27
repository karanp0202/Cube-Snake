#pragma once
#include <GL/glut.hxx>

struct Colors {
	GLfloat* bg;
	GLfloat* c1;
	GLfloat* c2;
	GLfloat* c3;
	GLfloat* c4;
	GLfloat* c5;
	GLfloat* c6;
};

class getColors {
public:
	void get(const char*);
	Colors data;
};