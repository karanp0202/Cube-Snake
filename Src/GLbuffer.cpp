#include "../Include/Base.h"

void timer(int) {
	glutTimerFunc(0, timer, 0);
	glutPostRedisplay();
}