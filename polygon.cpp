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
    this->amountOfCoordinates = amountOfCoordinates;
}

double Polygon::Area()
{
    // Not finished
    return -1;
}
double Polygon::Circumference()
{
    // Not finished
    return 0;
}
Coordinate Polygon::Position()
{
    double x = 0;
    double y = 0;
    for (int i = 0; i < amountOfCoordinates; i++)
    {
        x += cords[i].GetX();
        y += cords[i].GetY();
    }

    double centerX = (x / amountOfCoordinates);
    double centerY = (y / amountOfCoordinates);
    Coordinate centerCord(centerX, centerY);

    return centerCord;
}

bool Polygon::IsConvex()
{
    // Not finished
    return true;
}