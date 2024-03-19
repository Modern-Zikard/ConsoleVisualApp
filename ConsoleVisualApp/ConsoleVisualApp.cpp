// ConsoleVisualApp.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "Header.h"

const int MapSizeX = 60;
const int MapSizeY = 30;
int lx1=30;
int ly1=30;
int lx2=0;
int ly2=0;



void DrawMap();
void drawLine(int x1, int y1, int x2, int y2);
int CoorTranf(int x, int y, int SizeX, int SizeY);

const char* Map[MapSizeY*MapSizeX];



int main()
{
    for (int i = 1; i <= MapSizeY * MapSizeX; i++)
    {
        Map[i] = " ";
    }


    
    drawLine(lx1, ly1, lx2, ly2);
    DrawMap();

    
    
    
    
    
    
}

void DrawMap()
{
    std::cout << "__________________________________________________________"<< std::endl;
    for (int i = 1; i <= MapSizeY* MapSizeX; i++)
    {
        if (i  % MapSizeX == 1)
            std::cout << "|";

        std::cout << Map[i];

        if(i  % MapSizeX == 0 && i > 0)
            std::cout << "|" << std::endl;
        

       
    }
    std::cout << "__________________________________________________________" << std::endl;

}

void drawLine(int x1, int y1, int x2, int y2) {

    const int dx = abs(x2 - x1);
    const int dy = abs(y2 - y1);
    const int signX = x1 < x2 ? 1 : -1;
    const int signY = y1 < y2 ? 1 : -1;
    int err = dx - dy;
    Map[CoorTranf(x2, y2, MapSizeX, MapSizeY)] = "*";
    while (x1 != x2 || y1 != y2)
    {
        Map[CoorTranf(x1, y1, MapSizeX, MapSizeY)] = "*";
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

int CoorTranf(int x, int y, int SizeX, int SizeY)
{
    int num;
    if (x <= SizeX && y <= SizeY)
        num = x + (y-1) * SizeX;
    else 
    {
        return 0;

        std::cout << "Error";

    }

    return num;
}


