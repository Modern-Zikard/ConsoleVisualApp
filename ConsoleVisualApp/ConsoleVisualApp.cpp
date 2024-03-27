
#include "ClassLine.h"
#include "ClassCircle.h"

const int MapSizeX = 34;
const int MapSizeY = 18;


void DrawMap();



const char* Map[MapSizeY*MapSizeX];

void FillMap(const char* m[], int mapsizeX, int mapsizeY);


int main()
{
    Line line(1, 1, 1, 1);

    Circle circle(17, 9, 1);

    
    FillMap(Map, MapSizeX, MapSizeY);
    circle.DrawCircle(Map, MapSizeX, MapSizeY);
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



void FillMap(const char* m[], int mapsizeX, int mapsizeY)
{
    for (int i = 1; i <= mapsizeY * mapsizeX; i++)
    {
        m[i] = " ";
    }

}




/*while (line.getEndY() <= MapSizeY)
    {
        system("cls");

        FillMap(Map, MapSizeX, MapSizeY);
        line.DrawLine(Map, MapSizeX, MapSizeY);
        DrawMap();

        line.EndMoveY('+');

    }

    while (line.getEndX() <= MapSizeX/2)
    {
        system("cls");

        FillMap(Map, MapSizeX, MapSizeY);
        line.DrawLine(Map, MapSizeX, MapSizeY);
        DrawMap();

        line.EndMoveX('+');

    }

    while (line.getStartX() <= line.getEndX())
    {
        system("cls");

        FillMap(Map, MapSizeX, MapSizeY);
        line.DrawLine(Map, MapSizeX, MapSizeY);
        DrawMap();

        line.StartMoveX('+');

    }

    while (line.getEndX() <= MapSizeX / 2)
    {
        system("cls");

        FillMap(Map, MapSizeX, MapSizeY);
        line.DrawLine(Map, MapSizeX, MapSizeY);
        DrawMap();

        line.EndMoveX('+');

    }

    while (line.getEndX() >= 1 || line.getStartX() <= MapSizeX)
    {
        system("cls");

        FillMap(Map, MapSizeX, MapSizeY);
        line.DrawLine(Map, MapSizeX, MapSizeY);
        DrawMap();

        line.EndMoveX('-');
        line.EndMoveY('-');
        line.StartMoveX('+');
        line.StartMoveY('+');

    }*/