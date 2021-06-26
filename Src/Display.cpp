#include "../Include/Base.hxx"

extern getColors color;

void display() {
	glClear(GL_COLOR_BUFFER_BIT);
	glLoadIdentity();

	glTranslatef(coord.data.cam.x, coord.data.cam.y, coord.data.cam.z);

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