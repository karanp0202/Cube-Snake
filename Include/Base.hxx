#pragma once

#include "../Libraries/Include/GL/glut.hxx"
#include "../Include/getCoords.hxx"
#include "../Include/getColors.hxx"
#include "../Include/tailNode.hxx"
#include "../Include/Snake.hxx"
#include <thread>

extern void display();
extern void GLsetup();
extern void timer(int);
extern void getValues();
extern void keyDown(unsigned char, int, int);
extern void snakerefresh();
extern void setFrame();
extern void rotateFrame();

extern Node<Vec3> Tail;
extern int activeFrame;
extern getColors color;
extern getCoords coord;
extern Snake mainsnake;
extern float speed;
extern int score;
extern POINT w;