#pragma once


#include <iostream>
#include <windows.h>
#include <conio.h>
#include <cmath>

int CoorTranf(int x, int y, int SizeX, int SizeY);

class Point
{
private:

	int PointX;
	int PointY;


public:
	Point()
	{
		PointX = 0;
		PointY = 0;
	}
	Point(int ax, int ay)
	{
		PointX = ax;
		PointY = ay;

	}
	int getX();
	int getY();
	void setX(int X);
	void setY(int Y);
	void PointMoveX(char sign);
	void PointMoveY(char sign);
	void DrawPoint(const char* m[], int mapsizeX, int mapsizeY);
};
