#include "../Include/Base.hxx"

void timer(int) {
	glutTimerFunc(0, timer, 0);
	glutPostRedisplay();
}