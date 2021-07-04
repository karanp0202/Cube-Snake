#include "../Include/Base.hxx"

void Snake::changeVelocity(float x, float y, float z) {
	Velocity.x = x;
	Velocity.y = y;
	Velocity.z = z;
}

std::vector<Vec3> Tail;

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

void Snake::renderTail(int n) {
	glBegin(GL_QUADS); {
		float x = Tail[n].x, y = Tail[n].y, z = Tail[n].z;
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

void Snake::addTail(int n) {
	for (int i = 0; i < n; i++)Tail.push_back(Tail[Tail.size()-1]);
}

void snakeRoam() {
	if (activeFrame == 0) {
		if (coord.data.snake.x > coord.data.size.x + 1) {
			mainsnake.changeVelocity(0, 0, -speed); activeFrame = 2; return;
		}
		if (coord.data.snake.x < -coord.data.size.x - 1) {
			mainsnake.changeVelocity(0, 0, -speed); activeFrame = 3; return;
		}
		if (coord.data.snake.y > coord.data.size.y + 1) {
			mainsnake.changeVelocity(0, 0, -speed); activeFrame = 4; return;
		}
		if (coord.data.snake.y < -coord.data.size.y - 1) {
			mainsnake.changeVelocity(0, 0, -speed); activeFrame = 5; return;
		}
	}
	if (activeFrame == 1) {
		if (coord.data.snake.x > coord.data.size.x + 1) {
			mainsnake.changeVelocity(0, 0, speed); activeFrame = 2; return;
		}
		if (coord.data.snake.x < -coord.data.size.x - 1) {
			mainsnake.changeVelocity(0, 0, speed); activeFrame = 3; return;
		}
		if (coord.data.snake.y > coord.data.size.y + 1) {
			mainsnake.changeVelocity(0, 0, speed); activeFrame = 4; return;
		}
		if (coord.data.snake.y < -coord.data.size.y - 1) {
			mainsnake.changeVelocity(0, 0, speed); activeFrame = 5; return;
		}
	}
	if (activeFrame == 2) {
		if (coord.data.snake.z > coord.data.size.z + 1) {
			mainsnake.changeVelocity(-speed, 0, 0); activeFrame = 0; return;
		}
		if (coord.data.snake.z < -coord.data.size.z - 1) {
			mainsnake.changeVelocity(-speed, 0, 0); activeFrame = 1; return;
		}
		if (coord.data.snake.y > coord.data.size.y + 1) {
			mainsnake.changeVelocity(-speed, 0, 0); activeFrame = 4; return;
		}
		if (coord.data.snake.y < -coord.data.size.y - 1) {
			mainsnake.changeVelocity(-speed, 0, 0); activeFrame = 5; return;
		}
	}
	if (activeFrame == 3) {
		if (coord.data.snake.z > coord.data.size.z + 1) {
			mainsnake.changeVelocity(speed, 0, 0); activeFrame = 0; return;
		}
		if (coord.data.snake.z < -coord.data.size.z - 1) {
			mainsnake.changeVelocity(speed, 0, 0); activeFrame = 1; return;
		}
		if (coord.data.snake.y > coord.data.size.y + 1) {
			mainsnake.changeVelocity(speed, 0, 0); activeFrame = 4; return;
		}
		if (coord.data.snake.y < -coord.data.size.y - 1) {
			mainsnake.changeVelocity(speed, 0, 0); activeFrame = 5; return;
		}
	}
	if (activeFrame == 4) {
		if (coord.data.snake.x > coord.data.size.x + 1) {
			mainsnake.changeVelocity(0, -speed, 0); activeFrame = 2; return;
		}
		if (coord.data.snake.x < -coord.data.size.x - 1) {
			mainsnake.changeVelocity(0, -speed, 0); activeFrame = 3; return;
		}
		if (coord.data.snake.z > coord.data.size.z + 1) {
			mainsnake.changeVelocity(0, -speed, 0); activeFrame = 0; return;
		}
		if (coord.data.snake.z < -coord.data.size.z - 1) {
			mainsnake.changeVelocity(0, -speed, 0); activeFrame = 1; return;
		}
	}
	if (activeFrame == 5) {
		if (coord.data.snake.x > coord.data.size.x + 1) {
			mainsnake.changeVelocity(0, speed, 0); activeFrame = 2; return;
		}
		if (coord.data.snake.x < -coord.data.size.x - 1) {
			mainsnake.changeVelocity(0, speed, 0); activeFrame = 3; return;
		}
		if (coord.data.snake.z > coord.data.size.z + 1) {
			mainsnake.changeVelocity(0, speed, 0); activeFrame = 0; return;
		}
		if (coord.data.snake.z < -coord.data.size.z - 1) {
			mainsnake.changeVelocity(0, speed, 0); activeFrame = 1; return;
		}
	}
}

void refreshtail() {
	for (int i = Tail.size()-1; i > 0; i--) {
		Tail[i] = Tail[i - 1];
	}
	Tail[0] = coord.data.snake;
}

void snakerefresh() {
	coord.data.snake.x += mainsnake.Velocity.x;
	coord.data.snake.y += mainsnake.Velocity.y;
	coord.data.snake.z += mainsnake.Velocity.z;
	refreshtail();
	snakeRoam();
	setFrame();
}