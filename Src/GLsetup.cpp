#include "../Include/Base.hxx"

POINT w;

void GLsetup() {
	srand(time(0));
	w.x = GetSystemMetrics(SM_CXSCREEN);
	w.y = GetSystemMetrics(SM_CYSCREEN);

	glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
	glutInitWindowPosition(w.x/4, w.y/5);
	glutInitWindowSize(w.x/2, w.y/2);
	int window = glutCreateWindow("Cube Snake");

	glutDisplayFunc(display);
	glutTimerFunc(0, timer, 0);
	glutKeyboardFunc(keyDown);

	glViewport(0, 0, w.x/2, w.y/2);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(30.0f, (GLfloat)w.x/(GLfloat)w.y, 0.1f, 500.0f);
	glMatrixMode(GL_MODELVIEW);

	//glEnable(GL_BLEND);
	//glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
	glEnable(GL_DEPTH_TEST);
	//glEnable(GL_CULL_FACE);
}