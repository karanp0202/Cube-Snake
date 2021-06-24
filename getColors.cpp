#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <iostream>
#include "getColors.h"

getColors::getColors(const char* colorfile)
{
	FILE* file = fopen(colorfile, "r");

	int n;
	for (char buff = NULL; buff != '^'; fscanf(file, "%c", &buff)) {
		switch (buff) {
		case 'b':
			fscanf(file, "%d", &n);
			data.bg = new float[n];
			for (int i = 0; i < n; i++) {
				float tmp;
				fscanf(file, "%f", &tmp);
				*(data.bg + i) = tmp;
			}
		}
	}

	fclose(file);
}
