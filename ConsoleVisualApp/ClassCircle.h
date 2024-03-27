

#include "ClassPoint.h"

class Circle
{
private:
	Point Center;
	int Radius;
public:
	Circle(){}
	Circle(Point cen, int rad)
	{
		Center = cen;
		Radius = rad;
	}
	Circle(int cx, int cy, int rad)
	{
		Center.setX(cx);
		Center.setY(cy);
		Radius = rad;
	}

	void DrawCircle(const char* m[], int mapsizeX, int mapsizeY);



};
