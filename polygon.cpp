#include "polygon.h"
Polygon::~Polygon()
{
    delete[] cords;
    cords = nullptr;
}

Polygon::Polygon(const Coordinate sentCords[], const int amountOfCoordinates)
{
    shapeType = name;
    cords = new Coordinate[amountOfCoordinates];

    for (int i = 0; i < amountOfCoordinates; i++)
    {
        cords[i] = sentCords[i];
    }
}

double Polygon::Area()
{
    std::cout << "AREEEO: " << cords[3].GetX() << '\n';
    return -1;
}
double Polygon ::Circumference()
{
    return 0;
}
Coordinate Polygon::Position()
{
    Coordinate centerCord;
    centerCord = cords[0];

    return centerCord;
}

bool IsConvex()
{
    return true; // Ej klar
}