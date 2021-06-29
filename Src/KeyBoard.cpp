#include "../Include/Base.hxx"

float speed = mainsnake.Velocity.x;

void keyDown(unsigned char key, int, int) {
	if (activeFrame == 0 || activeFrame == 1 || activeFrame == 2 || activeFrame == 3) {
		if (key == 'w')mainsnake.changeVelocity(0, speed, 0);
		if (key == 's')mainsnake.changeVelocity(0, -speed, 0);
	}
	if (activeFrame == 0 || activeFrame == 4 || activeFrame == 5) {
		if (key == 'a')mainsnake.changeVelocity(-speed, 0, 0);
		if (key == 'd')mainsnake.changeVelocity(speed, 0, 0);
	}
	if (key == 'w') {
		if (activeFrame == 4)mainsnake.changeVelocity(0, 0, -speed);
		if (activeFrame == 5)mainsnake.changeVelocity(0, 0, speed);
	}
	if (key == 's') {
		if (activeFrame == 4)mainsnake.changeVelocity(0, 0, speed);
		if (activeFrame == 5)mainsnake.changeVelocity(0, 0, -speed);
	}
	if (key == 'a') {
		if (activeFrame == 1)mainsnake.changeVelocity(speed, 0, 0);
		if (activeFrame == 2)mainsnake.changeVelocity(0, 0, speed);
		if (activeFrame == 3)mainsnake.changeVelocity(0, 0, -speed);
	}
	if (key == 'd') {
		if (activeFrame == 1)mainsnake.changeVelocity(-speed, 0, 0);
		if (activeFrame == 2)mainsnake.changeVelocity(0, 0, -speed);
		if (activeFrame == 3)mainsnake.changeVelocity(0, 0, speed);
	}
	if (key == '0')activeFrame = 0;
	if (key == '1')activeFrame = 1;
	if (key == '2')activeFrame = 2;
	if (key == '3')activeFrame = 3;
	if (key == '4')activeFrame = 4;
	if (key == '5')activeFrame = 5;
}
