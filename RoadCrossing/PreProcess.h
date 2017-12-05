#pragma once
#include<Windows.h>
#include<iostream>
#include<string>
#include<vector>
#include<time.h>
#include<random>
using namespace std;


struct Point {
	int m_x, m_y;
};
const int WIDTH = 90;
const int HEIGHT = 25;

//Make the window can't not expand
void fixConsoleWindow();
//Go to the coordinate (x,y) on the screen
void gotoXY(int, int);
/*Draw the playground (draw the rectangle started from (x,y) with height = h and width = w then
go back to (endPosX, endPosY)*/
void drawBoard(int, int, int, int, int, int);
//Set color at the cursor on the screen
void setColor(WORD);
//Draw the box
void drawBox(int, int, int, int, int, int);
//Animation when dead
void animation(int, int, int, int, int, int);
//loading animation
void loading(int, int, int, int, int, int);