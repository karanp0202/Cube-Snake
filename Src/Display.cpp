#include "../Include/Base.hxx"

extern getColors color;

void display() {
	glClear(GL_DEPTH_BUFFER_BIT);
	glLoadIdentity();

	glTranslatef(coord.data.cam.x, coord.data.cam.y, coord.data.cam.z);

	// BACKGROUND RENDER
	glColor4fv(color.data.bg);
	glBegin(GL_QUADS); {
		glVertex3f(-200.0f, -65.0f, -100.0f);
		glVertex3f(200.0f, -65.0f, -100.0f);
		glVertex3f(200.0f, 65.0f, -100.0f);
		glVertex3f(-200.0f, 65.0f, -100.0f);
	}glEnd();

	/*static float a = 0;
	glRotatef(a+=0.2, 1, 0, 0);
	glRotatef(a+=0.2, 0, 1, 0);
	glRotatef(a+=0.2, 0, 0, 1);*/

	// BASE CUBE RENDER
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

	// SNAKE RENDER
	glColor4fv(color.data.sf);
	mainsnake.renderface();

	glutSwapBuffers();
}