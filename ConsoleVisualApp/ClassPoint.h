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