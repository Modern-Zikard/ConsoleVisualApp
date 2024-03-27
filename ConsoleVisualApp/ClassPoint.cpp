

#include "ClassPoint.h"

int Point::getX() { return PointX; }
int Point::getY() { return PointY; }

void Point::setX(int X) { PointX = X; }
void Point::setY(int Y) { PointY = Y; }

void Point::DrawPoint(const char* m[], int mapsizeX, int mapsizeY)
{
	m[CoorTranf(PointX, PointY, mapsizeX, mapsizeY)] = "0";
}

void Point::PointMoveX(char sign)
{
	switch (sign)
	{
	case '-':PointX--; break;
	case '+':PointX++; break;
	}
}
void Point::PointMoveY(char sign)
{
	switch (sign)
	{
	case '-':PointY--; break;
	case '+':PointY++; break;
	}
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
