#pragma once
#include "../Libraries/Include/GL/glut.hxx"
#include "../Include/getCoords.hxx"
#include "../Include/getColors.hxx"
#include <thread>

extern void display();
extern void GLsetup();
extern void timer(int);
extern void getValues();

extern POINT w;
extern getColors color;
extern getCoords coord;