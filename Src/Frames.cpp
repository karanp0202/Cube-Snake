#include "../Include/Base.hxx"
#include <stdio.h>

int activeFrame = 0;

void stretch();
void normalizeFrame();

void setFrame() {
	normalizeFrame();
	switch (activeFrame) {
	case 0:
		if(coord.data.angle.x >= 180.0f)coord.data.angle.x += (360.0f - coord.data.angle.x)/20.0f;
		else coord.data.angle.x -= coord.data.angle.x / 20.0f;
		if (coord.data.angle.y >= 180.0f)coord.data.angle.y += (360.0f - coord.data.angle.y) / 20.0f;
		else coord.data.angle.y -= coord.data.angle.y / 20.0f;
		if (coord.data.angle.z >= 180.0f)coord.data.angle.z += (360.0f - coord.data.angle.z) / 20.0f;
		else coord.data.angle.z -= coord.data.angle.z / 20.0f;
		break;
	case 1:
		if (coord.data.angle.x >= 180.0f)coord.data.angle.x += (360.0f - coord.data.angle.x) / 20.0f;
		else coord.data.angle.x -= coord.data.angle.x / 20.0f;
		if (coord.data.angle.y >= 180.0f)coord.data.angle.y -= (coord.data.angle.y - 180.0f) / 20.0f;
		else coord.data.angle.y += (180.0f - coord.data.angle.y) / 20.0f;
		if (coord.data.angle.z >= 180.0f)coord.data.angle.z += (360.0f - coord.data.angle.z) / 20.0f;
		else coord.data.angle.z -= coord.data.angle.z / 20.0f;
		break;
	case 2:
		if (coord.data.angle.x >= 180.0f)coord.data.angle.x += (360.0f - coord.data.angle.x) / 20.0f;
		else coord.data.angle.x -= coord.data.angle.x / 20.0f;
		if (coord.data.angle.y >= 90.0f && coord.data.angle.y <= 270.0f)coord.data.angle.y += (270.0f - coord.data.angle.y) / 20.0f;
		else if (coord.data.angle.y >= 270.0f)coord.data.angle.y -= (coord.data.angle.y - 270.0f) / 20.0f;
		else coord.data.angle.y -= (coord.data.angle.y + 90.0f) / 20.0f;
		if (coord.data.angle.z >= 180.0f)coord.data.angle.z += (360.0f - coord.data.angle.z) / 20.0f;
		else coord.data.angle.z -= coord.data.angle.z / 20.0f;
		break;
	case 3:
		if (coord.data.angle.x >= 180.0f)coord.data.angle.x += (360.0f - coord.data.angle.x) / 20.0f;
		else coord.data.angle.x -= coord.data.angle.x / 20.0f;
		if (coord.data.angle.y >= 90.0f && coord.data.angle.y <= 270.0f)coord.data.angle.y -= (coord.data.angle.y - 90.0f) / 20.0f;
		else if(coord.data.angle.y >= 270.0f)coord.data.angle.y += (450.0f - coord.data.angle.y) / 20.0f;
		else coord.data.angle.y += (90.0f - coord.data.angle.y) / 20.0f;
		if (coord.data.angle.z >= 180.0f)coord.data.angle.z += (360.0f - coord.data.angle.z) / 20.0f;
		else coord.data.angle.z -= coord.data.angle.z / 20.0f;
		break;
	case 4:
		if (coord.data.angle.x >= 90.0f && coord.data.angle.x <= 270.0f)coord.data.angle.x -= (coord.data.angle.x - 90.0f) / 20.0f;
		else if (coord.data.angle.x >= 270.0f)coord.data.angle.x += (450.0f - coord.data.angle.x) / 20.0f;
		else coord.data.angle.x += (90.0f - coord.data.angle.x) / 20.0f;
		if (coord.data.angle.y >= 180.0f)coord.data.angle.y += (360.0f - coord.data.angle.y) / 20.0f;
		else coord.data.angle.y -= coord.data.angle.y / 20.0f;
		if (coord.data.angle.z >= 180.0f)coord.data.angle.z += (360.0f - coord.data.angle.z) / 20.0f;
		else coord.data.angle.z -= coord.data.angle.z / 20.0f;
		break;
	case 5:
		if (coord.data.angle.x >= 90.0f && coord.data.angle.x <= 270.0f)coord.data.angle.x += (270.0f - coord.data.angle.x) / 20.0f;
		else if (coord.data.angle.x >= 270.0f)coord.data.angle.x -= (coord.data.angle.x - 270.0f) / 20.0f;
		else coord.data.angle.x -= (coord.data.angle.x + 90.0f) / 20.0f;
		if (coord.data.angle.y >= 180.0f)coord.data.angle.y += (360.0f - coord.data.angle.y) / 20.0f;
		else coord.data.angle.y -= coord.data.angle.y / 20.0f;
		if (coord.data.angle.z >= 180.0f)coord.data.angle.z += (360.0f - coord.data.angle.z) / 20.0f;
		else coord.data.angle.z -= coord.data.angle.z / 20.0f;
		break;
	}
	stretch();
}

void rotateFrame() {
	glRotatef(coord.data.angle.x, 1, 0, 0);
	glRotatef(coord.data.angle.y, 0, 1, 0);
	glRotatef(coord.data.angle.z, 0, 0, 1);
}

void normalizeFrame() {
	if (coord.data.angle.x > 360.0f)coord.data.angle.x -= 360.0f;
	if (coord.data.angle.x < 0.0f)coord.data.angle.x = 360.0f + coord.data.angle.x;
	if (coord.data.angle.y > 360.0f)coord.data.angle.y -= 360.0f;
	if (coord.data.angle.y < 0.0f)coord.data.angle.y = 360.0f + coord.data.angle.y;
	if (coord.data.angle.z > 360.0f)coord.data.angle.z -= 360.0f;
	if (coord.data.angle.z < 0.0f)coord.data.angle.z = 360.0f + coord.data.angle.z;
}

void stretch() {
	switch (activeFrame) {
	case 0:
		coord.data.angle.y -= (coord.data.snake.x / coord.data.size.x) * 1.5f;
		coord.data.angle.x += (coord.data.snake.y / coord.data.size.y) * 1.5f;
		break;
	case 1:
		coord.data.angle.y += (coord.data.snake.x / coord.data.size.x) * 1.5f;
		coord.data.angle.x += (coord.data.snake.y / coord.data.size.y) * 1.5f;
		break;
	case 2:
		coord.data.angle.y += (coord.data.snake.z / coord.data.size.z) * 1.5f;
		coord.data.angle.z -= (coord.data.snake.y / coord.data.size.y) * 1.5f;
		break;
	case 3:
		coord.data.angle.y -= (coord.data.snake.z / coord.data.size.z) * 1.5f;
		coord.data.angle.z += (coord.data.snake.y / coord.data.size.y) * 1.5f;
		break;
	case 4:
		coord.data.angle.x -= (coord.data.snake.z / coord.data.size.z) * 1.5f;
		coord.data.angle.z += (coord.data.snake.x / coord.data.size.x) * 1.5f;
		break;
	case 5:
		coord.data.angle.x += (coord.data.snake.z / coord.data.size.z) * 1.5f;
		coord.data.angle.z -= (coord.data.snake.x / coord.data.size.x) * 1.5f;
		break;
	}
}