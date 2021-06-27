#pragma once

#include "../Libraries/Include/GL/glut.hxx"
#include "../Include/getCoords.hxx"
#include "../Include/getColors.hxx"
#include "../Include/Snake.hxx"
#include <thread>

extern void display();
extern void GLsetup();
extern void timer(int);
extern void getValues();
extern void keyDown(unsigned char, int, int);

extern getColors color;
extern getCoords coord;
extern Snake mainsnake;
extern POINT w;