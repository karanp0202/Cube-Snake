#include "../Include/Base.hxx"

void snakerefresh() {
	coord.data.snake.x += mainsnake.Velocity.x;
	coord.data.snake.y += mainsnake.Velocity.y;
	coord.data.snake.z += mainsnake.Velocity.z;
}

void timer(int) {
	snakerefresh();
	glutTimerFunc(1000/60, timer, 0);
	glutPostRedisplay();
}