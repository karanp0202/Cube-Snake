#include "../Include/Base.hxx"

extern getColors color;

void display() {
	glClear(GL_COLOR_BUFFER_BIT);
	glLoadIdentity();

	glTranslatef(0.0f, 0.0f, -50.0f);

	// BACKGROUND
	glColor4fv(color.data.bg);
	glBegin(GL_QUADS); {
		glVertex3f(-200.0f, -65.0f, -100.0f);
		glVertex3f(200.0f, -65.0f, -100.0f);
		glVertex3f(200.0f, 65.0f, -100.0f);
		glVertex3f(-200.0f, 65.0f, -100.0f);
	}glEnd();

	glutSwapBuffers();
}