#include "../Include/Base.hxx"

void GLsetup() {
	w.x = GetSystemMetrics(SM_CXSCREEN);
	w.y = GetSystemMetrics(SM_CYSCREEN);

	glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE);
	glutInitWindowPosition(w.x/4, w.y/5);
	glutInitWindowSize(w.x/2, w.y/2);
	int window = glutCreateWindow("Cube Snake");

	glutDisplayFunc(display);
	glutTimerFunc(0, timer, 0);

	glViewport(0, 0, w.x/2, w.y/2);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(45.0f, (GLfloat)w.x/(GLfloat)w.y, 0.1f, 151.0f);
	glMatrixMode(GL_MODELVIEW);

	glEnable(GL_BLEND);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
}