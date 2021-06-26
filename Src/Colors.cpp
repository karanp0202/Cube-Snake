#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include "../Include/Base.h"

void getColors::get(const char* colorfile)
{
	FILE* file = fopen(colorfile, "r");
	if (file == NULL) {
		ExitProcess(EXIT_FAILURE);
	}

	int n;
	for (char buff = NULL; buff != '^'; (void)fscanf(file, "%c", &buff)) {
		switch (buff) {
		case 'b':
			(void)fscanf(file, "%c", &buff);
			switch (buff) {
			case 'g':
				(void)fscanf(file, "%d", &n);
				data.bg = new float[n];
				for (int i = 0; i < n; i++) {
					float tmp;
					(void)fscanf(file, "%f", &tmp);
					*(data.bg + i) = tmp;
				}

			}
		}
	}

	fclose(file);
}
