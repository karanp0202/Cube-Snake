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
		glVertex3f(Tail[n].x - 1.0f, Tail[n].y - 1.0f, Tail[n].z + 1.0f);
		glVertex3f(Tail[n].x + 1.0f, Tail[n].y - 1.0f, Tail[n].z + 1.0f);
		glVertex3f(Tail[n].x + 1.0f, Tail[n].y + 1.0f, Tail[n].z + 1.0f);
		glVertex3f(Tail[n].x - 1.0f, Tail[n].y + 1.0f, Tail[n].z + 1.0f);

		glVertex3f(Tail[n].x + 1.0f, Tail[n].y - 1.0f, Tail[n].z - 1.0f);
		glVertex3f(Tail[n].x - 1.0f, Tail[n].y - 1.0f, Tail[n].z - 1.0f);
		glVertex3f(Tail[n].x - 1.0f, Tail[n].y + 1.0f, Tail[n].z - 1.0f);
		glVertex3f(Tail[n].x + 1.0f, Tail[n].y + 1.0f, Tail[n].z - 1.0f);

		glVertex3f(Tail[n].x + 1.0f, Tail[n].y - 1.0f, Tail[n].z + 1.0f);
		glVertex3f(Tail[n].x + 1.0f, Tail[n].y - 1.0f, Tail[n].z - 1.0f);
		glVertex3f(Tail[n].x + 1.0f, Tail[n].y + 1.0f, Tail[n].z - 1.0f);
		glVertex3f(Tail[n].x + 1.0f, Tail[n].y + 1.0f, Tail[n].z + 1.0f);

		glVertex3f(Tail[n].x - 1.0f, Tail[n].y - 1.0f, Tail[n].z - 1.0f);
		glVertex3f(Tail[n].x - 1.0f, Tail[n].y - 1.0f, Tail[n].z + 1.0f);
		glVertex3f(Tail[n].x - 1.0f, Tail[n].y + 1.0f, Tail[n].z + 1.0f);
		glVertex3f(Tail[n].x - 1.0f, Tail[n].y + 1.0f, Tail[n].z - 1.0f);

		glVertex3f(Tail[n].x - 1.0f, Tail[n].y + 1.0f, Tail[n].z + 1.0f);
		glVertex3f(Tail[n].x + 1.0f, Tail[n].y + 1.0f, Tail[n].z + 1.0f);
		glVertex3f(Tail[n].x + 1.0f, Tail[n].y + 1.0f, Tail[n].z - 1.0f);
		glVertex3f(Tail[n].x - 1.0f, Tail[n].y + 1.0f, Tail[n].z - 1.0f);

		glVertex3f(Tail[n].x + 1.0f, Tail[n].y - 1.0f, Tail[n].z + 1.0f);
		glVertex3f(Tail[n].x - 1.0f, Tail[n].y - 1.0f, Tail[n].z + 1.0f);
		glVertex3f(Tail[n].x - 1.0f, Tail[n].y - 1.0f, Tail[n].z - 1.0f);
		glVertex3f(Tail[n].x + 1.0f, Tail[n].y - 1.0f, Tail[n].z - 1.0f);
	}glEnd();
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

void addtail() {
	Tail.push_back({ coord.data.snake.x,coord.data.snake.y, coord.data.snake.z });
}

void snakerefresh() {
	coord.data.snake.x += mainsnake.Velocity.x;
	coord.data.snake.y += mainsnake.Velocity.y;
	coord.data.snake.z += mainsnake.Velocity.z;
	addtail();
	snakeRoam();
	setFrame();
}