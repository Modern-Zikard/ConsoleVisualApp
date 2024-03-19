#pragma once

#include "ClassPoint.h"

class Line
{
private:

	Point Start;
	Point End;

public:

	Line(){}
	Line(Point start, Point end)
	{
		Start = start;
		End = end;
		
	}
	Line(int x1, int y1, int x2, int y2)
	{
		Start.setX(x1);
		Start.setY(y1);
		End.setX(x2);
		End.setY(y2);

	}

	void DrawLine(const char *m[], int mapsizeX, int mapsizeY);
	

};

void Line::DrawLine(const char *m[], int mapsizeX, int mapsizeY) {

    int x1 = Start.getX();
    int y1 = Start.getY();
    int x2 = End.getX();
    int y2 = End.getY();

    const int dx = abs(x2 - x1);
    const int dy = abs(y2 - y1);
    const int signX = x1 < x2 ? 1 : -1;
    const int signY = y1 < y2 ? 1 : -1;
    int err = dx - dy;
    m[CoorTranf(x2, y2, mapsizeX, mapsizeY)] = "*";
    while (x1 != x2 || y1 != y2)
    {
        m[CoorTranf(x1, y1, mapsizeX, mapsizeY)] = "*";
        int err2 = err * 2;
        if (err2 > -dy)
        {
            err -= dy;
            x1 += signX;
        }
        if (err2 < dx)
        {
            err += dx;
            y1 += signY;
        }
    }

}