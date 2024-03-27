
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

    int getStartX();
    int getStartY();
    void setStartX(int X);
    void setStartY(int Y);

    int getEndX();
    int getEndY();
    void setEndX(int X);
    void setEndY(int Y);

    void StartMoveX(char sign);
    void StartMoveY(char sign);

    void EndMoveX(char sign);
    void EndMoveY(char sign);

	void DrawLine(const char* m[], int mapsizeX, int mapsizeY);
	void DrawLine(const char* m[], int mapsizeX, int mapsizeY, int ax1, int ay1, int ax2, int ay2);
   
    

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

    int getPointAX();
    int getPointAY();
    void setPointAX(int X);
    void setPointAY(int Y);

    int getPointBX();
    int getPointBY();
    void setPointBX(int X);
    void setPointBY(int Y);

    int getPointCX();
    int getPointCY();
    void setPointCX(int X);
    void setPointCY(int Y);

    void AMoveX(char sign);
    void AMoveY(char sign);

    void BMoveX(char sign);
    void BMoveY(char sign);

    void CMoveX(char sign);
    void CMoveY(char sign);

   
    
    void DrawTriangle(const char* m[], int mapsizeX, int mapsizeY);
};


