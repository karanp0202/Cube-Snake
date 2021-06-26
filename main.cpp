#include "./Include/Base.h"

POINT w;

int main(int argc, char* argv[]) {

	std::thread values(getValues);

	glutInit(&argc, argv);
	GLsetup();

	values.join();

	glutMainLoop();

	return 0;
}