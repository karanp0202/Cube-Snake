#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include "../Include/Base.hxx"

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
					(void)fscanf(file, "%f,", &tmp);
					*(data.bg + i) = tmp / 255.0f;
				}

			}
		case 'c':
			(void)fscanf(file, "%c", &buff);
			switch (buff) {
			case '1':
				(void)fscanf(file, "%d", &n);
				data.c1= new float[n];
				for (int i = 0; i < n; i++) {
					float tmp;
					(void)fscanf(file, "%f,", &tmp);
					*(data.c1 + i) = tmp / 255.0f;
				}
				break;
			case '2':
				(void)fscanf(file, "%d", &n);
				data.c2 = new float[n];
				for (int i = 0; i < n; i++) {
					float tmp;
					(void)fscanf(file, "%f,", &tmp);
					*(data.c2 + i) = tmp / 255.0f;
				}
				break;
			case '3':
				(void)fscanf(file, "%d", &n);
				data.c3 = new float[n];
				for (int i = 0; i < n; i++) {
					float tmp;
					(void)fscanf(file, "%f,", &tmp);
					*(data.c3 + i) = tmp / 255.0f;
				}
				break;
			case '4':
				(void)fscanf(file, "%d", &n);
				data.c4 = new float[n];
				for (int i = 0; i < n; i++) {
					float tmp;
					(void)fscanf(file, "%f,", &tmp);
					*(data.c4 + i) = tmp / 255.0f;
				}
				break;
			case '5':
				(void)fscanf(file, "%d", &n);
				data.c5 = new float[n];
				for (int i = 0; i < n; i++) {
					float tmp;
					(void)fscanf(file, "%f,", &tmp);
					*(data.c5 + i) = tmp / 255.0f;
				}
				break;
			case '6':
				(void)fscanf(file, "%d", &n);
				data.c6 = new float[n];
				for (int i = 0; i < n; i++) {
					float tmp;
					(void)fscanf(file, "%f,", &tmp);
					*(data.c6 + i) = tmp / 255.0f;
				}
				break;
			}
		}
	}

	fclose(file);
}
