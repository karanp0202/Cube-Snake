#include "../Include/Base.hxx"

std::vector<Vec3> food;

void Food::renderFood(int n) {
	glBegin(GL_QUADS); {
		float x = food[n].x, y = food[n].y, z = food[n].z;
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

void Food::render() {
	for (unsigned int i = 10; i < food.size(); i++) {
		renderFood(i);
	}
}

Vec3 Random(int n) {
	again:
	Vec3 random{};
	int frame = rand() % 6;

	switch (frame)
	{
	case 0:
	case 1:
	case 2:
	case 3:
		random.y = (rand() % (int)(coord.data.size.y * 2)) - coord.data.size.y;
	}

	switch (frame)
	{
	case 0:
	case 1:
	case 4:
	case 5:
		random.x = (rand() % (int)(coord.data.size.y * 2)) - coord.data.size.x;
	}

	switch (frame)
	{
	case 2:
	case 3:
	case 4:
	case 5:
		random.z = (rand() % (int)(coord.data.size.y * 2)) - coord.data.size.z;
	}

	switch (frame)
	{
	case 0:
		random.z = coord.data.size.z + 1.0f;
		break;
	case 1:
		random.z = -coord.data.size.z - 1.0f;
		break;
	case 2:
		random.x = coord.data.size.x + 1.0f;
		break;
	case 3:
		random.x = -coord.data.size.x - 1.0f;
		break;
	case 4:
		random.y = coord.data.size.y + 1.0f;
		break;
	case 5:
		random.y = -coord.data.size.y - 1.0f;
		break;
	}

	for (int i = 0; i < food.size(); i++) {
		if (i != n)if (random.x > food[i].x - 4.0f && random.x < food[i].x + 4.0f
			&& random.y > food[i].y - 4.0f && random.y < food[i].y + 4.0f
			&& random.z > food[i].z - 4.0f && random.z < food[i].z + 4.0f) {
			goto again;
		}
	}

	return random;
}

void Food::addFood(int n) {
	if (food.size() == 0)food.push_back(Random(0));
	for (int i = 0; i < n; i++)food.push_back(Random(i));
}

void Food::check() {
	for (int i = 0; i < food.size(); i++) {
		if (coord.data.snake.x > food[i].x - 2.0f && coord.data.snake.x < food[i].x + 2.0f
			&& coord.data.snake.y > food[i].y - 2.0f && coord.data.snake.y < food[i].y + 2.0f
			&& coord.data.snake.z > food[i].z - 2.0f && coord.data.snake.z < food[i].z + 2.0f) {
			food[i] = Random(i);
			mainsnake.score++;
			maintail.addTail(10);
		}
	}
}
