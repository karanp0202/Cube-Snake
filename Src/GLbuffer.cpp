#include "../Include/Base.hxx"

void timer(int) {
	snakerefresh();
	glutTimerFunc(1000/60, timer, 0);
	glutPostRedisplay();
}