#include "../Include/Base.hxx"

int activeFrame = 0;

void stretchFrame() {
	if (coord.data.angle.x > 360.0f)coord.data.angle.x -= 360.0f;
	if (coord.data.angle.x < 0.0f)coord.data.angle.x = 360.0f + coord.data.angle.x;
	if (coord.data.angle.y > 360.0f)coord.data.angle.y -= 0.0f;
	if (coord.data.angle.y < 0.0f)coord.data.angle.y = 360.0f + coord.data.angle.y;
	if (coord.data.angle.z > 360.0f)coord.data.angle.z -= 0.0f;
	if (coord.data.angle.z < 0.0f)coord.data.angle.z = 360.0f + coord.data.angle.z;
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
}