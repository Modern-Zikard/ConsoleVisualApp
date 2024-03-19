#pragma once
#include "ClassLine.h"

const int MapSizeX = 34;
const int MapSizeY = 18;


void DrawMap();



const char* Map[MapSizeY*MapSizeX];



int main()
{
   
    Triangl triangl1(18, 10, 26, 1, 10, 1);
    Triangl triangl2(18, 10, 34, 10, 34, 18);
    Triangl triangl3(18, 10, 1, 10, 1, 18);

    for (int i = 1; i <= MapSizeY * MapSizeX; i++)
    {
        Map[i] = " ";
    }
   triangl1.DrawTriangle(Map, MapSizeX, MapSizeY);
   triangl2.DrawTriangle(Map, MapSizeX, MapSizeY);
   triangl3.DrawTriangle(Map, MapSizeX, MapSizeY);
   
    
    
    DrawMap();

}

void DrawMap()
{
    std::cout << "____________________________________________________________"<< std::endl;
    for (int i = 1; i <= MapSizeY* MapSizeX; i++)
    {
        if (i  % MapSizeX == 1)
            std::cout << "|";

        std::cout << Map[i];

        if(i  % MapSizeX == 0 && i > 0)
            std::cout << "|" << std::endl;
       
    }
    std::cout << "____________________________________________________________" << std::endl;

}






