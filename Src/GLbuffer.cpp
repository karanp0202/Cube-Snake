#include "../Include/Base.hxx"

void timer(int) {
	glutTimerFunc(1000/60, timer, 0);
	glutPostRedisplay();
}