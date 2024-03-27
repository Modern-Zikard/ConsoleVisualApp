

#include "ClassCircle.h"

void Circle::DrawCircle(const char* m[], int mapsizeX, int mapsizeY)
{
	int x0 = Center.getX();
	int y0 = Center.getY();
	int x = 0;
	int y = Radius;
	int delta = 1 - 2 * Radius;
	int error = 0;

	while (y >= 0) {
		m[CoorTranf(x0 + x, y0 + y, mapsizeX, mapsizeY)] = "0";
		m[CoorTranf(x0 + x, y0 - y, mapsizeX, mapsizeY)] = "0";
		m[CoorTranf(x0 - x, y0 + y, mapsizeX, mapsizeY)] = "0";
		m[CoorTranf(x0 - x, y0 - y, mapsizeX, mapsizeY)] = "0";
		
		error = 2 * (delta + y) - 1;
		if (delta < 0 && error <= 0) 
		{
			++x;
			delta += 2 * x + 1;
			continue;
		}
		if (delta > 0 && error > 0) 
		{
			--y;
			delta += 1 - 2 * y;
			continue;
		}
			++x;
			delta += 2 * (x - y);
			--y;
		}
	

}