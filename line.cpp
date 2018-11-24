#include "line.h"
Line::Line(const Coordinate c1, const Coordinate c2)
{
    shapeType = name;
    cords[0] = c1;
    cords[1] = c2;
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
    Coordinate centerCord;
    double centerX = (cords[0].GetX() + cords[1].GetX()) / 2;
    double centerY = (cords[0].GetY() + cords[1].GetY()) / 2;

    centerCord.SetX(centerX);
    centerCord.SetY(centerY);
    return centerCord;
}

bool Line::IsConvex()
{
    return false;
}