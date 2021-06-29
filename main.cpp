#include "./Include/Base.hxx"

int main(int argc, char* argv[]) {

	std::thread values(getValues);

	glutInit(&argc, argv);
	GLsetup();

	values.join();
	for (int i = 0; i < 50; i++)Tail.push_back({ coord.data.snake.x,coord.data.snake.y, coord.data.snake.z });

	glutMainLoop();

	return 0;
}