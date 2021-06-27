#include "../Include/Base.hxx"

void keyDown(unsigned char key, int, int) {
	if (key == 'w')mainsnake.changeVelocity(0, 0.4f, 0);
}
