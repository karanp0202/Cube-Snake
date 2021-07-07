#include "../Include/Base.hxx"

void Snake::changeVelocity(float x, float y, float z) {
	Velocity.x = x;
	Velocity.y = y;
	Velocity.z = z;
}

void Snake::renderface() {
	glBegin(GL_QUADS); {
		glVertex3f(coord.data.snake.x - 1.01f, coord.data.snake.y - 1.01f, coord.data.snake.z + 1.01f);
		glVertex3f(coord.data.snake.x + 1.01f, coord.data.snake.y - 1.01f, coord.data.snake.z + 1.01f);
		glVertex3f(coord.data.snake.x + 1.01f, coord.data.snake.y + 1.01f, coord.data.snake.z + 1.01f);
		glVertex3f(coord.data.snake.x - 1.01f, coord.data.snake.y + 1.01f, coord.data.snake.z + 1.01f);

		glVertex3f(coord.data.snake.x + 1.01f, coord.data.snake.y - 1.01f, coord.data.snake.z - 1.01f);
		glVertex3f(coord.data.snake.x - 1.01f, coord.data.snake.y - 1.01f, coord.data.snake.z - 1.01f);
		glVertex3f(coord.data.snake.x - 1.01f, coord.data.snake.y + 1.01f, coord.data.snake.z - 1.01f);
		glVertex3f(coord.data.snake.x + 1.01f, coord.data.snake.y + 1.01f, coord.data.snake.z - 1.01f);

		glVertex3f(coord.data.snake.x + 1.01f, coord.data.snake.y - 1.01f, coord.data.snake.z + 1.01f);
		glVertex3f(coord.data.snake.x + 1.01f, coord.data.snake.y - 1.01f, coord.data.snake.z - 1.01f);
		glVertex3f(coord.data.snake.x + 1.01f, coord.data.snake.y + 1.01f, coord.data.snake.z - 1.01f);
		glVertex3f(coord.data.snake.x + 1.01f, coord.data.snake.y + 1.01f, coord.data.snake.z + 1.01f);

		glVertex3f(coord.data.snake.x - 1.01f, coord.data.snake.y - 1.01f, coord.data.snake.z - 1.01f);
		glVertex3f(coord.data.snake.x - 1.01f, coord.data.snake.y - 1.01f, coord.data.snake.z + 1.01f);
		glVertex3f(coord.data.snake.x - 1.01f, coord.data.snake.y + 1.01f, coord.data.snake.z + 1.01f);
		glVertex3f(coord.data.snake.x - 1.01f, coord.data.snake.y + 1.01f, coord.data.snake.z - 1.01f);

		glVertex3f(coord.data.snake.x - 1.01f, coord.data.snake.y + 1.01f, coord.data.snake.z + 1.01f);
		glVertex3f(coord.data.snake.x + 1.01f, coord.data.snake.y + 1.01f, coord.data.snake.z + 1.01f);
		glVertex3f(coord.data.snake.x + 1.01f, coord.data.snake.y + 1.01f, coord.data.snake.z - 1.01f);
		glVertex3f(coord.data.snake.x - 1.01f, coord.data.snake.y + 1.01f, coord.data.snake.z - 1.01f);

		glVertex3f(coord.data.snake.x + 1.01f, coord.data.snake.y - 1.01f, coord.data.snake.z + 1.01f);
		glVertex3f(coord.data.snake.x - 1.01f, coord.data.snake.y - 1.01f, coord.data.snake.z + 1.01f);
		glVertex3f(coord.data.snake.x - 1.01f, coord.data.snake.y - 1.01f, coord.data.snake.z - 1.01f);
		glVertex3f(coord.data.snake.x + 1.01f, coord.data.snake.y - 1.01f, coord.data.snake.z - 1.01f);
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

void snakerefresh() {
	coord.data.snake.x += mainsnake.Velocity.x;
	coord.data.snake.y += mainsnake.Velocity.y;
	coord.data.snake.z += mainsnake.Velocity.z;
	snakeRoam();
	setFrame();
	maintail.refreshtail();
	maintail.check();
	mainfood.check();
}