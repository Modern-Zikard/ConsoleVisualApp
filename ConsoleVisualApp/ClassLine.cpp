

#include "ClassLine.h"

int Line::getStartX() { return Start.getX(); }
int Line::getStartY() { return Start.getY(); }
void Line::setStartX(int X) { Start.setX(X); }
void Line::setStartY(int Y) { Start.setY(Y); }

int Line::getEndX() { return End.getX(); }
int Line::getEndY() { return End.getY(); }
void Line::setEndX(int X) { End.setX(X); }
void Line::setEndY(int Y) { End.setY(Y); }

void Line::StartMoveX(char sign) { Start.PointMoveX(sign); }
void Line::StartMoveY(char sign) { Start.PointMoveY(sign); }

void Line::EndMoveX(char sign) { End.PointMoveX(sign); }
void Line::EndMoveY(char sign) { End.PointMoveY(sign); }

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
    m[CoorTranf(x2, y2, mapsizeX, mapsizeY)] = "0";
    while (x1 != x2 || y1 != y2)
    {
        m[CoorTranf(x1, y1, mapsizeX, mapsizeY)] = "0";
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
    m[CoorTranf(x2, y2, mapsizeX, mapsizeY)] = "0";
    while (x1 != x2 || y1 != y2)
    {
        m[CoorTranf(x1, y1, mapsizeX, mapsizeY)] = "0";
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

int Triangl::getPointAX() { return A.getX(); }
int Triangl::getPointAY() { return A.getY(); }
void Triangl::setPointAX(int X) { A.setX(X); }
void Triangl::setPointAY(int Y) { A.setY(Y); }

int Triangl::getPointBX() { return B.getX(); }
int Triangl::getPointBY() { return B.getY(); }
void Triangl::setPointBX(int X) { B.setX(X); }
void Triangl::setPointBY(int Y) { B.setY(Y); }

int Triangl::getPointCX() { return C.getX(); }
int Triangl::getPointCY() { return C.getY(); }
void Triangl::setPointCX(int X) { C.setX(X); }
void Triangl::setPointCY(int Y) { C.setY(Y); }

void Triangl::AMoveX(char sign) { A.PointMoveX(sign); }
void Triangl::AMoveY(char sign) { A.PointMoveY(sign); }
void Triangl::BMoveX(char sign) { B.PointMoveX(sign); }
void Triangl::BMoveY(char sign) { B.PointMoveY(sign); }
void Triangl::CMoveX(char sign) { C.PointMoveX(sign); }
void Triangl::CMoveY(char sign) { C.PointMoveY(sign); }

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

