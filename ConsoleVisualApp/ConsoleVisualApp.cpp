#pragma once
#include "ClassLine.h"

const int MapSizeX = 34;
const int MapSizeY = 18;


void DrawMap();



const char* Map[MapSizeY*MapSizeX];

void FillMap(const char* m[], int mapsizeX, int mapsizeY);


int main()
{
    Line line(1, 1, 1, 1);

    while (line.getEndX() <= MapSizeX || line.getEndY() <= MapSizeY)
    {
        system("cls");

        FillMap(Map, MapSizeX, MapSizeY);
        line.DrawLine(Map, MapSizeX, MapSizeY);
        DrawMap();
        line.EndMoveX('+');
        line.EndMoveY('+');

    }

    while (line.getEndY() >= 1)
    {
        system("cls");

        FillMap(Map, MapSizeX, MapSizeY);
        line.DrawLine(Map, MapSizeX, MapSizeY);
        DrawMap();
        line.EndMoveY('-');
        

    }

    
    /*while(point.getX() <= MapSizeX)
    {
        system("cls");
        
        
        FillMap(Map, MapSizeX, MapSizeY);
        point.DrawPoint(Map, MapSizeX, MapSizeY);
        DrawMap();
        point.PointMoveX();
        
    }*/
    

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



void FillMap(const char* m[], int mapsizeX, int mapsizeY)
{
    for (int i = 1; i <= mapsizeY * mapsizeX; i++)
    {
        m[i] = " ";
    }

}


