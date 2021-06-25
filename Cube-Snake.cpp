#include <GL/glut.h>
#include "getColors.h"

getColors color("./Res/values.txt");

void display() {
	glClear(GL_COLOR_BUFFER_BIT);
	glLoadIdentity();

	glTranslatef(0.0f, 0.0f, -50.0f);

	glColor4fv(color.data.bg);

	glBegin(GL_TRIANGLES); {
		glVertex3f(0.0, 0.0, -5.0);
		glVertex3f(10.0, 0.0, -5.0);
		glVertex3f(0.0, 10.0, -5.0);
	}glEnd();

	glutSwapBuffers();
}

void timer(int) {
	glutTimerFunc(1000 / 60, timer, 0);
	glutPostRedisplay();
}

int main(int argc, char* argv[]) {
	// PREPROGRAM RES

	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE);
	glutInitWindowPosition(100, 100);
	glutInitWindowSize(500, 500);
	int window = glutCreateWindow("Cube Snake");

	glutDisplayFunc(display);
	glutTimerFunc(0, timer, 0);

	glViewport(0, 0, 500, 500);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(45.0f, 1.0f, 0.1f, 1000.0f);
	glMatrixMode(GL_MODELVIEW);

	glEnable(GL_BLEND);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);

	glutMainLoop();

	return 0;
}