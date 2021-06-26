#include "./Include/Base.h"

getColors color;

void getColor() {
	color.get("./Res/colors.txt");
};

int main(int argc, char* argv[]) {

	std::thread values(getColor);

	glutInit(&argc, argv);
	GLsetup();

	values.join();

	glutMainLoop();

	return 0;
}