#pragma once
#include "../Include/getCoords.hxx"
#include "../Include/Colors.hxx"
#include <GL/glut.hxx>
#include <thread>

extern void display();
extern void GLsetup();
extern void timer(int);
extern void getValues();

extern POINT w;
extern getColors color;
extern getCoords coord;