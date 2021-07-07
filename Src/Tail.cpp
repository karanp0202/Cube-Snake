#include "../Include/Base.hxx"

std::vector<Vec3> tail;

void Tail::renderTail(int n) {
	glBegin(GL_QUADS); {
		float x = tail[n].x, y = tail[n].y, z = tail[n].z;
		glVertex3f(x - 1.0f, y - 1.0f, z + 1.0f);
		glVertex3f(x + 1.0f, y - 1.0f, z + 1.0f);
		glVertex3f(x + 1.0f, y + 1.0f, z + 1.0f);
		glVertex3f(x - 1.0f, y + 1.0f, z + 1.0f);

		glVertex3f(x + 1.0f, y - 1.0f, z - 1.0f);
		glVertex3f(x - 1.0f, y - 1.0f, z - 1.0f);
		glVertex3f(x - 1.0f, y + 1.0f, z - 1.0f);
		glVertex3f(x + 1.0f, y + 1.0f, z - 1.0f);

		glVertex3f(x + 1.0f, y - 1.0f, z + 1.0f);
		glVertex3f(x + 1.0f, y - 1.0f, z - 1.0f);
		glVertex3f(x + 1.0f, y + 1.0f, z - 1.0f);
		glVertex3f(x + 1.0f, y + 1.0f, z + 1.0f);

		glVertex3f(x - 1.0f, y - 1.0f, z - 1.0f);
		glVertex3f(x - 1.0f, y - 1.0f, z + 1.0f);
		glVertex3f(x - 1.0f, y + 1.0f, z + 1.0f);
		glVertex3f(x - 1.0f, y + 1.0f, z - 1.0f);

		glVertex3f(x - 1.0f, y + 1.0f, z + 1.0f);
		glVertex3f(x + 1.0f, y + 1.0f, z + 1.0f);
		glVertex3f(x + 1.0f, y + 1.0f, z - 1.0f);
		glVertex3f(x - 1.0f, y + 1.0f, z - 1.0f);

		glVertex3f(x + 1.0f, y - 1.0f, z + 1.0f);
		glVertex3f(x - 1.0f, y - 1.0f, z + 1.0f);
		glVertex3f(x - 1.0f, y - 1.0f, z - 1.0f);
		glVertex3f(x + 1.0f, y - 1.0f, z - 1.0f);
	}glEnd();
}

void Tail::render() {
	for (unsigned int i = 10; i < tail.size(); i++) {
		if (i % 10 == 0)renderTail(i);
	}
}

void Tail::addTail(int n) {
	if (tail.size() == 0)tail.push_back({0,0,0});
	for (int i = 0; i < n; i++)tail.push_back(tail[tail.size()-1]);
}

void Tail::refreshtail() {
	for (int i = (int)tail.size() - 1; i > 0; i--) {
		tail[i] = tail[i - 1];
	}
	tail[0] = coord.data.snake;
}

void Tail::check() {
	for (int i = 20; i < tail.size(); i++) {
		if(i%10 == 0)if (coord.data.snake.x > tail[i].x - 2.0f && coord.data.snake.x < tail[i].x + 2.0f
			&& coord.data.snake.y > tail[i].y - 2.0f && coord.data.snake.y < tail[i].y + 2.0f
			&& coord.data.snake.z > tail[i].z - 2.0f && coord.data.snake.z < tail[i].z + 2.0f) {
			exit(0);
		}
	}
}
