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

	void DrawLine(const char* m[], int mapsizeX, int mapsizeY);
	void DrawLine(const char* m[], int mapsizeX, int mapsizeY, int ax1, int ay1, int ax2, int ay2);
    int CoorTranf(int x, int y, int SizeX, int SizeY);
    

};

class Triangl : public Line
{
private: 
    Point A;
    Point B;
    Point C;

public:
    Triangl() {}
    Triangl(int x1, int y1, int x2, int y2, int x3, int y3)
    {
        A.setX(x1);
        A.setY(y1);
        B.setX(x2);
        B.setY(y2);
        C.setX(x3);
        C.setY(y3);

    }
    void DrawTriangle(const char* m[], int mapsizeX, int mapsizeY);


};


void Line::DrawLine(const char* m[], int mapsizeX, int mapsizeY)
{

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
void Line::DrawLine(const char* m[], int mapsizeX, int mapsizeY, int ax1, int ay1, int ax2, int ay2)
{

    int x1 = ax1;
    int y1 = ay1;
    int x2 = ax2;
    int y2 = ay2;

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
int Line::CoorTranf(int x, int y, int SizeX, int SizeY)
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

void Triangl::DrawTriangle(const char* m[], int mapsizeX, int mapsizeY)
{
    int x1 = A.getX();
    int y1 = A.getY();
    int x2 = B.getX();
    int y2 = B.getY();
    int x3 = C.getX();
    int y3 = C.getY();


    DrawLine(m, mapsizeX, mapsizeY, x1, y1, x2, y2);
    DrawLine(m, mapsizeX, mapsizeY, x2, y2, x3, y3);
    DrawLine(m, mapsizeX, mapsizeY, x3, y3, x1, y1);



}

