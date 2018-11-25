#include "line.h"
Line::Line(const Coordinate sentCords[])
{
    shapeType = name;
    for (int i = 0; i < amountOfCoordinates; i++)
    {
        cords[i] = sentCords[i];
    }
}

double Line::Area()
{
    return -1;
}

double Line::Circumference()
{
    return 0;
}

Coordinate Line::Position()
{
    double totX = 0;
    double totY = 0;
    for (int i = 0; i < amountOfCoordinates; i++)
    {
        totX += cords[i].GetX();
        totY += cords[i].GetY();
    }
    double centerX = (totX) / amountOfCoordinates;
    double centerY = (totY) / amountOfCoordinates;

    Coordinate centerCord(centerX, centerY);
    return centerCord;
}

bool Line::IsConvex()
{
    return false;
}