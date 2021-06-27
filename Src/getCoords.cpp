#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include "../Include/Base.hxx"

void getCoords::get(const char* coordsfile){
	FILE* file = fopen(coordsfile, "r");
	if (file == NULL) {
		ExitProcess(EXIT_FAILURE);
	}

	for (char buff = NULL; buff != '^'; (void)fscanf(file, "%c", &buff)) {
		switch (buff) {
		case 'c':
			(void)fscanf(file, "%c", &buff);
			switch (buff) {
			case 'c':
				(void)fscanf(file, "%f %f %f", &data.cam.x, &data.cam.y, &data.cam.z);
				break;
			case 's':
				(void)fscanf(file, "%f %f %f", &data.size.x, &data.size.y, &data.size.z);
				break;
			case 'n':
				(void)fscanf(file, "%f %f %f", &data.snake.x, &data.snake.y, &data.snake.z);
				break;
			case 'a':
				(void)fscanf(file, "%f %f %f", &data.angle.x, &data.angle.y, &data.angle.z);
				break;
			}
		}
	}
	
	fclose(file);
}
