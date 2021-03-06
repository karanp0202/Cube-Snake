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
				break;
			}
			break;
		case 'f':
			(void)fscanf(file, "%c", &buff);
			switch (buff) {
			case 'o':
				(void)fscanf(file, "%d", &n);
				data.fo = new float[n];
				for (int i = 0; i < n; i++) {
					float tmp;
					(void)fscanf(file, "%f,", &tmp);
					*(data.fo + i) = tmp / 255.0f;
				}
				break;
			}
			break;
		case 's':
			(void)fscanf(file, "%c", &buff);
			switch (buff) {
			case 'f':
				(void)fscanf(file, "%d", &n);
				data.sf = new float[n];
				for (int i = 0; i < n; i++) {
					float tmp;
					(void)fscanf(file, "%f,", &tmp);
					*(data.sf + i) = tmp / 255.0f;
				}
				break;
			case 't':
				(void)fscanf(file, "%d", &n);
				data.st = new float[n];
				for (int i = 0; i < n; i++) {
					float tmp;
					(void)fscanf(file, "%f,", &tmp);
					*(data.st + i) = tmp / 255.0f;
				}
				break;
			}
			break;
		case 'c':
			(void)fscanf(file, "%c", &buff);
			switch (buff) {
			case '0':
				(void)fscanf(file, "%d", &n);
				data.c0 = new float[n];
				for (int i = 0; i < n; i++) {
					float tmp;
					(void)fscanf(file, "%f,", &tmp);
					*(data.c0 + i) = tmp / 255.0f;
				}
				break;
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
			}
			break;
		}
	}

	fclose(file);
}
