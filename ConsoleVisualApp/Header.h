#pragma once


#include <iostream>
#include <conio.h>
#include <cmath>



class Figure
{
private:

	int x1;
	int y1;
	int x2;
	int y2;
	
	

public:

	Figure(int ux1, int uy1, int ux2, int uy2);
	

};



Figure::Figure(int ux1, int uy1, int ux2, int uy2)
{
	x1 = ux1;
	y1 = uy1;
	x2 = ux2;
	y2 = uy2;

}



//void rounding(float num)
//{
//
//}