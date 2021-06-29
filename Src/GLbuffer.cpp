#include "../Include/Base.hxx"

void timer(int) {
	snakerefresh();
	glutTimerFunc(16, timer, 0);
	glutPostRedisplay();
}