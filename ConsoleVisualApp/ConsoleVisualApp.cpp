
#include "ClassLine.h"

const int MapSizeX = 60;
const int MapSizeY = 30;
int lx1=30;
int ly1=30;
int lx2=0;
int ly2=0;


void DrawMap();



const char* Map[MapSizeY*MapSizeX];



int main()
{
    Line line(10, 5, 30, 30);

    for (int i = 1; i <= MapSizeY * MapSizeX; i++)
    {
        Map[i] = " ";
    }


    line.DrawLine(Map, MapSizeX, MapSizeY);
    
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






