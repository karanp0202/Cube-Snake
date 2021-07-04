#pragma once
#include "../Libraries/Include/GL/glut.hxx"

struct Colors {
	GLfloat* bg;
	GLfloat* c0;
	GLfloat* c1;
	GLfloat* c2;
	GLfloat* c3;
	GLfloat* c4;
	GLfloat* c5;
	GLfloat* sf;
	GLfloat* st;
	GLfloat* fo;
};

class getColors {
public:
	void get(const char*);
	Colors data;
};