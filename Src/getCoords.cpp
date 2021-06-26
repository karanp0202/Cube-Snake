#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include "../Include/Base.hxx"

void getCoords::get(const char* coordsfile){
	FILE* file = fopen(coordsfile, "r");
	if (file == NULL) {
		ExitProcess(EXIT_FAILURE);
	}

	int n;
	for (char buff = NULL; buff != '^'; (void)fscanf(file, "%c", &buff)) {
		switch (buff) {
		case 'c':
			(void)fscanf(file, "%c", &buff);
			switch (buff) {
			case 'o':
				(void)fscanf(file, "%f %f %f", &data.origin.x, &data.origin.y, &data.origin.y);
				break;
			case 'c':
				(void)fscanf(file, "%f %f %f", &data.cam.x, &data.cam.y, &data.cam.z);
				break;
			case 's':
				(void)fscanf(file, "%f %f %f", &data.size.x, &data.size.y, &data.size.y);
				break;
			}
		}
	}
	
	fclose(file);
}
