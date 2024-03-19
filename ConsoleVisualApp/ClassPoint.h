#pragma once


#include <iostream>
#include <conio.h>
#include <cmath>



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
};

int Point::getX()
{
	return PointX;
}
int Point::getY()
{
	return PointY;
}

void Point::setX(int X)
{
	PointX = X;

}
void Point::setY(int Y)
{
	PointY = Y;
}


int CoorTranf(int x, int y, int SizeX, int SizeY)
{
	int num;
	if (x <= SizeX && y <= SizeY)
		num = x + (y - 1) * SizeX;
	else
	{
		return 0;

		std::cout << "Error";

	}

	return num;
}