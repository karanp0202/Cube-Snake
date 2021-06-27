#include "../Include/Base.hxx"

void Snake::renderface() {
	glBegin(GL_QUADS); {
		glVertex3f(coord.data.snake.x - 1.0f, coord.data.snake.y - 1.0f, coord.data.snake.z + 1.0f);
		glVertex3f(coord.data.snake.x + 1.0f, coord.data.snake.y - 1.0f, coord.data.snake.z + 1.0f);
		glVertex3f(coord.data.snake.x + 1.0f, coord.data.snake.y + 1.0f, coord.data.snake.z + 1.0f);
		glVertex3f(coord.data.snake.x - 1.0f, coord.data.snake.y + 1.0f, coord.data.snake.z + 1.0f);

		glVertex3f(coord.data.snake.x + 1.0f, coord.data.snake.y - 1.0f, coord.data.snake.z - 1.0f);
		glVertex3f(coord.data.snake.x - 1.0f, coord.data.snake.y - 1.0f, coord.data.snake.z - 1.0f);
		glVertex3f(coord.data.snake.x - 1.0f, coord.data.snake.y + 1.0f, coord.data.snake.z - 1.0f);
		glVertex3f(coord.data.snake.x + 1.0f, coord.data.snake.y + 1.0f, coord.data.snake.z - 1.0f);

		glVertex3f(coord.data.snake.x + 1.0f, coord.data.snake.y - 1.0f, coord.data.snake.z + 1.0f);
		glVertex3f(coord.data.snake.x + 1.0f, coord.data.snake.y - 1.0f, coord.data.snake.z - 1.0f);
		glVertex3f(coord.data.snake.x + 1.0f, coord.data.snake.y + 1.0f, coord.data.snake.z - 1.0f);
		glVertex3f(coord.data.snake.x + 1.0f, coord.data.snake.y + 1.0f, coord.data.snake.z + 1.0f);

		glVertex3f(coord.data.snake.x - 1.0f, coord.data.snake.y - 1.0f, coord.data.snake.z - 1.0f);
		glVertex3f(coord.data.snake.x - 1.0f, coord.data.snake.y - 1.0f, coord.data.snake.z + 1.0f);
		glVertex3f(coord.data.snake.x - 1.0f, coord.data.snake.y + 1.0f, coord.data.snake.z + 1.0f);
		glVertex3f(coord.data.snake.x - 1.0f, coord.data.snake.y + 1.0f, coord.data.snake.z - 1.0f);

		glVertex3f(coord.data.snake.x - 1.0f, coord.data.snake.y + 1.0f, coord.data.snake.z + 1.0f);
		glVertex3f(coord.data.snake.x + 1.0f, coord.data.snake.y + 1.0f, coord.data.snake.z + 1.0f);
		glVertex3f(coord.data.snake.x + 1.0f, coord.data.snake.y + 1.0f, coord.data.snake.z - 1.0f);
		glVertex3f(coord.data.snake.x - 1.0f, coord.data.snake.y + 1.0f, coord.data.snake.z - 1.0f);

		glVertex3f(coord.data.snake.x + 1.0f, coord.data.snake.y - 1.0f, coord.data.snake.z + 1.0f);
		glVertex3f(coord.data.snake.x - 1.0f, coord.data.snake.y - 1.0f, coord.data.snake.z + 1.0f);
		glVertex3f(coord.data.snake.x - 1.0f, coord.data.snake.y - 1.0f, coord.data.snake.z - 1.0f);
		glVertex3f(coord.data.snake.x + 1.0f, coord.data.snake.y - 1.0f, coord.data.snake.z - 1.0f);
	}glEnd();
}