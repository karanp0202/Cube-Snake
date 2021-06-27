#include "../Include/Base.hxx"

extern getColors color;

void display() {
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glLoadIdentity();

	glTranslatef(coord.data.cam.x, coord.data.cam.y, coord.data.cam.z);
	static float i = 0;

	// BACKGROUND
	glColor4fv(color.data.bg);
	glBegin(GL_QUADS); {
		glVertex3f(-200.0f, -65.0f, -100.0f);
		glVertex3f(200.0f, -65.0f, -100.0f);
		glVertex3f(200.0f, 65.0f, -100.0f);
		glVertex3f(-200.0f, 65.0f, -100.0f);
	}glEnd();

	glRotatef(i+=0.2f, 1, 0, 0);
	glRotatef(i+=0.2f, 0, 1, 0);
	glRotatef(i+=0.2f, 0, 0, 1);

	glBegin(GL_QUADS); {
		glColor4fv(color.data.c1);
		glVertex3f(-coord.data.size.x, -coord.data.size.y, coord.data.size.z);
		glVertex3f(coord.data.size.x, -coord.data.size.y, coord.data.size.z);
		glVertex3f(coord.data.size.x, coord.data.size.y, coord.data.size.z);
		glVertex3f(-coord.data.size.x, coord.data.size.y, coord.data.size.z);

		glColor4fv(color.data.c2);
		glVertex3f(coord.data.size.x, -coord.data.size.y, -coord.data.size.z);
		glVertex3f(-coord.data.size.x, -coord.data.size.y, -coord.data.size.z);
		glVertex3f(-coord.data.size.x, coord.data.size.y, -coord.data.size.z);
		glVertex3f(coord.data.size.x, coord.data.size.y, -coord.data.size.z);

		glColor4fv(color.data.c3);
		glVertex3f(coord.data.size.x, -coord.data.size.y, coord.data.size.z);
		glVertex3f(coord.data.size.x, -coord.data.size.y, -coord.data.size.z);
		glVertex3f(coord.data.size.x, coord.data.size.y, -coord.data.size.z);
		glVertex3f(coord.data.size.x, coord.data.size.y, coord.data.size.z);

		glColor4fv(color.data.c4);
		glVertex3f(-coord.data.size.x, -coord.data.size.y, -coord.data.size.z);
		glVertex3f(-coord.data.size.x, -coord.data.size.y, coord.data.size.z);
		glVertex3f(-coord.data.size.x, coord.data.size.y, coord.data.size.z);
		glVertex3f(-coord.data.size.x, coord.data.size.y, -coord.data.size.z);

		glColor4fv(color.data.c5);
		glVertex3f(-coord.data.size.x, coord.data.size.y, coord.data.size.z);
		glVertex3f(coord.data.size.x, coord.data.size.y, coord.data.size.z);
		glVertex3f(coord.data.size.x, coord.data.size.y, -coord.data.size.z);
		glVertex3f(-coord.data.size.x, coord.data.size.y, -coord.data.size.z);

		glColor4fv(color.data.c6);
		glVertex3f(coord.data.size.x, -coord.data.size.y, coord.data.size.z);
		glVertex3f(-coord.data.size.x, -coord.data.size.y, coord.data.size.z);
		glVertex3f(-coord.data.size.x, -coord.data.size.y, -coord.data.size.z);
		glVertex3f(coord.data.size.x, -coord.data.size.y, -coord.data.size.z);
	}glEnd();

	glutSwapBuffers();
}