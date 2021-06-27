#include "./Include/Base.hxx"

int main(int argc, char* argv[]) {

	std::thread values(getValues);

	values.join();
	glutInit(&argc, argv);
	GLsetup();


	glutMainLoop();

	return 0;
}