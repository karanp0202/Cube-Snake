#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include "../Include/Base.h"

void getCoords::get(const char* coordsfile){
	FILE* file = fopen(coordsfile, "r");
	if (file == NULL) {
		ExitProcess(EXIT_FAILURE);
	}
	
	fclose(file);
}
